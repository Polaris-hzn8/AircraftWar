/*************************************************************************
    > File Name: enemyplane.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-19 11:35:09
************************************************************************/

#include <QDebug>
#include "config.h"
#include "enemyplane.h"

EnemyPlane::EnemyPlane() {
    //初始化成员变量
    _pic.load(ENEMY_PLANE1_PATH);
    _x = 0;
    _y = 0;
    _isUsed = false;
    _speed = ENEMY_SPEED1;
    _rect.setWidth(_pic.width());
    _rect.setHeight(_pic.height());
    _rect.moveTo(_x, _y);
}

void EnemyPlane::updatePosition() {
    if (!_isUsed) return;
    _y += _speed;
    _rect.moveTo(_x, _y);
    if (_y >= GAME_WINDOWS_HEIGHT + _rect.height()) {
        qDebug() << "a enemyplane is inactivated.";
        _isUsed = false;
    }
}
