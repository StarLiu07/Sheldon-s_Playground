#include<iostream>
using namespace std;

/*C++允许一个类继承多个类工
语法:class子类︰继承方式父类1，继承方式父类2...
多继承可能会引发父类中有同名成员出现，需要加作用域区分*/

class base8
{
public:
	base8()
	{
		m_a = 100;
	}

	int m_a;
};

class base9
{
public:
	base9()
	{
		m_a = 200;
	}

	int m_a;
};

//子类 需要继承base8和base9
//语法:class子类︰继承方式父类1，继承方式父类2...
class son8 : public base8 , public base9
{
public:
	son8()
	{
		m_c = 300;
		m_d = 400;
	}

	int m_c;
	int m_d;
};

void test11()
{
	son8 s;

	cout << "size of s = " << sizeof(s) << endl;

	//当父类中出现同名成员，需要加作用域区分
	cout << "base8::m_a = " << s.base8::m_a << endl;
	cout << "base9::m_a = " << s.base9::m_a << endl;
}

int main7() {

	test11();

	system("pause");

	return 0;
}