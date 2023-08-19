/*************************************************************************
    > File Name: mainscene.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 20:31:40
************************************************************************/

#include <QIcon>
#include <QMouseEvent>
#include <QPainter>
#include <QDebug>
#include "config.h"
#include "gamescene.h"

GameScene::GameScene(QWidget *parent):QWidget(parent) {
    //初始化场景数据
    initScene();
    //在屏幕中刷新游戏内容
    startGame();
}

void GameScene::initScene() {
    setFixedSize(GAME_WINDOWS_WIDTH, GAME_WINDOWS_HEIGHT);
    setWindowTitle(GAME_WINDOWS_TITLE);
    setWindowIcon(QIcon(GAME_ICON));
    //利用定时器 设置游戏刷新时间间隔
    _timer.setInterval(GAME_FRESH_SPEED);
}

void GameScene::startGame() {
    //利用定时器刷新屏显
    _timer.start();
    //游戏每一帧需要执行的操作
    connect(&_timer, &QTimer::timeout, this, [=](){
        //更新游戏中所有元素的坐标
        freshPosition();
        //将所有元素重新绘制到屏幕上
        update();
    });
}

void GameScene::freshPosition() {
    //更新地图坐标（由系统更新）
    _map.updatePosition();
    //更新飞机的坐标（由玩家主动触发的mouseMoveEvent更新）
    //_heroplane.setPosition();
    //发射子弹 尝试更新子弹使用状态并设置其初始坐标
    _heroplane.shoot();
    //计算子弹坐标 更新所有非空闲状态的子弹的坐标（由系统更新）
    for (int i = 0; i < BULLET_MAXNUM; ++i) {
        if (_heroplane._bullets[i]._isUsed) {
            _heroplane._bullets[i].updatePosition();
        }
    }
}

void GameScene::paintEvent(QPaintEvent *e) {
    QPainter painter(this);
    //绘制游戏地图
    painter.drawPixmap(0, _map._pic1_posY, _map._pic1);
    painter.drawPixmap(0, _map._pic2_posY, _map._pic2);
    //绘制玩家飞机
    painter.drawPixmap(_heroplane._x, _heroplane._y, _heroplane._pic);
    //绘制飞机子弹
    for (int i = 0; i < BULLET_MAXNUM; ++i) {
        if (_heroplane._bullets[i]._isUsed) {
            auto bullet = _heroplane._bullets[i];
            int x = bullet._x;
            int y = bullet._y;
            QPixmap pic = bullet._pic;
            painter.drawPixmap(x, y, pic);
        }
    }
}

void GameScene::mouseMoveEvent(QMouseEvent *e) {
    //鼠标的有效移动范围
    //x: 0 - GAME_WINDOWS_WIDTH - _heroplane._rect.width()
    //y: 0 - GAME_WINDOWS_HEIGHT - _heroplane._rect.height()
    //1.鼠标在游戏场景内 则根据鼠标位置设置飞机位置
    int x = e->x() - _heroplane._rect.width()/2;
    int y = e->y() - _heroplane._rect.height()/2;
    //2.鼠标在游戏场景外 则自动设置为边界位置 防止飞机飞出边界
    if (x < 0) x = 0;
    if (x >= GAME_WINDOWS_WIDTH - _heroplane._rect.width()) x = GAME_WINDOWS_WIDTH - _heroplane._rect.width();
    if (y < 0) y = 0;
    if (y >= GAME_WINDOWS_HEIGHT - _heroplane._rect.height()) y = GAME_WINDOWS_HEIGHT - _heroplane._rect.height();
    //3.设置鼠标位置
    _heroplane.updatePosition(x, y);
}

GameScene::~GameScene() {

}

