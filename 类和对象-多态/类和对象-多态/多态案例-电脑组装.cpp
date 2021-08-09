#include<iostream>
using namespace std;

/*电脑主要组成部件为CPU (用于计算)，显卡(用于显示)，内存条(用于存储)
将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件,例如Intel厂 商和Lenovo厂商
创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
测试时组装三台不同的电脑进行工作*/

//cpu基类
class cpu
{
public:
	virtual  void calculate() = 0;
};

//显卡基类
class videocard
{
public:
	virtual void display() = 0;
};

//内存条基类
class memory
{
public:
	virtual void storage() = 0;
};

//电脑类
class computer
{
public:
	virtual void dowork() = 0;

};

//intel
//cpu子类（intel）
class intelcpu : public cpu
{
public:
	void calculate()
	{
		cout << "intel-cpu正在计算" << endl;
	}
};

//videocard子类（intel）
class intelvideocard : public videocard
{
public:
	void display()
	{
		cout << "intel-videocard正在显示" << endl;
	}
};

//memory子类（intel）
class intelmemory : public memory
{
public:
	void storage()
	{
		cout << "intel-memory正在存储" << endl;
	}
};

//lenovo
//cpu子类（lenovo）
class lenovocpu : public cpu
{
public:
	void calculate()
	{
		cout << "lenovo-cpu正在计算" << endl;
	}
};

//videocard子类（lenovo）
class lenovovideocard : public videocard
{
public:
	void display()
	{
		cout << "lenovo-videocard正在显示" << endl;
	}
};

//memory子类（lenovo）
class lenovomemory : public memory
{
public:
	void storage()
	{
		cout << "lenovo-memory正在存储" << endl;
	}
};

//电脑1
class computer1 : public computer
{
	void dowork()
	{
		//cpu
		cpu* c = new intelcpu;
		c->calculate();
		delete c;

		//显卡
		videocard* v = new intelvideocard;
		v->display();
		delete v;

		//内存条
		memory* m = new intelmemory;
		m->storage();
		delete m;
	}
};

//电脑2
class computer2 : public computer
{
	void dowork()
	{
		//cpu
		cpu* c = new lenovocpu;
		c->calculate();
		delete c;

		//显卡
		videocard* v = new lenovovideocard;
		v->display();
		delete v;

		//内存条
		memory* m = new lenovomemory;
		m->storage();
		delete m;
	}
};

//电脑3
class computer3 : public computer
{
	void dowork()
	{
		//cpu
		cpu* c = new intelcpu;
		c->calculate();
		delete c;

		//显卡
		videocard* v = new lenovovideocard;
		v->display();
		delete v;

		//内存条
		memory* m = new lenovomemory;
		m->storage();
		delete m;
	}
};

void test07()
{
	cout << "电脑1" << endl;
	computer* c1 = new computer1;
	c1->dowork();
	delete c1;

	cout << "\n——————————————" << endl;

	cout << "\n电脑2" << endl;
	computer* c2 = new computer2;
	c2->dowork();
	delete c2;

	cout << "\n——————————————" << endl;

	cout << "\n电脑3" << endl;
	computer* c3 = new computer3;
	c3->dowork();
	delete c3;
}

int main() {

	test07();

	system("pause");

	return 0;
}
//ohhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh

