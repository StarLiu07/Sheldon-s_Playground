#include<iostream>
using namespace std;

//多条件的if语句：if(条件1){条件一满足执行的语句}else if(条件2){条件2满足执行的语句}...else{都不满足执行的语句}

int maind() {

	//输入一个考试分数，如果大于600分，视为考上一本大学，在屏幕输出
	//大于500分，视为考上二本大学，在屏幕输出
	//大于400分，视为考上三本大学，在屏幕输出
	//都不满足，视为未考上，在屏幕输出

	//1.用户输入分数
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;

	//2.提示用户输入分数
	cout << "您的分数为" << endl;

	//3.判断
	//如果大于600，考上一本
	if (score > 600)
	{
		cout << "恭喜考上一本" << endl;
	}

	//如果大于500，考上二本
	else if (score > 500)
	{
		cout << "恭喜考上二本" << endl;
	}

	//如果大于400，考上三本
	else if (score > 400)
	{
		cout << "恭喜考上三本" << endl;
	}

	//都不满足，未考上
	else
	{
		cout << "很遗憾，未考上大学" << endl;
	}

	system("pause");

	return 0;
}