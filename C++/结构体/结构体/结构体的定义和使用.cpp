#include<iostream>
using namespace std;

//结构体基本概念：结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
//结构体创建语法：struct 结构体名 {结构体成员列表};
/*通过结构体创建变量的方式有三种:
1.struct结构体名变量名
2.struct结构体名变量名={成员1值，成员2值...}
3.定义结构体时顺便创建变量*/

//1.创造学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型：一些类型集合组成的一个类型
//struct 结构体名 {成员列表};
struct student
{
	//成员列表

	//姓名
	string name;

	//年龄
	int age;

	//分数
	int score;
}s3;//顺便创建结构体变量

int main1() {

	//2.通过学生类型创建具体学生
//1.struct结构体名 变量名
	//struct的关键字可以省略
	student s1;
	//给s1属性赋值，通过一个点访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;


//2.struct结构体名变量名={成员1值，成员2值...}
	 student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;

//3.定义结构体时顺便创建变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 90;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;


	system("pause");

	return 0;
}