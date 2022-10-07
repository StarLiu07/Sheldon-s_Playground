#include<iostream>
using namespace std;

/*C++中拷贝构造函数调用时机通常有三种情况
·使用一个已经创建完毕的对象来初始化一个新对象
·值传递的方式给函数参数传值
·以值方式返回局部对象*/



class person2
{
public:
	person2() //无参构造
	{
		cout << "person2无参构造函数调用" << endl;
	}
	person2(int age) //有参构造
	{
		m_age = age;
		cout << "person有参构造函数调用" << endl;
	}

	person2(const person2& p)
	{
		m_age = p.m_age;
		cout << "person拷贝构造函数调用" << endl;
	}

	~person2()
	{
		cout << "person析构函数调用" << endl;
	}
	int m_age;
};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test03()
{
	person2 p1(20);
	person2 p2(p1);
	cout << "p2的年龄为：" << p2.m_age << endl;
}

//2.值传递的方式给函数参数传值
void dowork(person2 p)
{
		
}

void test04()
{
	person2 p1;
	dowork(p1);
}

//3.以值方式返回局部对象
person2 work2()
{
	person2 p1;
	cout << (int)&p1 << endl;
	return p1;
}
void test05()
{
	person2 a = work2();
	cout << (int)&a << endl;
}

int main3() {

	//test03();
	//test04();
	//test05();

	system("pause");

	return 0;
}