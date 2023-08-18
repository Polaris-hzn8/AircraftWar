/*************************************************************************
    > File Name: mainscene.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 20:31:40
************************************************************************/

#include <QIcon>
#include <QPainter>
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
    connect(&_timer, &QTimer::timeout, this, [=](){
        //更新游戏中所有元素的坐标
        freshPosition();
        //将所有元素重新绘制到屏幕上
        update();
    });

}

void GameScene::freshPosition() {
    //更新地图坐标
    _map.updatePosition();
    //更新飞机的坐标
    //_heroplane.setPosition();
}

void GameScene::paintEvent(QPaintEvent *e) {
    QPainter painter(this);
    //绘制游戏地图
    painter.drawPixmap(0, _map._pic1_posY, _map._pic1);
    painter.drawPixmap(0, _map._pic2_posY, _map._pic2);
    //绘制玩家飞机
    painter.drawPixmap(_heroplane._x, _heroplane._y, _heroplane._pic);
}

GameScene::~GameScene() {

}

