#include<iostream>
using namespace std;

//if语句作用：执行满足条件的语句
//单行格式if语句：if(条件){条件满足执行的语句}

int mainee() {

	//用户输入一个分数，如果分数大于600，视为考上一本，在屏幕输出

	//1.用户输入分数
	int score = 0;
	cout << "请输入一个分数" << endl;
	cin >> score;

	//2.打印用户输入分数
	cout << "您输入的分数为：" << score << endl;

	//3.判断分数是否大于600，如果大于，那么输出
	//注意事项，if条件语句后不加分号
	if (score > 600) {
		cout << "恭喜您考上一本大学" << endl;
	}

	system("pause");

	return 0;
}