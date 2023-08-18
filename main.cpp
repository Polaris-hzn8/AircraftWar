/*************************************************************************
    > File Name: main.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 20:31:22
************************************************************************/

#include "gamescene.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    GameScene gamescene;
    gamescene.show();
    return app.exec();
}
