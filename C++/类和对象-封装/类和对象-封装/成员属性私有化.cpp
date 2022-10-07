#include<iostream>
using namespace std;

//优点1：将所有成员属性设置为私有，可以自己控制读写权限
//优点2：对于写权限，我们可以检测数据的有效性

//设计人类
class person
{
public:
	//写姓名
	void setname(string name)
	{
		m_name = name;
	}

	//读姓名
	string getname()
	{
		return m_name;
	}

	//获取年龄
	int getage()
	{
		m_age = 0;//初始化年龄
		return m_age;
	}
	//设置年龄
	void setage(int age)
	{
		if (age < 0 || age > 150)
		{
			m_age = 0;
			cout << "抱歉年龄有误" << endl; 
			return;
		}
		m_age = age;
	}

	//设置情人 可写
	void setlover(string lover)
	{
		lover = m_lover;
	}

private:
	//姓名 可读可写
	string m_name;

	//年龄 可读可写 如果想修改(年龄的范围必须是0~150之间)
	int m_age ;

	//情人 只写
	string m_lover;
};

int mai4n() {

	person p;
	//p.m_name = "张三";
	p.setname("张三");
	cout <<"姓名为：" <<  p.getname() << endl;

	p.setage(1000);
	cout << "年龄为：" << p.getage() << endl;

	p.setlover("张三");

	system("pause");

	return 0;
}