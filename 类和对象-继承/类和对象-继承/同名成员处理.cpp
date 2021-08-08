#include<iostream>
using namespace std;

/*访问子类同名成员 直接访问即可
  访问父类童名成员 需要加作用域
 */

class base6
{
public:
	base6()
	{
		m_a = 100;
	}

	void func()
	{
		cout << "base6 - func()调用" << endl;
	}

	void func(int a)
	{
		cout << "base6 - func(int a)调用" << endl;
	}

	int m_a;
};

class son6 : public base6
{
public:
	son6()
	{
		m_a = 200;
	}

	void func()
	{
		cout << "son6 - func()调用" << endl;
	}

	int m_a;
};

//同名成员属性处理
void test07()
{
	son6 s;
	cout << "son6 下 m_a = " << s.m_a << endl;

	//如果通过子类对象 访问到父类中同名成员，需要加作用域
	cout << "base6 下 m_a = " << s.base6::m_a << endl;
}

//同名成员函数处理
void test08()
{
	son6 s;

	s.func();//直接调用 调用的是子类中的同名成员

	s.base6::func();

	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
	s.base6::func(100);
}

int main5() {

	//test07();
	test08();

	system("pause");

	return 0;
}