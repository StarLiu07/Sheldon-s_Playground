#include<iostream>
using namespace std;

class building11;
class goodgay1
{
public:
	goodgay1();
	
	void nvisit();//让visit可以访问building1中的私有成员
	void visit2();//让visit2不可以访问building1中的私有成员

	building11* Building;
};

class building11
{
	//告诉编译器 goodgay类下的visit成员函数，作为本类的好朋友，可以访问私有成员
	friend void goodgay1::nvisit();

public:
	building11();

public:
	string m_sittingroom;

private:
	string m_bedroom;
};

//类外写成员函数
building11::building11()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

goodgay1::goodgay1()
{
	Building = new building11;
}

void goodgay1::nvisit()
{
	cout << "nvisit正在访问:" << Building->m_sittingroom << endl;
	cout << "nvisit正在访问:" << Building->m_bedroom << endl;
}


void goodgay1::visit2()
{
	cout << "visit2正在访问:" << Building->m_sittingroom << endl;
	//cout << "visit2正在访问:" << Building->m_bedroom << endl;
}

void test03()
{
	goodgay1 gg1;
	gg1.nvisit();
	gg1.visit2();
}

int main() {

	test03();

	system("pause");

	return 0;
}