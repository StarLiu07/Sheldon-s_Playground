#include<iostream>
using namespace std;

//前置递增&后置递增：++   前置递减&后置递减：--

int maine() {

	//1.前置递增
	int a = 10;
	++a;//让变量进行+1的操作
	cout << "a = " << a << endl;

	//2.后置递增
	int b = 10;
	b++;//让变量+1
	cout << "b = " << b << endl;

	//3.前置递增与后置递增的区别
	//前置递增 先让变量加1 然后进行表达式运算
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2 = " << a2 << " \nb2 = " << b2 << endl;

	//后置递增 先进行表达式运算 后让变量加1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3 = " << a << endl;
	cout << "b3 = " << b3 << endl;

	//前置递减
	int num_1 = 10;
	int num_2 = --num_1*10;
	cout << "num_1 = " << num_1 << endl;
	cout << "num_2 = " << num_2 << endl;

	//后置递减
	int n1 = 10;
	int n2 = n1--*10;
	cout << "n1 =" << n1 << endl;
	cout << "n2 =" << n2 << endl;

	system("pause");

	return 0;
}