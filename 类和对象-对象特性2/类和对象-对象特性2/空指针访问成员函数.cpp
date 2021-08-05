#include<iostream>
using namespace std;

//C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
//如果用到this指针，需要加以判断保证代码的健壮性

class person01
{
public:
	void showclassname()
	{
		cout << "this is personclass" << endl;
	}

	void showpersonage()
	{
		//报错原因是因为传入的指针为NULL

		if (this == NULL)
		{
			return;
		}

		cout << "age = " << m_age << endl;
	}

	int m_age;
};

void test()
{
	person01* p = NULL;
	p->showclassname();
	p->showpersonage();
}

int main6() {

	test();

	system("pause");

	return 0;
}