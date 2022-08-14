#include "Game.h"

//按键控制人物移动
int Game::Move(int map[M][N], char ch)
{
	static int step = 0;
	//横纵坐标
	int offsetx = 0;
	int offsety = 0;
	switch (ch)
	{
		//向上移动
	case 'w':case 'W':
		offsetx = -1;
		offsety = 0;
		if (push(map, offsetx, offsety) == 1)
			step++; //步数加一
		break;
		//向下移动
	case 's':case 'S':
		offsetx = 1;
		offsety = 0;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
		//向左运动
	case 'a':case 'A':
		offsetx = 0;
		offsety = -1;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
		//向右运动
	case 'd':case 'D':
		offsetx = 0;
		offsety = 1;
		if (push(map, offsetx, offsety) == 1)
			step++;
		break;
	default:
		break;
	}
	return step;
}

//界面打印
//传入一个二维数组和一个关卡数
void Game::Drop(int map[M][N], int c)
{
	cout << "\t\t" << "**********************第 " << c << " 关**************************" << endl;
	cout << "\t\t" << "***************W-w:向上  S-s:向下*****************" << endl;
	cout << "\t\t" << "***************A-a:向左  D-d:向右*****************" << endl;
	cout << endl;

	//嵌套循环是为了遍历这个二维数组
	for (int i = 0; i < M; i++)
	{
		cout << "	";
		for (int j = 0; j < N; j++)
		{
			switch (map[i][j])
			{
				//打印空地
			case 0:
				cout << " ";
				break;
				//打印墙壁
			case 1:
				cout << "■";
				break;
				//打印玩家
			case 2:
				cout << "♀";
				posX = i;
				posY = j;
				break;
				//打印箱子
			case 3:
				cout << "□";
				break;
				//打印终点
			case 4:
				cout << "○";
				break;
			case 6:
				cout << "★";
				posX = i;
				posY = j;
				break;
			case 7:
				cout << "●";
				break;
			default:
				break;
			}
		}
		cout << endl; //换行
	}
}

//判断游戏胜利条件
int Game::juide(int map[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (4 == map[i][j] || 6 == map[i][j]) //地图中还存在重点/终点+人
				return 1;
		}
	}
	return 0;
}

//更新游戏
int Game::push(int map[M][N], int offsetX, int offsetY)
{
	Postion(map); //确定人物坐标
	if (map[posX + offsetX][posY + offsetY] == 0) //下一格是空地
	{
		map[posX][posY] -= 2;
		map[posX + offsetX][posY + offsetY] += 2; //下一格变为人或人+终点
		//改变人的坐标
		posX += offsetX;
		posY += offsetY;
	}
	else if (map[posX + offsetX][posY + offsetY] == 3) //下一格是箱子
	{
		if (map[posX + offsetX * 2][posY + offsetY * 2] == 0
			|| map[posX + offsetX * 2][posY + offsetY * 2] == 4) //下两格是空地/终点
		{
			map[posX][posY] -= 2; //上一格变为空地/终点
			map[posX + offsetX][posY + offsetY] == 2; //下一格变为人
			map[posX + offsetX * 2][posY + offsetY * 2] == 3; //下两格变为箱子/箱子+终点
			posX += offsetX;
			posY += offsetY;
		}
	}
	else if (map[posX + offsetX][posY + offsetY] == 4) //下一格是终点
	{
		map[posX][posY] -= 2;
		map[posX + offsetX][posY + offsetY] == 6; //下一格变为人+终点
		posX += offsetX;
		posY += offsetY;
	}
	else if (map[posX + offsetX][posY + offsetY] == 7) //下一格是箱子+终点
	{
		if (map[posX + offsetX * 2][posY + offsetY * 2] == 8
			|| map[posX + offsetX * 2][posY + offsetY * 2] == 4) //下两格是空地/终点
		{
			map[posX][posY] -= 2;
			map[posX + offsetX][posY + offsetY] = 6; //下一格变为人+终点
			map[posX + offsetX * 2][posY + offsetY * 2] += 3; //下两格变为箱子/箱子+终点
			posX += offsetX;
			posY += offsetY;
		}
	}
	else //人物不能移动
		return 0;
	return 1;
}

//找到人物坐标
void Game::Postion(int map[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (2 == map[i][j] || 6 == map[i][j]) //地图中存在终点/终点+人
			{
				//给任务坐标赋值
				posX = i;
				posY = j;
			}
		}
	}
}