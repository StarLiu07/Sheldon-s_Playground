#include<iostream>
using namespace std;

//普通实现页面

//JAVA首页
//class java
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "Java教学视频" << endl;
//	}
//};
//
////Python页面
//class python
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "python教学视频" << endl;
//	}
//};
//
////c++页面
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Python,C++...(公共分类列表)" << endl;
//	}
//	void content()
//	{
//		cout << "C++教学视频" << endl;
//	}
//};

//继承实现页面
class basepage
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内地图...（公共底部）" << endl;
	}
	void left()
	{
		cout << "Java,Python,C++...(公共分类列表)" << endl;
	}
};

/*继承的好处：减少重复代码
语法： class 子类 : 继承方式 父类
子类 也称为 派生类
父类 也称为 基类*/

//Java页面
class java : public basepage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};

//Python页面
class python : public basepage
{
public:
	void content()
	{
		cout << "python学科视频" << endl;
	}
};

//c++页面
class cpp : public basepage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};


void test01()
{
	cout << "Java下载视频页面如下：" << endl;
	java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "————————————————" << endl;
	cout << "Python下载视频页面如下：" << endl;
	python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "————————————————" << endl;
	cout << "C++下载视频页面如下：" << endl;
	cpp c;
	c.header();
	c.footer();
	c.left();
	c.content();
}

int main1() {

	test01();

	system("pause");

	return 0;
}