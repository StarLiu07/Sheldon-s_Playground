#include<iostream>
using namespace std;

//C++在创建一个变量或常量时，必须制定出相应的数据类型，否则无法给变量分配内存
/*
* 整型：作用：整型变量表示的时整数类型的数据
* 1.short(短整型)：2字节
* int（整型）：4字节
* long（长整型）：4字节
* long long（长长整型）：8字节
*/
int maind() {

	//短整型(-32768-32767)
	short num1 = 10;

	//整型
	int num2 = 10;

	//长整型
	long num3 = 10;

	//长长整型
	long long num4 = 10;

	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");

	return 0;
}