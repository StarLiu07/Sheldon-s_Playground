#include<iostream>
using namespace std;
#include<string>
#include<ctime>

/*案例描述:
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，
有老师姓名和一个存放5名学生的数组作为成员学生的成员有姓名、考试分数，
创建数组存放3名老师，通过函数给每个老师及所带的学生赋值最终打印出老师数据以及老师所带的学生数据。*/

//定义学生结构体
struct student1
{
	string name;
	int score;
};

//定义老师结构体
struct teacher1
{
	string name2;
	struct student1 arr[5];
};

//给老师和学生赋值的函数	
void allocate(struct teacher1 a[], int len)

{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{

		//给老师赋值
		a[i].name2 = "teacher_";
		a[i].name2 += nameseed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			a[i].arr[j].name = "studen_";
			a[i].arr[j].name += nameseed[j];
			int random = rand() % 61 + 40;//40~100
			a[i].arr[j].score = random;
		}
	}
}

//打印所有人的信息
void print(struct teacher1 t_arr[], int len)
{
	for(int i = 0;i < len;i++)
	{
		cout << "老师姓名：" << t_arr[i].name2 << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << t_arr[i].arr[j].name << " \t学生分数：" << t_arr[i].arr[j].score << endl;
		}
	}
}

int main7() {


	//随机数种子
	srand((unsigned int)time(NULL));

	//创建三位老师的数组
	struct teacher1 t_arr[3];

	//通过函数给三位老师的信息赋值，并给老师带的学生的信息赋值
	allocate(t_arr, 3);  

	//打印所有老师及所带学生信息
	print(t_arr, 3);

	system("pause");

	return 0;
}