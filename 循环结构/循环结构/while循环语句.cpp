#include<iostream>
using namespace std;

//while语句作用：满足循环条件，执行循环语句
//语法：while(循环条件){循环语句}
//解释：只要循环条件结果为真就执行循环语句

int maindd() {

	//在屏幕中打印0~9十个数字
	int num = 0;
	//小括号中填入循环的条件
	//注意事项：避免出现死循环
	while (num < 10)
	{
		cout << num++ << endl;
	}

	system("pause");

	return 0;
}