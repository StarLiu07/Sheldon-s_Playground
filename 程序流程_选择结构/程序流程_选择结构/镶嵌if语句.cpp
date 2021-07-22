#include<iostream>
using namespace std;

//在if语句中，可以镶嵌使用if语句，达到更精准的条件判断

int maindd() {

	//1.提示输入高考分数
	int score = 0;
	cout << "请输入高考分数" << endl;
	cin >> score;

	//2.显示高考分数
	cout << "您的高考分数为" << score << endl;

	//3.判断
	//如果大于600一本
	if (score > 600)
	{
		if (score > 700)
		{
			cout << "恭喜考上北京大学" << endl;
		}
		else if (score > 650)
		{
			cout << "恭喜考上清华大学" << endl;
		}
		else if (score > 600)
		{
			cout << "恭喜考上中国人民大学" << endl;
		}
	}

	//如果大于500二本
	else if (score > 500)
	{
		cout << "恭喜考上二本" << endl;
	}

	//如果大于400三本
	else if (score > 400)
	{
		cout << "恭喜考上三本" << endl;
	}

	//都不是则未考上
	else
	{
		cout << "很遗憾未考上" << endl;
	}

	system("pause");

	return 0;
}