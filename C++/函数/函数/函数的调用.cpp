#include<iostream>
using namespace std;

//函数的调用功能：使用定义好的函数
//语法：函数名（参数）

//定义加法函数
//函数定义时，num1和num2并没有真实数据，他们只是一个形式上的参数，简称：形参
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main2() {

	//main函数中调用add函数
	int a = 10;
	int b = 20;

	//函数调用语法：函数名称（参数）
	//a和b称为实际参数，简称：实参
	int c = add(a, b);
	cout << c << endl;

	system("pause");

	return 0;
}