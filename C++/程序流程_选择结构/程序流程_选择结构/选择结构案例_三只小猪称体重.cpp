#include<iostream>
using namespace std;

//有三只小猪ABC，请分别输入三只小猪的体重，并判断那只小猪最重 

/*int main() {

	//输入三只小猪的体重
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "请输入A小猪的体重" << endl;
	cin >> a;
	cout << "请输入B小猪的体重" << endl;
	cin >> b;
	cout << "请输入C小猪的体重" << endl;
	cin >> c;

	//比较A和B的体重大小
	if (a >= b)
	{
		if (b >= c)
		{
			cout << "A小猪 >= B小猪 >= C小猪" << endl;
		}
		else
		{
			cout << "A小猪 >= C小猪 >= B小猪" << endl;
		}
	}
	else
	{
		if (a >= c)
		{
			cout << "B小猪 >= A小猪 >= C小猪" << endl;
		}
		else
		{
			cout << "B小猪 >= C小猪 >= A小猪" << endl;
		}
	}

	system("pause");

	return 0;
}*/
int mainhh() {

	//尝试使用逻辑运算完成此题
	double a = 0;
	cout << "请输入A小猪的体重" << endl;
	cin >> a;
	double b = 0;
	cout << "请输入B小猪的体重" << endl;
	cin >> b;
	double c = 0;
	cout << "请输入C小猪的体重" << endl;
	cin >> c;

	//比较
	if (a >= b && b >= c)
	{
		cout << "A小猪 >= B小猪 >= C小猪" << endl;
	}
	else if (a >= c && c >= b)
	{
		cout << "A小猪 >= C小猪 >= B小猪" << endl;
	}
	else if (b >= a && a >= c)
	{
		cout << "B小猪 >= A小猪 >= C小猪" << endl;
	}
	else if (b >= c && c >= a)
	{
		cout << "B小猪 >= 小猪 >= A小猪" << endl;
	}
	else if (c >= a && a >= b)
	{
		cout << "C小猪 >= A小猪 >= B小猪" << endl;
	}
	else
	{
		cout << "C小猪 >= B小猪 >= A小猪" << endl;
	}
	//ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh
	//nb!!!!!!!!nb

	system("pause");

	return 0;
}