#include<iostream>
using namespace std;

/*案例描述：
设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。*/
/*五位英雄信息如下：
{"刘备" ,23,"男"},{"关羽" ,22,"男"},
{"赵云",21,"男”},{"貂蝉",19,"女"},
{"张飞”,20, "男"}*/

//定义一个英雄结构体
struct hero
{
	string name;
	int age;
	string sex;
};

//创建一个冒泡排序的函数
void bubble(struct hero arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				struct hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}

int main() {

	//创建一个结构体数组，用于储存英雄信息
	struct hero arr[5] = { {"刘备",23,"男"},{"关羽" ,22,"男"},{"张飞",20,"男"},{"赵云",21,"男"},{"貂蝉",19,"女"} };

	//通过冒泡排序实现对英雄年龄的升序排列
	
	bubble(arr, 5);

	//输出排序后的数组
	for (int a = 0; a < 5; a++)
	{
		cout << "姓名：" << arr[a].name << " 年龄：" << arr[a].age << " 性别：" << arr[a].sex << endl;
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhh

	system("pause");

	return 0;
}