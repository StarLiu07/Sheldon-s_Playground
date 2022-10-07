#include <iostream>
using namespace std;
#include <list>
#include <algorithm>

/*
* 函数原型
* reverse()  反转列表
* sort();  链表排序
*/

void printlist4(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test07()
{
	//反转
	list<int> l1;

	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);

	cout << "反转前：" << endl;
	printlist4(l1);

	//反转
	l1.reverse();
	cout << "反转后：" << endl;
	printlist4(l1);
}

bool mycompare(int v1,int v2)
{
	//降序  就让第一个数大于第二个数
	return v1 > v2;
}

//排序
void test08()
{
	list<int> l1;

	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);

	//排序
	cout << "排序前：" << endl;
	printlist4(l1);

	//所有不支持随机访问迭代器，不可以使用标准算法
	//不支持随机访问迭代器的容器，内部会提供对应的一些算法
	l1.sort(); //默认排序规则 从小到大  升序
	cout << "排序后：" << endl;
	printlist4(l1);

	l1.sort(mycompare);
	printlist4(l1);
}

int main6() {

	test07();
	test08();

	system("pause");

	return 0;
}