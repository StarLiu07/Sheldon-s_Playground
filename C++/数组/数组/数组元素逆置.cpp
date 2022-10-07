#include<iostream>
using namespace std;

//案例描述：请先声明一个5个元素的数组，并且将元素逆置

int main4() {

	int arr[5] = { 1,2,3,4,5 };
	for (int i = 4; i <= 5 && i >= 0; i--)
	{
		cout << arr[i] << "  ";
	}

	system("pause");

	return 0;
}