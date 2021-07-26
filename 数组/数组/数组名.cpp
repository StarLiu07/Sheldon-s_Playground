#include<iostream>
using namespace std;

/*一维数组名称的用途：
* 1.可以统计整个数组在内存中的长度
* 2.可以获取整个数组在内存中的首地址
*/

int main2() {

	//可以通过数组名来统计整个数组占用内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组所占空间大小：" << sizeof(arr) << endl;
	cout << "每个元素所占空间大小：" << sizeof(arr[0]) << endl;
	cout << "数组中元素个数为：" << sizeof(arr) / sizeof(arr[0]) << endl;

	//可以通过数组名查看数组首地址
	cout << "数组的首地址为：" << (int)arr << endl;
	cout << "数组中第一个元素的位置：" << (int)&arr[0] << endl;
	cout << "数组中第一个元素的位置：" << (int)&arr[1] << endl;

	//数组名是一个常量，不可以进行赋值操作

	system("pause");

	return 0;
}