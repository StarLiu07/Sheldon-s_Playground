#include<iostream>
using namespace std;

/*常函数:
成员函数后加const后我们称为这个函数为常函数
·常函数内不可以修改成员属性
·成员属性声明时加关键字mutable后，在常函数中依然可以修改*/

/*常对象:
  声明对象前加const称该对象为
  常对象常对象只能调用常函数*/

//常函数
class Person
{
public:
	//this指针的本质：指针常量 指针的指向不可以修改
	//在成员函数后面加上const，修饰的是this指针，此时指针指向的值也不能改
	void showperson() const
	{
		this->m_b = 200;
		//this->m_a = 100;
	}

	void func()
	{

	}

	int m_a;
	mutable int m_b;//特殊变量，即使在常函数中也可以修改这个值 添加关键字mutacle
};

void Test01()
{
	Person p;
	p.showperson();
}

//常对象
void Test02()
{
	const Person p;//在对象前加const，变为常对象
	//p.m_a = 300;
	p.m_b = 400;//m_b是特殊变量，在常对象下也能修改

	//常对象只能调用常函数
	p.showperson();
	//p.func();//常对象不能调用普通成员函数，因为普通成员函数可以修改属性
}

int main() {

	system("pause");

	return 0;
}