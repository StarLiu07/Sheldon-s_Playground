#include<iostream>
using namespace std;

//结构体数组作用：将自定义的结构体放入数组中方便维护
//语法：struct 结构体名 数组名[元素个数] = {{},{},...{}}

//1.定义结构体
struct student
{
	string name;

	int age;

	int score;
};


int main2() {

//2.创建结构体数组
	struct student arr[] =
	{
		{"张三",18,100},
		{"李四",19,80},
		{"王五",20,60}
	};

//3.给结构体数组中的元素赋值
	arr[2].name = "赵六";
	arr[2].age = 30;
	arr[2].score = 66;

//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
	}


	system("pause");

	return 0;
}