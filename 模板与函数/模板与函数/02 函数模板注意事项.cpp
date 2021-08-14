#include<iostream>
using namespace std;

template<class T>//typename 可以替换成 class 
void myswap1(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

/*
1.自动类型推到，必须要推导出一致的数据类型T才能使用
2.模板必须要确定出T的数据类型才能使用
*/

//1.自动类型推到，必须要推导出一致的数据类型T才能使用
void test02()
{
	int a = 10;
	int b = 20;
	char c = 'c';

	myswap1(a, b);
	//myswap(a, c);//错误


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2.模板必须要确定出T的数据类型才能使用
template<typename T>
void func()
{
	cout << "func调用" << endl;
}

void test03()
{
	func<int>();
}

int main2() {

	test02();

	system("pause");

	return 0;
}