#include<iostream>
using namespace std;

//案例描述:分别利用普通写法和多态技术，实现两个操作数进行运算的计算器类
/*多态的优点:
代码组织结构清晰
可读性强
利于前期和后期的扩展以及维护*/

//普通写法
class calculator
{
public:

	int getresult(string oper)
	{
		if (oper == "+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
	}
	//如果想扩展新的功能，需要改源码
	//在真实开发中 提倡开闭原则
	//开闭原则：对扩展进行开发，对修改进行关闭

	int m_num1;
	int m_num2;
};

void test02()
{
	calculator c;
	c.m_num1 = 1;
	c.m_num2 = 2;
	cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getresult("+") << endl;
}

//利用多态实现计算机类

//实现计算机抽象类
class absstractcalculator
{
public:
	virtual int getresult()
	{
		return 0;
	}

	int m_num1;
	int m_num2;
};

//加法计算器类
class addcalculator : public absstractcalculator
{
public:
	virtual int getresult()
	{
		return m_num1 + m_num2;
	}

	int m_num1;
	int m_num2;
};

//减法计算器类
class subcalculator : public absstractcalculator
{
public:
	virtual int getresult()
	{
		return m_num1 - m_num2;
	}

	int m_num1;
	int m_num2;
};

//乘法计算器类
class mulcalculator : public absstractcalculator
{
public:
	virtual int getresult()
	{
		return m_num1 * m_num2;
	}

	int m_num1;
	int m_num2;
};

void test03()
{
	//加法运算
	absstractcalculator* abc = new addcalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << "+" << abc->m_num2 << "=" << abc->getresult() << endl;
	//用完后记得销毁
	delete abc;

	//减法运算
	abc = new subcalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << "-" << abc->m_num2 << "=" << abc->getresult() << endl;
	delete abc;

	//乘法运算
	abc = new subcalculator;
	abc->m_num1 = 10;
	abc->m_num2 = 10;

	cout << abc->m_num1 << "*" << abc->m_num2 << "=" << abc->getresult() << endl;
	delete abc;
}

int main2() {

	test02();
	test03();

	system("pause");

	return 0;
}