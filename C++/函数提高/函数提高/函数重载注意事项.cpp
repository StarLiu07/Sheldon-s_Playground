#include<iostream>
using namespace std;

/*注意事项：
1.引用作为重载条件
2.函数重载碰到函数默认参数*/

//引用作为重载的条件
void fun(int& a)
{
	cout << "func(int &a的调用)" << endl;
}
void fun(const int &a)
{
	cout << "func(int &a的调用)" << endl;
}

//函数重载碰到函数默认参数
void func0(int a,int b )//当函数重载碰到默认函数，会出现二义性，会报错
{
	cout << "func(int a )的调用" << endl;
}

void func0(int a)
{
	cout << "func(int a )的调用" << endl;
}

int main() {

	func0(10);

	system("pause");

	return 0;
}