#include<iostream>
using namespace std;

//c++认为万事万物都皆为对象   具有相同性质的对象我们可以抽象为类

//封装是c++面向对象的三大特征之一
/*封装的意义：
将属性和行为作为一个整体，表现生活中的事物
将属性和行为加以权限控制
*/
//封装意义一：在设计类的时候，属性和行为写在一起，表现事物
//语法： class 类名{ 访问权限：属性/行为};

//示例1：设计一个圆类，求圆的周长

//圆周率
const double PI = 3.14;

//class代表一个类，类后面紧跟着的就是类名称
class circle
{
	//访问权限
	//公共权限
public:

	//属性
	int m_r;

	//行为
	//获取圆的周长
	double zc()
	{
		return 2 * PI * m_r;
	}
};

//示例2：设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class student
{
	//访问权限
public:
	
	//类中的属性和行为统一称为成员
	//属性  成员属性，成员变量
	//行为  成员函数，成员方法

	//属性
	//姓名
	string name;
	//学号
	double id;

	//行为
	void show()
	{
		cout << "学生姓名：" << name << endl;
		cout << "学生卡号：" << id << endl;
	}

	//通过行为赋值
	void set(string name1)
	{
		name = name1;
	}
};

int main1() {

	//通过圆类 创建具体的圆（对象）
	//实例化（通过一个类，创建一个对象的过程）
	circle cl;
	//给圆对象 的是属性进行赋值
	cl.m_r = 10;

	cout << "圆的周长：" << cl.zc() << endl;

	//实例化
	//姓名：
	student stu;
	stu.name = "张三";
	//卡号：
	stu.id = 1;

	//显示
	stu.show();


	system("pause");

	return 0;
} 