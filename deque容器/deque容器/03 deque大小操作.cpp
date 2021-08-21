#include <iostream>
using namespace std;
#include <deque>

/*
* 函数原型：
* deque.empty();  判断容器是否为空
* deque.size();  返回容器中元素个数
* deque.resize(num);  重新指定容器的长度num，若容器变长，则以默认值填充新位置
*                     若果容器变短，则末尾超出容器长度的元素被删除
* deque.resize(num,elem);  重新指定容器的长度为num，若容器变长，则以elem填充新位置
*                          如果容器变短，则末尾超出容器长度的元素被删除
*/

void printdeque3(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test03()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque3(d1);

	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小：" << d1.size() << endl;
		//deque容器没有容量概念
	}

	//重新指定大小
	d1.resize(15,1);
	printdeque3(d1);

	d1.resize(5);
	printdeque3(d1);
}

int main3() {

	test03();

	system("pause");

	return 0;
}