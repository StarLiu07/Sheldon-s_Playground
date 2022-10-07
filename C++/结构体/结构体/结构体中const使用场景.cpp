#include<iostream>
using namespace std;

//作用:使用const来防止误操作

//const的使用场景
struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少被占用的空间，而且不会复制新的副本出来
void print(const student *a)
{
	//a->age = 150;//加入const后，一旦修改就会误操作，可以防止误操作
	cout << "姓名：" << a->name << " 年龄：" << a->age << " 分数：" << a->score << endl;
}

int main6() {

	//创建结构体变量
	struct student s = { "张三",18,100 };

	//通过函数打印结构体变量信息
	print(&s);

	system("pause");

	return 0;
}