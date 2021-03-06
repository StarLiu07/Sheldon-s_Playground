#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>//windows编程头文件
#include <time.h>//欢迎大家到QQ群660142320学习交流
#include <conio.h>//控制台输入输出头文件

#define MAPWIDTH 78//地图的宽度
#define MAPHEIGHT 24//地图高度
#define SNAKESIZE 100//蛇的长度

#ifndef __cplusplus

typedef char bool;
#define false 0
#define true  1

#endif

int sorce = 0;//记录玩家得分

//食物属性
struct {

	int x;
	int y;
}food;

//蛇属性
struct {
	int len;//蛇的长度
	int speed;//蛇的移动速度
	int x[SNAKESIZE];//蛇身的横坐标
	int y[SNAKESIZE];//蛇身的纵坐标
}snake;

//来表示蛇的移动方向
int key = 72;

//判断蛇是否吃了食物
int changeFlag = 0;

//绘制地图
void DrawMap();

//gotoxy
void gotoxy(int x, int y);

//控制方向
void keyDown();

//绘制食物
void createFood();

//蛇的状态
bool snakeStatus();


//将光标移动到控制台的(x,y)坐标点处
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int i;
//绘制地图
void DrawMap()
{
	//打印上下框  宽度
	for (int i = 0; i <= MAPWIDTH; i += 2)//i+2是因为■占两格
	{
		gotoxy(i, 0);
		cout << "■";
		gotoxy(i, MAPHEIGHT);
		cout << "■";
	}

	//打印左右边框  
	for (int i = 1; i < MAPHEIGHT; i++)
	{
		gotoxy(0, i);
		cout << "■";
		gotoxy(MAPWIDTH, i);
		cout << "■";
	}

	//随机生成食物
	while (1)
	{
		srand((unsigned int)time(NULL));
		food.x = rand() % (MAPWIDTH - 4) + 2;
		food.y = rand() % (MAPHEIGHT - 2) + 1;

		if (food.x % 2 == 0)
		{
			break;
		}

	}

	//打印食物
	gotoxy(food.x, food.y);
	cout << "￥";

	//初始化蛇的属性
	snake.len = 3;//蛇的长度
	snake.speed = 3;//蛇的速度

	//在屏幕中间生成蛇头
	snake.x[0] = MAPWIDTH / 2 + 1;
	snake.y[0] = MAPHEIGHT / 2;

	//打印蛇头
	gotoxy(snake.x[0], snake.y[0]);
	cout << "■";

	int temp = snake.x[0] + 2;
	//生成蛇身
	for (int i = 1; i < snake.len; i++)
	{
		//横坐标+2，纵坐标不变
		snake.x[i] = temp;
		gotoxy(snake.x[i], snake.y[0]);
		cout << "■";
		temp += 2;
	}

	//打印完后把光标设置到最上方
	gotoxy(MAPWIDTH - 2, 0);
	return;
}

//控制蛇的方向
void keyDown()
{
	int pre_key = key;//记录前一个按键
	if (_kbhit())
	{
		fflush(stdin);//清楚缓存区数据

		//getch()读取方向键的时候会返回两次，第一次返回0或224，第二次返回的才是实际的值
		key = _getch();
		key = _getch();
	}

	/*
	* 移动蛇的时候先如果
	* changeFlag == 0,那么要擦掉最后一节，以营造移动效果
	* changeFlag !==0,那么不擦掉，以营造加长的效果
	*/

	if (changeFlag == 0)
	{
		gotoxy(snake.x[snake.len - 1], snake.y[snake.len - 1]);
		cout << "  ";//打印空白以代替蛇尾
	}

	//把蛇的身体依次向前移动一节（蛇头除外）
	for (int i = snake.len - 1; i > 0; i--)
	{
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1];
	}

	//判断按键是否与前一次的按键相反
	/**
	*控制台按键所代表的数字
	*“↑”：72
	*“↓”：80
	*“←”：75
	*“→”：77
	*/

	if (pre_key == 72 && key == 80)
	{
		key = 72;
	}
	else if (pre_key == 80 && key == 72)
	{
		key = 80;
	}
	else if (pre_key == 75 && key == 77)
	{
		key = 75;
	}
	else if (pre_key == 77 && key == 75)
	{
		key = 77;
	}

	//判断蛇头应该往那个方向
	switch (key)
	{
	case 72: //往上
		snake.y[0]--;
		break;
	case 80: //往下
		snake.y[0]++;
		break;
	case 77: //往右
		snake.x[0] += 2;
		break;
	case 75: //往左
		snake.x[0] -= 2;
	}

	//打印蛇头
	gotoxy(snake.x[0], snake.y[0]);
	cout << "■";
	//光标回到上方
	gotoxy(MAPWIDTH - 2, 0);
	//由于没有吃到食物，changeFlag为0
	changeFlag = 0;
	return;
}

void createFood()
{
	if (snake.x[0] == food.x && snake.y[0] == food.y)//蛇头碰到食物
	{
		//蛇头碰到食物即为要吃掉这个食物了，因此需要再次生成一个食物
		while (1)
		{
			int flag = 1;
			srand((unsigned int)time(NULL));
			food.x = rand() % (MAPWIDTH - 4) + 2;
			food.y = rand() % (MAPHEIGHT - 2) + 1;

			//随机生成的食物不能在蛇的身体上
			for (i = 0; i < snake.len; i++)
			{
				if (snake.x[i] == food.x && snake.y[i] == food.y)
				{
					flag = 0;
					break;
				}
			}
			//随机生成的食物不能横坐标为奇数，也不能在蛇身，否则重新生成
			if (flag && food.x % 2 == 0)
				break;
		}

		//绘制食物
		gotoxy(food.x, food.y);
		printf("￥");

		snake.len++;//吃到食物，蛇身长度加1
		sorce += 10;//每个食物得10分
		snake.speed -= 5;//随着吃的食物越来越多，速度会越来越快
		changeFlag = 1;//很重要，因为吃到了食物，就不用再擦除蛇尾的那一节，以此来造成蛇身体增长的效果
	}
	return;
}

bool snakeStatus()
{
	//蛇头碰到上下边界，游戏结束
	if (snake.y[0] == 0 || snake.y[0] == MAPHEIGHT)
		return false;
	//蛇头碰到左右边界，游戏结束
	if (snake.x[0] == 0 || snake.x[0] == MAPWIDTH)
		return false;
	//蛇头碰到蛇身，游戏结束
	for (i = 1; i < snake.len; i++)
	{
		if (snake.x[i] == snake.x[0] && snake.y[i] == snake.y[0])
			return false;
	}
	return true;
}

int main() {

	//绘制一个地图
	DrawMap();

	while (1)
	{
		snake.speed = 100;
		//控制方向
		keyDown();
		if (!snakeStatus())
			break;
		createFood();
		Sleep(snake.speed);
	}


	gotoxy(MAPWIDTH / 2, MAPHEIGHT / 2);
	printf("Game Over!\n");
	gotoxy(MAPWIDTH / 2, MAPHEIGHT / 2 + 1);
	printf("本次游戏得分为：%d\n", sorce);
	Sleep(5000);
	return 0;//欢迎大家到QQ群660142320学习交流

	system("pause");
	return 0;
}

