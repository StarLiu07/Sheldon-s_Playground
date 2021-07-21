#include<iostream>
using namespace std;

//sizeof关键字可以统计数据类型所占内存大小
int maindd() {

	//整型：short(2) int(4) long(4)   long long(8)
	//可以利用sizeof求出数据类型占用内存大小
	//语法：sizeof(数据类型/变量)

	short num1 = 10;
	cout << "short占用的内存空间：" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int占用的内存空间：" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "long占用的内存空间：" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long long占用的内存空间：" << sizeof(num4) << endl;

	system("pause");

	return 0;
}