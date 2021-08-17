#include <iostream>
using namespace std;
#include <string>

//提前让编译器知道person存在
template<class T1, class T2>
class person;

//类外实现
template<class T1, class T2>
void printperson2(person<T1, T2> p1)
{
	cout << "类外实现" << "姓名：" << p1.m_name << " 年龄：" << p1.m_age << endl;
}

//通过全局函数打印person1信息

template<class T1,class T2>
class person
{
	//全局函数 类内实现
	friend void printperson1(person<T1, T2> p1)
	{
		cout << "姓名：" << p1.m_name << " 年龄：" << p1.m_age << endl;
	}

	//全局函数类外实现
	//加空模板参数列表
	//如果全局函数 是类外实现 需要让编译器提前知道这个函数的存在
	friend void printperson2<>(person<T1, T2> p1);

public:

	person(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

private:
	T1 m_name;
	T2 m_age;
};


//1.全局函数在类内实现
void test02()
{
	person<string, int> p("Tom", 20);

	printperson1(p);
}

//全局函数类外测试
void test03()
{
	person<string, int>p("Jerry", 20);

	printperson2(p);
}

int main2() {

	test02();

	test03();

	system("pause");

	return 0;
}