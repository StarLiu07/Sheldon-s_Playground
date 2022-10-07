#include<iostream>
using namespace std;

//友元的目的就是让一个函数或者类 访问另一个类中私有成员
//友元的关键字为friend

//建筑物类
class building1
{
	//goodgay 是 buildidng 的好朋友，允许访问私有成员
	friend void goodgay(building1& house);

public:
	building1()
	{
		sittingroom = "客厅";
		bedroom = "卧室";
	}

public:
	string sittingroom;

private:
	string bedroom;
};

void goodgay(building1& house)
{
	cout << "好基友正在访问：" << house.sittingroom << endl;
	cout << "好基友正在访问：" << house.bedroom << endl;
}

void test01()
{
	building1 house2;
	goodgay(house2);
}

int main1() {

	test01();

	system("pause");

	return 0;
}