#include <iostream>
using namespace std;
#include <deque>

/*
* 函数原型：
* deque& operator=(const deque &deq);  //重载等号操作符
* assign(beg,end);  将[geg,end]区间中的数据拷贝赋值给本身
* assign(n,elem);  将n个elem拷贝赋值给本身
*/

void printdeque2(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test02()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque2(d1);

	//=赋值
	deque<int> d2;
	d2 = d1;
	printdeque2(d2);

	//assign赋值
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printdeque2(d3);

	deque<int> d4;
	d4.assign(10, 100);
	printdeque2(d4);
}

int main2() {

	test02();

	system("pause");

	return 0;
}