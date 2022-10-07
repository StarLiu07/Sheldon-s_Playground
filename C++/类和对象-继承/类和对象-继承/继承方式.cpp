#include<iostream>
using namespace std;

//语法：class 子类 : 继承方式 父类

/*继承方式一共有三种：
1.公共继承
2.保护继承
3.私有继承*/

//公共继承
class base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son1 : public base1
{
public:
	void func()
	{
		m_a = 10;//父类中的公共权限成员 到子类中依然是公共权限
		m_b = 10;//父类中的保护权限成员 到子类中依然是保护权限
		//m_c = 10;//父类中的四有权限成员 子类访问补导

	}
};

void test02()
{
	son1 s1;
	s1.m_a = 100;
	//s1.m_b = 100;//到son1中 m_b 是保护权限 类外访问不到
}

//保护继承
class base2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son2 : protected base2
{
public:
	void func()
	{
		m_a = 100; //父类中公共成员，到子类中变为保护权限
		m_b = 100; //父类中保护乘员，到子类中变为保护权限
		//m_c = 100; //父类中私有成员，子类访问不到
	}
};

void test03()
{
	son2 s2;
	//s2.m_a = 1000; //在son2中 m_a 变为保护权限，因此类外访问不到
	//s2.m_b = 1000; //在son2中 m_b 变为保护权限，因此类外访问不到
}

//私有继承
class base3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class son3 : private base3
{
public:
	void func()
	{
		m_a = 100; //父类中公共成员 到子类中变为 私有成员
		m_b = 100; //父类中保护乘员 到子类中变为 私有成员
		//m_c = 100; //父类中私有成员，子类访问不到
	}
};

class grandson3 : public son3
{
public:
	void func()
	{
		//m_a = 1000;//到了son3中 m_a变为私有，即使是儿子，也访问不到
		//m_b = 1000;//到了son3中 m_a变为私有，即使是儿子，也访问不到
	}
};

void test04()
{
	son3 s3;
	//s3.m_a = 1000;//到son3中 变为 私有成员 类外访问不到
	//s3.m_b = 1000;//到son3中 变为 私有成员 类外访问不到
}

int main2() {

	system("pause");

	return 0;
}