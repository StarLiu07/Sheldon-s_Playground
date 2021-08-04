#include<iostream>
using namespace std;

//作用：C++提供了初始化列表语法，用来初始化属性
//语法：构造函数():属性1(值1)，属性2(值2)...{}

class newpeople
{
public:

	//传统初始化操作
	//newpeople(int a, int b, int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}

	//初始化列表初始化属性
	newpeople(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
	{

	}

	int m_a;
	int m_b;
	int m_c;
};

void newexam1()
{
	//newpeople p(1,2,3);
	newpeople p(10,20,30);

	cout << "a的值为：" << p.m_a << " b的值为：" << p.m_b << " c的值为：" << p.m_c << endl;
}

int main() {

	newexam1();

	system("pause");

	return 0;
}