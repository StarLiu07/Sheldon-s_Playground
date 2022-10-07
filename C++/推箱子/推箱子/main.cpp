#include <iostream>
using namespace std;
#include "Game.h"
#define M 10
#define N 10

//地图数组
int map[M][N] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,3,0,2,0,1},
	{1,0,0,0,4,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1},
};


int main()
{
	//创建游戏类对象
	Game game;
	game.ShowMap(map);

	while (1)
	{
		//用于接受用户选择
		char select;
		cin >> select;

		game.FindPlayer(map); //找到人物坐标
		game.Move(map, select);
		
	}

	system("pause");
	return 0;
}