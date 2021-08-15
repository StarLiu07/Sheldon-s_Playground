#include<iostream>
using namespace std;

/*1.指定传入的类型 ——直接显示对象的数据类型
2.参数模板化 ——将对象中的参数变为模板进行传递
3.整个类模板化 ——将这个对象类型 模板化进行传递*/

template <class T1,class T2>
class person5
{
public:
	person5(T1 name, T2 age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showperson()
	{
		cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
	}

	T1 m_name;
	T2 m_age;
};

//1.指定传入类型

void printperson1(person5<string,int> & p)
{
	p.showperson();
}

void test07()
{
	person5<string, int> p("孙悟空", 100);

	printperson1(p);
}

//2.参数模板化

template<class T1,class T2>
void printperson2(person5<T1, T2>& p)
{
	p.showperson();
	cout << "T1 的类型为：" << typeid(T1).name() << endl;
	cout << "T2的类型为：" << typeid(T2).name() << endl;
}

void test08()
{
	person5<string, int> p("猪八戒", 90);

	printperson2(p);
}

//3.整个类都模板化

template<class T>
void printperson3(T & p)
{
	p.showperson();
	cout << "T的数据类型为：" << typeid(T).name() << endl;
}

void test09()
{
	person5<string, int> p("唐僧", 30);
	printperson3(p);
}

int main5() {

	test07();
	test08();
	test09();

	system("pause");

	return 0;
}