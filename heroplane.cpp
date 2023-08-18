/*************************************************************************
    > File Name: heroplane.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 23:59:20
************************************************************************/

#include "config.h"
#include "heroplane.h"

HeroPlane::HeroPlane() {
    //初始化成员变量
    _pic.load(HERO_PLANE2_PATH);//加载飞机资源
    _x = (GAME_WINDOWS_WIDTH - _pic.width())* 0.5;
    _y = GAME_WINDOWS_HEIGHT - _pic.height() - 50;
    //碰撞检测矩形
    _rect.setWidth(_pic.width());
    _rect.setHeight(_pic.height());
    _rect.moveTo(_x, _y);
}

void HeroPlane::setPosition(int x, int y) {
    _x = x;
    _y = y;
    _rect.moveTo(_x, _y);
}

void HeroPlane::shoot() {

}

