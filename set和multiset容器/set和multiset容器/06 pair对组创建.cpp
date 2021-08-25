#include <iostream>
using namespace std;
#include <set>

/*
* 两种创建方式
* pair<type,type> p (value1,value2);
* pair<type,type> p =  make_pair(value1,value2);
*/

void test08()
{
	//第一种
	pair<string, int> p("Tom", 20);

	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
	
	//第二种
	pair<string, int> p2 = make_pair("Jerry", 30);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

int main6() {

	test08();

	system("pause");

	return 0;
}