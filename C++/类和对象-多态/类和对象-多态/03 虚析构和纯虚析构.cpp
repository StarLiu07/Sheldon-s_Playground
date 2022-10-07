#include<iostream>
using namespace std;

/*虚析构和纯虚析构共性:
·可以解决父类指针释放子类对象
都需要有具体的函数实现
虚析构和纯虚析构区别:
如果是纯虚析构，该类属于独象类，无法实例化对象*/

class animal1
{
public:

	animal1()
	{
		cout << "animal1构造函数调用" << endl;
	}

	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
	//virtual ~animal1()
	//{
	//	cout << "animal1析构函数调用" << endl;
	//}

	//纯虚析构
	virtual ~animal1() = 0;

	//纯虚函数  需要声明也需要实现
	//有了纯虚析构后，这个类也属于抽象类，无法实例化对象
	virtual void speak() = 0;
};
animal1::~animal1()
{
	cout << "animal1纯虚析构函数调用" << endl;
}

class cat1 : public animal1
{
public:

	cat1(string name)
	{
		cout << "cat1的构造函数调用" << endl;
		m_name = new string(name);
	}

	~cat1()
	{
		if (m_name != NULL)
		{
			cout << "cat1析构函数调用" << endl;
			delete m_name;
			m_name = NULL;
		}
	}

	void speak()
	{
		cout << *m_name << "小猫在说话" << endl;
	}

	string* m_name;
};

void test06()
{
	animal1* animal = new cat1("Tom");
	animal->speak();
	//父类指针在析构时候  不会调用子类中的析构函数，导致子类如果有堆区属性，出现内存泄露
	delete animal;
}

int main5() {

	test06();

	system("pause");

	return 0;
}