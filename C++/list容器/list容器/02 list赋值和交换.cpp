#include <iostream>
using namespace std;
#include <list>

/*
* 函数原型：
* assign(beg,end);  将[beg,end]区间中的数据拷贝赋值给本身
* assign(n,elem);  将n个elem拷贝赋值给本身
* list& operator=(const list &lst);  重载等号操作
* swap(lst);  将lst与本身的元素呼唤
*/

void printlist1(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//赋值
void test02()
{
	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printlist1(l1);

	list<int> l2;
	l2 = l1; //operator= 方式赋值
	printlist1(l2);

	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printlist1(l3);

	list<int> l4;
	l4.assign(10, 100);
	printlist1(l4);
}

//交换
void test03()
{
	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	list<int> l2;
	l2.assign(10, 100);

	cout << "交换前：" << endl;
	printlist1(l1);
	printlist1(l2);

	l1.swap(l2);
	cout << "交换后" << endl;
	printlist1(l1);
	printlist1(l2);
}

int main2() {

	//test02();
	test03();

	system("pause");

	return 0;
}