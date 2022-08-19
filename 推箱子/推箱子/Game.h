#pragma once
#include <iostream>
using namespace std;

//地图长宽
#define M 10
#define N 10

class Game
{
public:
	//存储人物坐标
	int Px, Py;
	//打印地图
	void ShowMap(int map[M][N]);
	//人物移动
	void Move(int map[M][N],char select);
	//找到人物坐标
	void FindPlayer(int map[M][N]);
};