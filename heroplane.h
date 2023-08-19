/*************************************************************************
    > File Name: heroplane.h
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 23:59:12
************************************************************************/

#ifndef HEROPLANE_H
#define HEROPLANE_H

#include <QPixmap>
#include <QRect>
#include "bullet.h"
#include "config.h"

class HeroPlane {
public:
    HeroPlane();
    void shoot();
    void updatePosition(int x, int y);
    int _x;
    int _y;
    QRect _rect;
    QPixmap _pic;
public:
    Bullet _bullets[BULLET_MAXNUM];//子弹数组
    int _timestamp = 0;
};

#endif // HEROPLANE_H
