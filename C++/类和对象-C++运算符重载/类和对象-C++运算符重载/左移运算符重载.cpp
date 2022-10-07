#include<iostream>
using namespace std;

//作用：可以输出自定义数据类型

class person2
{
	friend ostream& operator<<(ostream& cout, person2& p);
	friend void test02();

private:

	//利用成员函数重载 左移运算符 p.operator<<(cout) 简化版本p << cout 
	//不会利用成员函数重载 << 运算符 ,因为无法实现cout 在左侧
	//void operator<< (cout)
	//{

	//}

	int m_a;
	int m_b;
};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream& cout, person2& p)//本质operator<<(cout , p),简化为 cout << p;
{
	cout << "m_a = " << p.m_a << "  m_b = " << p.m_b;

	return cout;
}

void test02()
{
	person2 p1;
	p1.m_a = 10;
	p1.m_b = 10;

	cout << p1 << endl;
	//这里如果要进行换行或别的操作就要输入ostream & 并且返回cout 进行一个链式编程
}

int main2() {

	test02();

	system("pause");

	return 0;
}