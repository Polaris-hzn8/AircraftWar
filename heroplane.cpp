/*************************************************************************
    > File Name: heroplane.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 23:59:20
************************************************************************/

#include <QDebug>
#include "config.h"
#include "heroplane.h"

HeroPlane::HeroPlane() {
    //初始化成员变量
    _pic.load(HERO_PLANE2_PATH);//加载飞机资源
    _x = (GAME_WINDOWS_WIDTH - _pic.width()) / 2;
    _y = GAME_WINDOWS_HEIGHT - _pic.height() - 50;
    //碰撞检测矩形
    _rect.setWidth(_pic.width());
    _rect.setHeight(_pic.height());
    _rect.moveTo(_x, _y);
}

void HeroPlane::updatePosition(int x, int y) {
    _x = x;
    _y = y;
    _rect.moveTo(_x, _y);
}

void HeroPlane::shoot() {
    //累加时间间隔记录
    _timestamp++;
    if (_timestamp < BULLET_INTERVAL2) return;
    else {
        _timestamp = 0;
        for (int i = 0; i < BULLET_MAXNUM; ++i) {
            auto ptr = &_bullets[i];
            if (!ptr->_isUsed) {
                ptr->_isUsed = true;//修改使用标识
                ptr->_x = _x + _rect.width()/2 - 10;//设置子弹发射坐标
                ptr->_y = _y - 25;
                break;
            }
        }
    }
}

