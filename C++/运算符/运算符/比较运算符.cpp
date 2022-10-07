#include<iostream>
using namespace std;

//比较运算符作用：用于表达式的比较，并返回一个真值或假值
/* 
* ==：相等于   !=：不等于   <:小于  >:大于   <=:小于等于  >=：大于等于
*/

int mainqq() {

	//==
	int a = 10;
	int b = 20;
	cout << (a == b) << endl;//加小括号是为了确定优先级，即让a == b先运算

	//!=
	cout << (a != b) << endl;

	//>
	cout << (a > b) << endl;

	//<
	cout << (a < b) << endl;

	//>=
	cout << (a >= b) << endl;

	//<=
	cout << (a <= b) << endl;

	system("pause");

	return 0;
}