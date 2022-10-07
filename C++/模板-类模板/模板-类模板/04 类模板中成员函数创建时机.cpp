#include<iostream>
using namespace std;

/*类模板中成员函数和普通类中成员函数创建时机是有区别的
1.普通类中的成员函数一开始就可以创建
2.类模板中的成员函数在调用时才创建*/

class person3
{
public:
	void showperson3()
	{
		cout << "person3 show" << endl;
	}
};

class person4
{
public:
	void showperson4()
	{
		cout << "person4 show" << endl;
	}
};

template<class T>
class myclass
{
public:

	T obj;

	//类模板中的成员函数
	void func1()
	{
		obj.showperson3();
	}
	void func2()
	{
		obj.showperson4(); 
	}
};

void test06()
{
	myclass<person3> m;
	m.func1();
	// m.func2();
}

int main4() {

	test06();

	system("pause");

	return 0;
}