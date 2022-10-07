#include<iostream>
using namespace std;

//在C++中，类内的成员变量和成员函数分开存储
//只有非静态成员变量才属于类的对象上

class person1
{
	int m_a;//非静态成员变量 属于类的对象上
	static int m_b;//静态成员变量 不属于类的对象上

	void func3(){} //非静态成员函数 不属于类对象上

	static void func4(){} //静态成员函数 不属于类的对象上
};
int person1::m_b = 100;

void exam1()
{
	person1 p;

	//占用1个字节
	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void exam2()
{
	person1 p1;
	cout << "size of p1 = " << sizeof(p1) << endl;
}

int main4() {

	//exam1();
	exam2();

	system("pause");

	return 0;
}