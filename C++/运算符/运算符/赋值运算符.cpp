#include<iostream>
using namespace std;

//作用：用于将表达式的值赋给变量
/*
* =:赋值   +=：加等于
* -=：减等于  *=：乘等于
* /=：除等于  %=：摸等于
*/

int mainrr() {

	//赋值运算符

	// =
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;

	// +=
	a = 10;
	a += 2;//相当于a = a + 2
	cout << "a = " << a << endl;

	// -=
	a = 10;
	a -= 2;
	cout << "a = " << a << endl;

	// *=
	a = 10;
	a *= 2;
	cout << "a = " << a << endl;

	// /=
	a = 10;
	a /= 2;
	cout << "a = " << a << endl;

	// %=
	a = 10;
	a %= 3;
	cout << "a = " << a << endl;

	system("pause");

	return 0;
}