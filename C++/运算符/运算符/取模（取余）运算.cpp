#include<iostream>
using namespace std;

//%：取模（取余）

int maindd() {

	//取模运算本质就是取余数
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;

	//两个小数是不可以做取模运算的
	double d1 = 3.14;
	double d2 = 1.1;

	//cout << d1 % d2 << endl; 

	//一个整数一个小数
	//cout << 4 % 0.1 << endl;

	system("pause");

	return 0;
}