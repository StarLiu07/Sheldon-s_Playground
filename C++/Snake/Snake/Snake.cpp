// Snake.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include "GameStart.h"
#include "CreateMap.h"

int main()
{
    //开始游戏
    GameStart gs;
    gs.StartGame();

    //展示地图
    CreateMap cm;
    cm.ShowMap();

    //创建蛇
    gs.CreateSnake();

    //运行游戏
    gs.RunGame();

    system("pause>nul");
    return 0;
}
