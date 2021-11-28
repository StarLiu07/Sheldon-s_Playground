#pragma once
#include <iostream>
using namespace std;
#include <Windows.h>
#include "CreateMap.h"

class GameStart
{
public:
	//开始游戏
	void StartGame();

	//创建蛇
	void CreateSnake();

	//gotoxy
	void gotoxy(int x, int y);//自己定义一个gotoxy，将光标跳到x列y行 
};