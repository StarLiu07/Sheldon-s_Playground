#include<iostream>
using namespace std;

//多行格式if语句：if(条件){条件满足执行的语句}else{条件不满足执行的语句}

int mainff() {

	//多行if语句
	//输入考试分数，如果分数>600，是为考上一本大学，在屏幕上输出
	//如果没考上一本大学，打印未考上一本大学

	//1.输入考试分数
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;

	//2.提示用户输入的分数
	cout << "您输入的分数为：" << score << endl;

	//3.判断，如果大于600，打印考上一本，否则打印未考上
	if (score > 600)//大于600分执行下面大括号中的内容
	{
		cout << "考上一本大学" << endl;
	}
	else//不大于600分，执行else后大括号中的内容
	{
		cout << "为考上一本大学" << endl;
	}

	system("pause");

	return 0;
}