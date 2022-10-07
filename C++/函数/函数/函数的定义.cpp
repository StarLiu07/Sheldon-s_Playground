#include<iostream>
using namespace std;
/*将一段经常使用的代码封装起来，减少重复代码
一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能
*/

/*函数的定义一般主要有5个步骤：
1.返回值类型
2.函数名
3.参数列表
4.函数体语句
5.return表达式*/

/*
语法
返回值类型 函数名(参数列表)
{
	函数体语句

	return表达式
}*/

//加法函数实现两个整型相加，并且将相加的结果进行返回
int add1(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main1() {


	system("pause");

	return 0;
}