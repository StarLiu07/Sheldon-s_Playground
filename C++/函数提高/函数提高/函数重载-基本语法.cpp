#include<iostream>
using namespace std;

//作用：函数名可以相同，提高复用性
/*函数重载满足条件：
1.同一个作用域下
2.函数名称相同
3.函数参数类型不同 或者 个数不同 或者 顺序不同*/

//注意函数的返回值不可以作为函数重载的条件

void func6(int a, int b)//全局作用域
{
	cout << "func的调用" << endl;
}

//void func(int b,int a)
//{
//	cout << "func的调用!" << endl;
//}

int main3() {

	func6(1, 2);

	system("pause");

	return 0;
}