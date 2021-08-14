#include <iostream>
using namespace std;

/*
普通函数调用时可以发生自动类型转换（隐式类型转换）
函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
如果利用显式指定类型的方式，可以发生隐式类型转换
*/

//普通函数
int myadd(int a,int b)
{
	return a + b;
}

//函数模板
template<class T>
T myadd2(T a, T b)
{
	return a + b;
}

void test06()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	cout << myadd(a, c) << endl;

	//1.自动类型推导
	cout << myadd2(a, b) << endl;
	//cout << myadd2(a, c) << endl;

	//显式指定类型
	cout << myadd2<int>(a, c) << endl;
}

int main4() {

	test06();

	system("pause");

	return 0;
}