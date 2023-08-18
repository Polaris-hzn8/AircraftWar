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

class HeroPlane {
public:
    HeroPlane();
    void shoot();
    void setPosition(int x, int y);
    int _x;
    int _y;
    QRect _rect;
    QPixmap _pic;
};

#endif // HEROPLANE_H
