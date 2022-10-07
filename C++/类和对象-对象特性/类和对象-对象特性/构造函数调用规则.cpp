#include<iostream>
using namespace std;

/*创建一个类，c++编译器会给每个类添加至少三个函数
1.默认构造 （空实现）
2.析构函数 （空实现）
3.拷贝构造 （值拷贝）
*/

/*构造函教调用规则如下:
·如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
·如果用户定义拷贝构造函数，C++不会再提供其他构造函数*/

class people
{
public:
	//people()
	//{
	//	cout << "people默认构造调用" << endl;
	//}

	//people(int age)
	//{
	//	m_age = age;
	//	cout << "people有参函数调用" << endl;
	//}

	people(const people& p)
	{
		m_age = p.m_age;
		cout << "拷贝函数调用" << endl;
	}

	~people()
	{

		cout << "people析构函数调用" << endl;
	}

	int m_age;
};

//void newtest01()
//{
//	people p(10);
//	p.m_age = 10;
//
//	people p1(p);//尽管把我们自定义的拷贝构造函数注释掉，但年龄依旧是18，因为编译器给我们提供的拷贝构造函数会进行值拷贝
//	cout << "p1的年龄为：" << p1.m_age << endl;
//}

//void newtest02()
//{
//	people p(18);
//
//	people p2(p);
//	 
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}

int main4() {

	//newtest01();
/*	newtest02()*/;

	system("pause");

	return 0;
}