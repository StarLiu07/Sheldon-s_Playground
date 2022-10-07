#include <iostream>
using namespace std;

//建立一个通用的类，类中成员类型可以不具体定制，用一个虚拟类型来代表

template<class nametype,class agetype>
class person1
{
public:
	person1(nametype name,agetype age)
	{
		this->m_name = name;
		this->m_age = age;
	}

	void showperosn()
	{
		cout << "name:" << this->m_name << " age:" << this->m_age << endl;
	}

	nametype m_name;
	agetype m_age;
};

void test03()
{
	person1<string, int> p1("孙悟空", 999);
	p1.showperosn();
}

int main2() {

	system("pause");

	return 0;
}