#include<iostream>
using namespace std;

//在c++中，函数的形参列表中的形参是可以有默认值的
//语法：返回值类型 函数名 （参数 = 默认值）{}


//如果我们自己传入了数据，就用自己的数据，如果没有，就用默认值
int func(int a , int b = 20, int c = 30)
{
	return a + b + c;
}
//注意事项：
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
//int func2(int a = 10, int b, int c, int d)
//{
//	return a + b + c + d;
//}

//2.如果函数的声明有了默认参数，函数实现就不能有默认参数(即声明和实现只能有一个默认参数)
int func3(int a = 10, int b = 10);//声明

int func3(int a, int b)//实现
{
	return a + b;
}

int main1() {

	cout << func(10,20,30) << endl;

	system("pause");

	return 0;
}