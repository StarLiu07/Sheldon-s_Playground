#include<iostream>
using namespace std;

//案例描述：在一个数组中记录了五只小猪的体重，如 int arr[5] = {300,400,500,600,700,},找出并打印最重的小猪体重

int main3() {
	
	int arr[5] = { 125,200,156,43,50 };
	int max = 0; //创建一个认定的最大值	
	
	for (int i = 0; i < 5; i++)//访问列表的每个元素
	{
		if (max < arr[i])//访问数组中的每个元素，如果这个元素比我认定的最大值更大，更新最大值
		{
			max = arr[i];
		}
	}
	cout << "最重的小猪的体重为：" << max << endl;

	system("pause");

	return 0;
}