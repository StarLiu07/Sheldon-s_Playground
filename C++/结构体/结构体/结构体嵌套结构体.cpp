#include<iostream>
using namespace std;
#include<string>

//作用：结构体中的成员可以是另一个结构体
//例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

//定义学生结构体
struct student
{
	string name;
	int age;
	int score;

};

//定义老师结构体
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main4() {

	//创建老师
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "张三";
	t.stu.age = 18;
	t.stu.score = 100;
	cout << "老师姓名：" << t.name << " 老师编号：" << t.id << " 老师年龄：" << t.age << endl;
	cout << "学生姓名：" << t.stu.name << " 学生年龄：" << t.stu.age << " 学生分数：" << t.stu.score << endl;

	system("pause");

	return 0;
}