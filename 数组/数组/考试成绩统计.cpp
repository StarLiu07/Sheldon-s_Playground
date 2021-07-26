#include<iostream>
using namespace std;

//案例描述：有三位同学（张三，李四，王五），在考试中的成绩如下，请分别输出三位同学的总成绩
/*
* 张三：语文：100  数学：100  英语：100
* 李四：语文：90   数学：50   英语：100
* 王五：语文：60   数学：70   英语：80
*/

int main() {
	int arr[3][3]
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "张三","李四","王五" };

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;//用来存储分数
		for (int j = 0; j < 3; j++)
		{
			sum+= arr[i][j];
		}
		cout << names[i] << "的总分为:" << sum << endl;
	}

	system("pause");

	return 0;
}