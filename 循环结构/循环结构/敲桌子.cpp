#include<iostream>
using namespace std;

/*
* 从1开始数到数字100，如果数字个位含有7，或者十位数字含有7，或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出
*/

int mainew() {

	for (int num = 1; num < 101; num++)
	{
		if (num % 7 == 0)
		{
			cout << "敲桌子" << endl;
		}
		else if (num % 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << num << endl;
		}
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhhh

	system("pause");

	return 0;
}