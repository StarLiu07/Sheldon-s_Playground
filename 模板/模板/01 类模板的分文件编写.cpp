#include<iostream>
using namespace std;

//第一种解决方式：直接包含源文件
//#include "person.cpp"

//第二种解决方式：将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
#include "person.hpp"

//template<class T1,class T2>
//class person
//{
//public:
//
//	person(T1 name, T2 age);
//
//	void showperson();
//
//	T1 m_name;
//	T2 m_age;
//};

//template<class T1,class T2>
//person< T1, T2>::person(T1 name, T2 age)
//{
//	this->m_name = name;
//	this->m_age = age;
//}
//
//template<class T1,class T2>
//void person< T1,  T2>::showperson()
//{
//	cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
//}
//
void test01()
{
	person<string, int> p("Jerry", 18);
	p.showperson();
}

int main1() {

	test01();

	system("pause");

	return 0;
}