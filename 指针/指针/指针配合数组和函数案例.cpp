#include<iostream>
using namespace std;

//案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排列

void print(int* p,int len)
{
	for (int a = 0; a < len; a++)
	{
		cout << *(p + a) << endl;
	}
}

//冒泡排序函数
void bubble(int *arr,int len)
{
	for(int i = 0; i < len - 1; i ++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (*(arr+j) > *(arr + j +1))
			{
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
}

int main() {

	//1.创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	//2.创建函数，实现冒泡排序
	bubble(arr, len);

	//3.打印排序后数组
	print(arr, len);

	system("pause");

	return 0;
}