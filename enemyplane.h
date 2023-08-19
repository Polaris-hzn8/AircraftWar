/*************************************************************************
    > File Name: enemyplane.h
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-19 11:35:17
************************************************************************/

#ifndef ENEMYPLANE_H
#define ENEMYPLANE_H

#include <QPixmap>

class EnemyPlane {
public:
    EnemyPlane();
    void updatePosition();
public:
    int _x;
    int _y;
    QRect _rect;
    QPixmap _pic;
    bool _isUsed;
    int _speed;
};

#endif // ENEMYPLANE_H
