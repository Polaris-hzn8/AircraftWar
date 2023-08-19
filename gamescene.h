/*************************************************************************
    > File Name: gamescene.h
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 20:31:51
************************************************************************/

#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QTimer>
#include <QWidget>
#include "config.h"
#include "enemyplane.h"
#include "heroplane.h"
#include "bullet.h"
#include "map.h"

class GameScene : public QWidget {
    Q_OBJECT
public:
    GameScene(QWidget *parent = nullptr);
    ~GameScene();
    //初始化游戏场景
    void initScene();
    //启动游戏
    void startGame();
    //更新所有游戏中元素的坐标
    void freshPosition();
    //将元素绘制到屏幕中(QT中的绘图事件 名称不可修改)
    void paintEvent(QPaintEvent *e);
    //重写鼠标移动事件(名称不可修改)
    void mouseMoveEvent(QMouseEvent *e);
public:
    //敌对飞机出场
    void enemyToScene();
public:
    //敌对飞机碰撞检测
    void collisionDetect();
private:
    Map _map;//当前游戏场景下的地图
    HeroPlane _heroplane;
    QTimer _timer;
private:
    int _timestamp = 0;//敌对飞机出场时间间隔
    EnemyPlane _enemys[ENEMY_MAXNUM];//敌对飞机数组
};

#endif // MAINSCENE_H
