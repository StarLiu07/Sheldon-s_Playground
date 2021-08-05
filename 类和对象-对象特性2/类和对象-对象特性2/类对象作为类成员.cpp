#include<iostream>
using namespace std;

//C++类中的成员可以是另一类的对象，我们称该成员为对象成员

//手机类
class phone
{
public:

	phone(string name)
	{
		cout << "phone的有参构造函数调用" << endl;
		pname = name;
	}

	~phone()
	{
		cout << "phone的析构函数调用" << endl;
	}

	string pname;
};

//人类
class nperson
{
public:

	nperson(string name, string phone) :m_name(name), m_phone(phone)
	{
		cout << "nperson的有参构造函数调用" << endl;
	}

	~nperson()
	{
		cout << "nperson的析构函数调用" << endl;
	}

	//姓名
	string m_name;

	//手机
	phone m_phone;
};

//当其他类对象作为本类成员，构造时候先构造类对象，在构造自身  析构的顺序与构造相反

void ntest1()
{
	nperson p("张三", "苹果MAX");

	cout << p.m_name << "拿着：" << p.m_phone.pname << endl;
}

int main1() {

	ntest1();

	system("pause");

	return 0;
}