#include<iostream>
using namespace std;

/*
1.如果函数模板和普通函数都可以调用，优先调用普通函数
2.可以通过空模板参数列表 强制调用 函数模板
3.函数模板可以发生函数重载
4.如果函数模板可以产生更好的匹配，优先调用函数模板
*/

//如果提供了函数模板，最好不要提供普通函数，否则容易出现二义性

void myprint(int a, int b)
{
	cout << "调用的普通函数" << endl;
}

template<class T>
void myprint(T a, T b)
{
	cout << "调用的模板" << endl;
}

template<class T>
void myprint(T a, T b,T c)
{
	cout << "调用的重载的模板" << endl;
}

void test07()
{
	int a = 10;
	int b = 20;

	myprint(a, b);

	//通过空模板的参数列表，强制调用函数模板
	myprint<>(a, b);

	myprint(a, b, 100);

	//如果函数模板产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';

	myprint(c1, c2);
}

int main() {

	test07();

	system("pause");

	return 0;
}