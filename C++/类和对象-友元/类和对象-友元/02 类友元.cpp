#include<iostream>
using namespace std;

class building
{
	friend  class goodgay;//goodgay类是本类的好朋友，可以访问私有成员	

public:
	building();

public:
	string m_sittingroom; //客厅

private:
	string m_bedroom; //卧室
};

class goodgay
{
	

public:
	goodgay();

public:


	void visit();//参观函数 访问building中的属性

	building* Building;
};

//类外写成员函数
building::building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

goodgay::goodgay()
{
	//创建建筑物对象
	Building = new building;
}

void goodgay::visit()
{
	cout << "好基友正在访问：" << Building->m_sittingroom << endl;
	cout << "好基友正在访问：" << Building->m_bedroom << endl;
}

void test02()
{
	goodgay gg;
	gg.visit();
}

int main2() {

	test02();

	system("pause");

	return 0;
}