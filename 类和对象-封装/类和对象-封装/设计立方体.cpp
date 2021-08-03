#include<iostream>
using namespace std;

/*案例练习一：
设计立方体类（cube）
求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等
*/

class cube
{
public:
	//立方体面积a*a
	int mj(int a)
	{
		if (a < 0)
		{
			cout << "边长不能为负数" << endl;
			return 0;
		}
		else
		{
			m_a = a;
			return a * a;
		}
	}

	//立方体体积a*a*a
	int tj(int a)
	{
		if (a < 0)
		{
			cout << "体积不能为负数" << endl;
			return 0;
		}
		else
		{
			m_a = a;
			return a * a * a;
		}
	}

	//成员函数比较大小
	void m_than(int a, int b)
	{
		if (a != b)
		{
			cout << "这里两个立方体不相等" << endl;
		}
		else
		{
			cout << "这里两个立方体相等" << endl;
		}
	}

private:
	//边长
	int m_a;
};

//全局函数比较大小
void than(int a, int b)
{
	if (a != b)
	{
		cout << "这里两个立方体不相等" << endl;
	}
	else
	{
		cout << "这里两个立方体相等" << endl;
	}
}

int main5() {

	//立方体1
	cube l1;
	int t1 = l1.tj(3);
	cout << "立方体1的体积为：" << t1 << endl;
	cout << "立方体1的面积为：" << l1.mj(3) << endl;

	//立方体2
	cube l2;
	int t2 = l2.tj(5);
	cout << "\n立方体2的体积为：" << t2 << endl;
	cout << "立方体2的面积为：" << l2.mj(5) << endl;

	//全局函数比较大小
	cout << "\n使用全局函数比较大小" << endl;
	than(t1, t2);

	//成员函数比较大小
	cout << "\n使用成员函数比较大小" << endl;
	cube bi;
	bi.m_than(t1, t2);

	system("pause");

	return 0;
}
//ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh