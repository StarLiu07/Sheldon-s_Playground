#include<iostream>
using namespace std;

//运算符重载概念：对已有的运算符进行重新定义，赋予其另一种功能，以适应不同的数据类型

/*加号运算符重载：
作用：实现两个自定义数据类型相加的运算*/

class person
{
public:

	//1.成员函数实现+号重载
	//person operator+ (person& p)
	//{
	//	person temp;
	//	temp.m_a = this->m_a + p.m_a;
	//	temp.m_b = this->m_b + p.m_b;

	//	return temp;
	//}

	int m_a;

	int m_b;
};

//2.全局函数实现+号重载
person operator+ (person& p1, person& p2)
{
	person temp;
	temp.m_a = p1.m_a + p2.m_b;
	temp.m_b = p1.m_a + p2.m_b;

	return temp;
}

person operator+ (person& p1, int num)
{
	person temp;
	temp.m_a = p1.m_a + num;
	temp.m_b = p1.m_a + num;

	return temp;
}

void test01()
{
	person p1;
	p1.m_a = 10;
	p1.m_b = 10;

	person p2;
	p2.m_a = 10;
	p2.m_b = 10;

	//成员函数重载本质调用
	//person p3 = p1.operator+ (p2);

	//全局函数重载本质调用
	//person p3 = operator+ (p1, p2);

	//person p3 = p1 + p2;

	//运算符重载也可以发生运算符重载
	person p3 = p1 + 10;

	cout << "p3.m_a = " << p3.m_a << endl;
	cout << "p3.m_b = " << p3.m_b << endl;
}


int main1() {

	test01();

	system("pause");

	return 0;
}