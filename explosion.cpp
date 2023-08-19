/*************************************************************************
    > File Name: explosion.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-19 13:29:19
************************************************************************/

#include "config.h"
#include "explosion.h"

Explosion::Explosion() {
    //成员变量初始化
    _x = 0;
    _y = 0;
    _idx = 0;
    _isPlaying = false;
    _timestamp = 0;
    for (int i = 0; i < EXPLOSION_IMG_MAXINDEX; ++i) {
        QString imgPath = QString(EXPLOSION_IMG_PATH).arg(i + 1);
        _picArray.push_back(QPixmap(imgPath));
    }
}

void Explosion::updateExplosionIMG() {
    if (!_isPlaying) return;
    else {
        _timestamp++;
        if (_timestamp < EXPLOSION_IMG_INTERVAL) return;
        else {
            //爆炸效果开始播放
            _timestamp = 0;
            _idx++;
            if (_idx >= EXPLOSION_IMG_MAXINDEX) { _idx = 0; _isPlaying = false; }
        }
    }
}
