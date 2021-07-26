#include<iostream>
using namespace std;

/*作用：1.查看二维数组内存空间
* 2.获取二维数组首地址
* */


int main7() {

	//1.查看二维数组内存空间
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用的内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存空间为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用的内存为：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	//2.获取二维数组首地址
	cout << "二维数组的首地址为：" << (int)arr << endl;
	cout << "二维数组中第一行首地址：" << (int)arr[0] << endl;
	cout << "二维数组中第二行首地址：" << (int)arr[1] << endl;

	cout << "二维数组第一个元素首地址" << (int)&arr[0][0] << endl;
	cout << "二维数组第二个元素首地址" << (int)&arr[0][1] << endl;

	system("pause");

	return 0;
}