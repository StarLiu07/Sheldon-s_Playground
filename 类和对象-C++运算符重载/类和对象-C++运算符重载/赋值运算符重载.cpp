#include<iostream>
using namespace std;

/*C++编译器至少给一个类添加4个函数
1.默认构造函数(无参，函数体为空)
2.默认析构函数(无参，函数体为空)
3.默认拷贝构造函数，对属性进行值拷贝
4.赋值运算符operator=,对属性进行值拷贝
如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题*/

class person3
{
public:

	person3(int age)
	{
		m_age = new int(age);
	}

	~person3()
	{
		//报错原因：堆区内存重复释放
		//解决方案：通过深拷贝解决浅拷贝的问题
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}

	}

	//重载 赋值运算符
	//这里要返回一个指针，如果返回值的话就会再拷贝一份
	person3 & operator=(person3& p)
	{

		//先判断是否有属性在堆区，如果有就先释放干净，在进行深拷贝
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}

		//深拷贝操作
		m_age = new int(*p.m_age);

		//返回自身
		return *this;
	}

	int * m_age;
};

void test07()
{
	person3 p1(10);

	person3 p2(20);

	person3 p3(30);

	p3 = p1 = p2;//赋值操作

	cout << "p1的年龄为：" << *p1.m_age << endl;

	cout << "p2的年龄为：" << *p2.m_age << endl;

	cout << "p3的年龄为：" << *p3.m_age << endl;
}

int main5() {

	test07();

	system("pause");

	return 0;
}