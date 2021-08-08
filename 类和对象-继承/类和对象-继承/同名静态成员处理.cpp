#include<iostream>
using namespace std;

class base7
{
public:
	static int m_a;

	static void func()
	{
		cout << "base - static void func()" << endl;
	}

	static void func(int a)
	{
		cout << "base - static void func(int a)" << endl;
	}
};
int base7::m_a = 100;

class son7 : public base7
{
public:
	static int m_a;

	static void func()
	{
		cout << "son7 - static void func()" << endl;
	}
};
int son7::m_a = 200;

//同名静态成员属性
void test09()
{
	//1.通过对象访问
	cout << "通过对象访问" << endl;
	son7 s;
	cout << "son7 下 m_a = " << s.m_a << endl;
	cout << "base7 下 m_a = " << s.base7::m_a << endl;

	//2.通过类名访问
	cout << "通过类名访问" << endl;
	cout << "son7 下 m_a = " << son7::m_a << endl;
	//第一个::代表通过类名方式访问 第二个::代表访问父类作用域下
	cout << "base7 下 m_a = " << son7::base7::m_a << endl;
}

//同名静态成员函数
void test10()
{
	//1.通过对象访问
	cout << "通过对象访问" << endl;
	son7 s;
	s.func();
	s.base7::func();

	//2.通过类名访问
	cout << "通过类名访问" << endl;
	son7::func();
	son7::base7::func();

	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
	//如果想访问父类中被隐藏同名成员，需要加作用域
	son7::base7::func(100);
}

int main6() {

	test09();

	system("pause");

	return 0;
}