#include<iostream>
using namespace std;

//作用：将结构体做为参数向函数中传递
/*传递方式有两种：
1.值传递
2.地址传递*/

//定义学生结构
struct student
{
	string name;
	int age;
	int score;
};

//1.值传递
void print1(struct student a)
{
	cout << "子函数中 姓名：" << a.name << " 年龄：" << a.age << " 分数：" << a.score << endl;
}

//2.地址传递
void print2(struct student *p)
{
	//cout << "子函数2中 姓名：" << (*p).name << " 年龄：" << (*p).age << " 分数：" << (*p).score << endl;
	//上面方法也行，但通常用->
	cout << "子函数2中 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}

int main5() {

	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上所有的信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 18;
	s.score = 100;

	cout << "在main函数中打印 姓名：" << s.name
		<< " 年龄：" << s.age
		<< " 分数：" << s.score << endl;

	print1(s);
	print2(&s);

	system("pause");

	return 0;
}