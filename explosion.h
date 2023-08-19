/*************************************************************************
    > File Name: explosion.h
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-19 13:29:10
************************************************************************/

#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <QPixmap>

class Explosion {
public:
    Explosion();
    void updateExplosionIMG();//爆炸动画中的图片切换
public:
    int _x;
    int _y;
    int _idx;//当前播放图片的下标
    bool _isPlaying;
    int _timestamp;//每张图片播放的时间间隔
    QVector<QPixmap> _picArray;//爆炸图片数组
};

#endif // EXPLOSION_H
