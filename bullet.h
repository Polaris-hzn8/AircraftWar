/*************************************************************************
    > File Name: bullet.h
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-19 06:17:09
************************************************************************/

#ifndef BULLET_H
#define BULLET_H

#include <QPixmap>

class Bullet {
public:
    Bullet();
    void updatePosition();//子弹移动坐标计算
    int _x;
    int _y;
    QRect _rect;
    QPixmap _pic;
    int _bulletSpeed;
    bool _isUsed = false;//子弹是否使用中
};

#endif // BULLET_H
