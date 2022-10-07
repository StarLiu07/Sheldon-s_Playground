#include<iostream>
using namespace std;

//常量作用：用于记录程序中不可更改的数据
/*常量的定义方式：
* 1.#define 宏常量
* 2.const修饰的变量
*/

//1.#define 宏常量
#define Day 7

int main4() {

	//Day=7//报错，Day是常量，一旦修改就会报错
	cout << "一周共有：" << Day << "天" << endl;

	//const修饰的变量
	const int month = 12;
	//month=24//报错，const修饰的变量也称为常量

	cout << "一年总共有：" << month << "个月份" << endl;

	system("pause");

	return 0;
}