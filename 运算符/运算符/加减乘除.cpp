#include<iostream>
using namespace std;

//作用：用于执行代码的运算
/*
* 算术运算符：处理四则运算(+:正号或加，-：负号或减，*：乘，/:除，%：取余，++：前置递增或后置递增，--：前置递减或后置递减)
* 赋值运算符：用于将表达式的值赋给变量
* 比较运算符：用于表达式的比较，并返回一个真值或假值
* 逻辑运算符：用于根据表达式的值返回真值或假值
*/

int maind() {

	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数做相除运算，结果依然是整数（舍去）
	cout << 10 / 20 << endl;

	//两个小数相除/
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;
	cout << 0.5 / 0.22 << endl;//两个小数相除结果可以为小数
	cout << 1 / 0.2 << endl;

	system("pause");

	return 0;
}