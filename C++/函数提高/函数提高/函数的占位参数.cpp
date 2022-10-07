#include<iostream>
using namespace std;

/*c++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
语法：返回值类型 函数名 （数据类型）{}
在现阶段函数的占位参数存在意义不大，但是后面的课程中会用到该技术*/

//占位参数可以有默认参数
void func(int a, int = 0)//第二个int 是用来占位的，但是在调用函数时，依然要传一个int类型的数据
{
	cout << "This is func" << endl;
}

int main2() {

	func(10);

	system("pause");

	return 0;
}