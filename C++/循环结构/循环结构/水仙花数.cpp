#include<iostream>
using namespace std;

//案例描述：水仙花数是指一个三位数，他的每个位置上的数字的3次方等于它本身，请用do...while语句求出所有三位数中的水仙花数


int mainde() {
	
	//1. 打印所有三位数字
	int num = 100;

	do
	{//2. 从所有的三位数字中找到水仙花数
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if(a*a*a + b*b*b + c*c*c == num)//如果是水仙花数才打印
		cout << num << endl;
		num++;
	} while (num < 1000);

	//2. 从所有的三位数字中找到水仙花数

	system("pause");

	return 0;
}