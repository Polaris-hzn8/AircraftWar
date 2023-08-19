/*************************************************************************
    > File Name: bullet.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-19 06:16:56
************************************************************************/

#include <QDebug>
#include "bullet.h"
#include "config.h"

Bullet::Bullet() {
    //初始化私有成员 加载子弹资源
    _pic.load(BULLET1_PATH);
    _rect.setWidth(_pic.width());
    _rect.setHeight(_pic.height());
    _x = (GAME_WINDOWS_WIDTH - _pic.width()) / 2;
    _y = GAME_WINDOWS_HEIGHT;
    _rect.moveTo(_x, _y);
    _bulletSpeed = BULLET_SPEED1;
}

//子弹的移动规则 子弹向上移动
void Bullet::updatePosition() {
    if (!_isUsed) return;
    _y -= _bulletSpeed;
    _rect.moveTo(_x, _y);
    if (_y <= -_rect.height()) {
        qDebug() << "a bullet is inactivated.";
        _isUsed = false;
    }
}
