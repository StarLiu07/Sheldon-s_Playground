#include<iostream>
using namespace std;

//案例描述：制作饮品的大致流程为：煮水-冲泡-倒入杯中-加入辅料
//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

class abstactdringk
{
public:
	//煮水
	virtual void boil() = 0;

	//冲泡
	virtual void brew() = 0;

	//倒入杯中
	virtual void pourincup() = 0;

	//加入辅料
	virtual void putsomething() = 0;

	void makedrink()
	{
		
		boil();
		brew();
		pourincup();
		putsomething();
		
	}

};

class coffee : public abstactdringk
{
public:
	//煮水
	virtual void boil()
	{
		cout << "煮水" << endl;
	}

	//冲泡
	virtual void brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void pourincup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void putsomething()
	{
		cout << "加糖和牛奶" << endl;
	}

};

class tea : public abstactdringk
{
public:
	//煮水
	virtual void boil()
	{
		cout << "煮水" << endl;
	}

	//冲泡
	virtual void brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	//倒入杯中
	virtual void pourincup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void putsomething()
	{
		cout << "加柠檬" << endl;
	}
};

void test05()
{
	//咖啡
	abstactdringk* abc = new coffee;
	abc->makedrink();
	delete abc;

	cout << "——————————————" << endl;

	//茶
	abc = new tea;
	abc->makedrink();
	delete abc;
}
//：)

int main4() {

	test05();

	system("pause");

	return 0;
}