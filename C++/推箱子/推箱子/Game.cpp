#include "Game.h"

void Game::ShowMap(int map[M][N])
{

	//0为空地  1为墙壁  2为玩家  3为箱子  4为目标点  5为箱子+目标点  6为人+目标点
	//打印地图
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			switch (map[i][j])
			{
			case 0:
				cout << "  ";
				break;
			case 1: //墙壁
				cout << "■";
				break;
			case 2: //玩家
				cout << "人";
				break;
			case 3: //箱子
				cout << "箱";
				break;
			case 4: //目标点
				cout << "点";
				break;
			case 5: //箱子+目标点
				cout << "*";
				break;
			case 6: //人+目标点
				cout << "G";
				break;
			default:
				break;
			}
		}
		//打印完一行后换行
		cout << endl;
	}
}

//人物移动
void Game::Move(int map[M][N],char select)
{
	//定义将要移动的坐标
	int x, y;
	//根据按键移动位置
	switch (select)
	{
	case 'a':case 'A': //向左移动
		x = 0; y = -1;
		break;
	case 's':case 'S':
		x = -1; y = 0;
		break;
	case 'd':case 'D':
		x = 0; y = 1;
		break;
	case 'w':case 'W':
		moveUp(map);
		break;
	default:
		break;
	}


}

//找到人物坐标
void Game::FindPlayer(int map[M][N])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//判断该坐标是否为人或人+目标点
			if (map[i][j] == 2 || map[i][j] == 6)
			{
				Px = i;
				Py = j;
			}
		}
	}
}

//向上走
void Game::moveUp(int map[M][N])
{
	//前面是空地
	if (map[Px - 1][Py] == 0)
	{
		map[Px - 1][Py] = map[Px][Py]; //移动人物
		map[Px][Py] = 0; //把人物之前所在的坐标变为0(空地)
	}
}