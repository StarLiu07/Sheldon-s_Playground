#include<iostream>
using namespace std;

//静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
/*静态成员分为:
1.静态成员变量
。所有对象共享同一份数据
。在编译阶段分配内存
o类内声明，类外初始化

2.静态成员函数
。所有对象共享同一个函数
。静态成员函数只能访问静态成员变量*/

class people
{
public:
	//静态成员函数
	static void func()
	{
		m_a = 100;//静态成员函数可以访问静态成员变量
		//m_b = 200;//静态成员函数不可以访问非静态成员变量  因为无法区分到底是那个对象的m_b属性
		cout << "static void func()的调用" << endl;
	}
	static int m_a;//静态成员变量
	int m_b;

	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2()的调用" << endl;
	}
};
int people::m_a = 1;

void test1()
{
	//1.通过对象访问
	people p;
	p.func();

	//2.通过类名访问
	people::func();
	//people::func2();
}

int main3() {

	test1();

	system("pause");

	return 0;
}