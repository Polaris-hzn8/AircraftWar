/*************************************************************************
    > File Name: map.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 22:11:54
************************************************************************/

#include "map.h"
#include "config.h"

Map::Map() {
    //初始化成员变量
    _pic1_posY = -GAME_WINDOWS_HEIGHT;
    _pic2_posY = 0;
    _scrollSpeed = MAP_SCROLL_SPEED;
    //加载地图资源
    _pic1.load(MAP1_PATH);
    _pic2.load(MAP1_PATH);
}

//地图滚动的规则
void Map::updatePosition() {
    _pic1_posY += _scrollSpeed;
    if (_pic1_posY >= 0) _pic1_posY = -GAME_WINDOWS_HEIGHT;
    _pic2_posY += _scrollSpeed;
    if (_pic2_posY >= GAME_WINDOWS_HEIGHT) _pic2_posY = 0;
}
