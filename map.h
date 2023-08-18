/*************************************************************************
    > File Name: map.h
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 22:12:00
************************************************************************/

#ifndef MAP_H
#define MAP_H

#include <QPixmap>

class Map {
public:
    Map();
    void updatePosition();//地图滚动坐标计算
    QPixmap _pic1;
    QPixmap _pic2;
    int _pic1_posY;
    int _pic2_posY;
    int _scrollSpeed;
};

#endif // MAP_H
