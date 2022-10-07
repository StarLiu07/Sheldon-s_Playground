#include<iostream>
using namespace std;

//深浅拷贝是面试经典问题，也是常见的—个坑
//浅拷贝:简单的赋值拷贝操作
//深拷贝:在堆区重新申请空间，进行拷贝操作

class newperson
{
public:
	newperson()
	{
		cout << "newperson的默认构造函数调用" << endl;
	}

	newperson(int age,int height)
	{
		m_height = new int(height);
		m_age = age;
		cout << "newperson的有参构造函数调用" << endl;
	}

	newperson(const newperson& p)
	{
		m_age = p.m_age;
		//m_height = p.m_height://编译器默认执行的就是这行怠慢
		
		//深拷贝
		m_height = new int(*p.m_height);
	}

	~newperson()
	{
		//将堆区开辟的数据做释放操作
		if (m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}

		cout << "newperson的析构函数调用" << endl;
	}

	int m_age;
	int* m_height;
};

void exam01()
{
	newperson p1(10 , 160);
	cout << "p1的年龄为：" << p1.m_age << "身高为：" << *p1.m_height << endl;

	newperson p2(p1);
	cout << "p2的年龄为：" << p2.m_age << "身高为：" << *p1.m_height << endl;
}

int main5() {

	exam01();

	system("pause");

	return 0;
}