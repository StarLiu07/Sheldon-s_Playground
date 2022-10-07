#include <iostream>
using namespace std;
#include <stdio.h>
#include <graphics.h> //图形化界面
#include <stack>//包含栈

//定义地图的长、宽的宏常量
#define ROWS 10 //列
#define CLOS 10 //行
//定义窗口大小的宏常量
#define SPACE 60

//准备图片对象
IMAGE road, wall, pos, ren;

//定义一个枚举量，记录人物的探测方向
enum direct{p_up,p_down,p_left,p_right};

//准备用来做标记的类型
struct pathNode {
	int dir;//方向   0代表向上
	bool isFind;//是否走过   0代表没有走过，1代表走过
};
//创建一个点类型，记录起点和终点
struct MyPoint {
	int row;//x
	int clo;//y
};

//打印地图
void printMap(int map[ROWS][CLOS]);
//图形界面输出
void showMap(int map[ROWS][CLOS]);

int  main() {

	//创建一个窗口
	initgraph(ROWS * SPACE, CLOS * SPACE,1);

	//加载图片
	//前面的road为变量名，引号里面的road为文件名，两个SPACE分别表示长、宽，
	loadimage(&road, L"road.bmp",SPACE,SPACE,true);
	loadimage(&wall, L"wall.bmp",SPACE,SPACE,true);
	loadimage(&pos, L"pos.bmp",SPACE/2,SPACE/2,true);
	loadimage(&ren, L"ren.bmp",SPACE,SPACE,true);

	//创建一个地图的二维数组
	//1是墙，0是路
	int map[ROWS][CLOS]{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 1, 0, 1, 1, 0, 0, 0, 1 },
		{ 1, 0, 1, 0, 1, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 0, 1, 0, 1, 0, 1 },
		{ 1, 0, 0, 0, 1, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 1, 1, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 0, 0, 0, 1, 0, 1 },
		{ 1, 0, 1, 0, 1, 1, 1, 1, 0, 1 },
		{ 1, 0, 1, 0, 0, 1, 1, 0, 0, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
	};

	//创建一个标记的数组，全部赋值为0
	pathNode pathNode[ROWS][CLOS] = { 0 };

	//起点
	MyPoint begPos = { 1,1 };
	//终点
	MyPoint endPos = { 8,7 };

	//标记起点走过
	pathNode[begPos.row][begPos.clo].isFind = true;

	//当前点
	MyPoint currentPos = begPos;
	//侦测点
	MyPoint searchPos;

	//创建一个MyPoint类型的栈
	stack<MyPoint> stack;
	//起点入栈
	stack.push(begPos);

	//判断最终是否找到终点
	bool isFindEnd = false;

	printMap(map);
	showMap(map);
	

	while (1) {
		//确定侦测点
		searchPos = currentPos;
		switch (pathNode[currentPos.row][currentPos.clo].dir)
		{
		case p_up:
			searchPos.row--;
			//改变侦测方向
			pathNode[currentPos.row][currentPos.clo].dir++;
			if (map[searchPos.row][searchPos.clo] == 0 && pathNode[searchPos.row][searchPos.clo].isFind == false)
			{
				currentPos = searchPos; 
				//入栈
				stack.push(currentPos);
				//标记走过
				pathNode[currentPos.row][currentPos.clo].isFind = true;
			}
			break;
		case p_down:
			searchPos.row++;
			//改变侦测方向
			pathNode[currentPos.row][currentPos.clo].dir++;
			if (map[searchPos.row][searchPos.clo] == 0 && pathNode[searchPos.row][searchPos.clo].isFind == false)
			{
				currentPos = searchPos;
				//入栈
				stack.push(currentPos);
				//标记走过
				pathNode[currentPos.row][currentPos.clo].isFind = true;
			}
			break;
		case p_left:
			searchPos.clo--;
			//改变侦测方向
			pathNode[currentPos.row][currentPos.clo].dir++;
			if (map[searchPos.row][searchPos.clo] == 0 && pathNode[searchPos.row][searchPos.clo].isFind == false)
			{
				currentPos = searchPos;
				//入栈
				stack.push(currentPos);
				//标记走过
				pathNode[currentPos.row][currentPos.clo].isFind = true;
			}
			break;
		case p_right:
			searchPos.clo++;
			//改变侦测方向
			//pathNode[currentPos.row][currentPos.clo].dir++;
			if (map[searchPos.row][searchPos.clo] == 0 && pathNode[searchPos.row][searchPos.clo].isFind == false)
			{
				currentPos = searchPos;
				//入栈
				stack.push(currentPos);
				//标记走过
				pathNode[currentPos.row][currentPos.clo].isFind = true;
			}
			//死胡同
			else {
				stack.pop();//删除栈顶元素
				currentPos = stack.top();//把当前点设定为新的栈顶元素

			}
			break;
		default:break;
		}

		//判断当前点是否等于终点
		if (currentPos.row == endPos.row && currentPos.clo == endPos.clo)
		{
			isFindEnd = true;
			break;//结束循环
		}
		else if (stack.empty())
		{
			break;//栈空同样结束循环
		}

		

	}
	//判断是否找到终点
	if (isFindEnd == true)
	{
		cout << "找到终点啦：";
		//打印路径，也就是打印栈
		while (!stack.empty())
		{
			//cout << stack.top().row,stack.top().clo;
			printf("(%d,%d) ", stack.top().row, stack.top().clo);
			stack.pop();
		}
		cout << endl;
	}
	else
	{
		cout << "很遗憾没有找到" << endl;
	}

	//cout << "测试";

	//while (1);
	
	system("pause");
	return 0;
}

//打印地图
void printMap(int map[ROWS][CLOS]) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < CLOS; j++)
		{
			if (map[i][j] == 0)//打印路
			{
				cout << "  ";
			}
			else//打印墙
			{
				cout << "墙";
			}
		}
		cout << endl;//打印完一行后换行
	}
}

//图形界面输出
void showMap(int map[ROWS][CLOS]) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < CLOS; j++)
		{
			if (map[i][j] == 0)//打印路
			{
				putimage(j * SPACE, i * SPACE, &road);
			}
			else//打印墙
			{
				putimage(j * SPACE, i * SPACE, &wall);
			}
		}
		cout << endl;//打印完一行后换行
	}
}
