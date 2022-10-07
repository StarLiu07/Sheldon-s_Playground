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

class person
{
public:

	//1.所有对象都共享一份数据
	//2.编译阶段就分配了内存
	//3.类内声明，类外初始化操作
	static int m_a;//类内声明

private:
	static int m_b;
};
int person::m_a = 100;//类外初始化操作
//int perosn::m_b = 200;//静态成员变量也是有访问权限的

void test01()
{
	person p;
	cout << p.m_a << endl;

	person p2;
	p2.m_a = 200;//初始化时一定要写成24行的格式，之后可以写成这种格式
	cout << p.m_a << endl;//p2修改，p输出确实200，说明数据是共享的


}

void test02()
{
	//静态成员变量不属于摸个对象上，所有对象都共享同一份数据
	//因此静态成员变量有两种访问方式

	//1.通过对象进行访问
	//person p3;
	//cout << p3.m_a << endl;

	//2.通过类名进行访问
	cout << person::m_a << endl;
}

int main2() {

	//test01();
	test02();

	system("pause");

	return 0;
}