/*************************************************************************
    > File Name: main.cpp
    > Author: Polaris-hzn8
    > Mail: 3453851623@qq.com
    > Created Time: 2023-08-18 20:31:22
************************************************************************/

#include "mainscene.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainScene w;
    w.show();
    return a.exec();
}
