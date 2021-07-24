#include<iostream>
#include <ctime>
using namespace std;

int mainq() {

	/*案例描述：系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对
	* 对玩家惊醒胜利恭喜，并且退出游戏
	*/

	//添加随机数的种子 作用利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1.系统随机生成一个随机数
	int num = rand() % 100 + 1;  //生成0到99的随机数

	//2.玩家进行猜测
	int c = 0;
	int val = 0;
	cout << "请输入一个整数" << endl;
	cin >> val;

	//3.判断玩家的猜测
	//猜对  退出
	if (val == num)
	{
		cout << "恭喜猜对了" << endl;
	}

	//猜错  提示猜的结果过大或过小，并重新进行猜测
	else
	{
		while (val != num)
		{
			if (c != 5)
			{
				if (val < num)
				{
					cout << "数字过小,剩余：" << 5 - c << "次机会" << endl;
					c++;
					cin >> val;
				}
				else
				{
					cout << "数字过大，剩余：" << 5 - c << "次机会" << endl;
					cin >> val;
					c++;
				}
			}
			else
			{
				cout << "很遗憾，次数用尽" << endl;
				break;
			}
		}
		if (val == num)
		{
			cout << "恭喜答对" << endl;
		}
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhhhhhh

	system("pause");

	return 0;
}