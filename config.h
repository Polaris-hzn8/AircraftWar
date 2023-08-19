/*************************************************************************
    > File Name: config.h
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 20:47:51
************************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

/***************** 1.游戏基本配置  **********************/
#define GAME_WINDOWS_WIDTH 512
#define GAME_WINDOWS_HEIGHT 768
#define GAME_WINDOWS_TITLE "AircraftWar v1.0"
#define GAME_ICON ":/res/app.ico"

/***************** 2.游戏地图资源配置  ******************/
#define MAP1_PATH ":/res/img/img_bg_level_1.jpg"
#define MAP2_PATH ":/res/img/img_bg_level_2.jpg"
#define MAP3_PATH ":/res/img/img_bg_level_3.jpg"
#define MAP4_PATH ":/res/img/img_bg_level_4.jpg"
#define MAP5_PATH ":/res/img/img_bg_level_5.jpg"
#define MAP_SCROLL_SPEED 1 //2px per second
#define GAME_FRESH_SPEED 10 //游戏中绘制每一帧的时间间隔ms（定时绘制）

/***************** 3.英雄飞机资源配置  ******************/
#define HERO_PLANE1_PATH ":/res/img/hero.png"
#define HERO_PLANE2_PATH ":/res/img/hero2.png"

/***************** 4.飞机子弹配置  **********************/
//子弹样式
#define BULLET1_PATH ":/res/img/bullet_1.png"
#define BULLET2_PATH ":/res/img/bullet_2.png"
#define BULLET3_PATH ":/res/img/bullet_3.png"
#define BULLET4_PATH ":/res/img/bullet_4.png"
#define BULLET5_PATH ":/res/img/bullet_5.png"
#define BULLET6_PATH ":/res/img/bullet_6.png"

//子弹速度
#define BULLET_SPEED1 5
#define BULLET_SPEED2 7
#define BULLET_SPEED3 10

//子弹发射间隔时间（发射频率）
#define BULLET_INTERVAL1 10 //每10帧发射一次
#define BULLET_INTERVAL2 20 //每20帧发射一次
#define BULLET_INTERVAL3 30 //每30帧发射一次

//子弹最大数量
#define BULLET_MAXNUM 30


/***************** 5.敌对飞机资源配置  ******************/
//敌机样式
#define ENEMY_PLANE1_PATH ":/res/img/img-plane_1.png"
#define ENEMY_PLANE2_PATH ":/res/img/img-plane_2.png"
#define ENEMY_PLANE3_PATH ":/res/img/img-plane_3.png"
#define ENEMY_PLANE4_PATH ":/res/img/img-plane_4.png"
#define ENEMY_PLANE5_PATH ":/res/img/img-plane_5.png"
#define ENEMY_PLANE6_PATH ":/res/img/img-plane_6.png"
#define ENEMY_PLANE7_PATH ":/res/img/img-plane_7.png"

//敌机速度
#define ENEMY_SPEED1 1
#define ENEMY_SPEED2 2
#define ENEMY_SPEED3 3

//敌敌子弹发射间隔时间（发射频率）
#define ENEMY_BULLET_INTERVAL1 10 //每10帧发射一次
#define ENEMY_BULLET_INTERVAL2 20 //每20帧发射一次
#define ENEMY_BULLET_INTERVAL3 30 //每30帧发射一次

//敌机子弹最大数量
#define ENEMY_BULLET_MAXNUM 30

//敌机出场的间隔时间（出场频率）
#define ENEMY_INTERVAL1 50
#define ENEMY_INTERVAL2 60
#define ENEMY_INTERVAL3 70

//敌机的最大总数
#define ENEMY_MAXNUM 20


/***************** 6.爆炸特效资源配置  ******************/
#define EXPLOSION_IMG_PATH ":/res/img/bomb-%1.png"
#define EXPLOSION_IMG_INTERVAL 20
#define EXPLOSION_IMG_MAXINDEX 7
#define EXPLOSION_MAXNUM 20


#endif // CONFIG_H
