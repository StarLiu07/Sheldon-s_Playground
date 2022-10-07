#include<iostream>
using namespace std;

class base5
{
public:
	base5()
	{
		cout << "base5的构造函数" << endl;
	}
	~base5()
	{
		cout << "base5的析构函数" << endl;
	}
};

class son5 : public base5
{
public:
	son5()
	{
		cout << "son5构造函数" << endl;
	}
	~son5()
	{
		cout << "son5析构函数" << endl;
	}
};

void test06()
{
	//base5 b;

	//继承中的构造和析构顺序如下
	//先构造父类，再构造子类，析构顺序和构造的顺序相反
	son5 s;
}

int main4() {

	system("pause");

	return 0;
}