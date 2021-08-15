#include<iostream>
using namespace std;

/*类模板与函数模板区别主要有两点
1.类模板没有自动类型推导的使用方式
2.类模板在模板参数列表中可以有默认参数*/

template<class nametype,class agetype = int>
class person2
{
public:

	person2(nametype name, agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showperson()
	{
		cout << "name:" << this->m_name << " age:" << this->m_age << endl;
	}

	nametype m_name;
	agetype m_age;
};

//1.类模板没有自动类型推导的使用方式
void test04()
{
	//person2 p("孙悟空", 1000);错误，无法用自动类型推导
	person2<string, int> p("孙悟空", 1000);
	p.showperson();
}

//2.类模板在模板参数列表中可以有默认参数
void test05()
{
	person2<string> p1("猪八戒", 999);

	p1.showperson();
}


int main3() {

	test04();

	test05();

	system("pause");

	return 0;
}