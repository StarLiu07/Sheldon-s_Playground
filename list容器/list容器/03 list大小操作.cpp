#include <iostream>
using namespace std;
#include <list>

/*
* 函数原型：
* size();  返回容器中元素的个数
* empty();  判断容器是否为空
* resize(num);  重新指定容器的长度为num，若容器边长，则以默认值填充新位置
*               如果容器变短，则末尾超出容器长度的元素被删除
* resize(num,elem);  重新指定容器的长度为num，若容器变长，则以elem值填充新位置
*                    如果容器变短，则末尾超出容器长度的元素被删除
*/

void printlist2(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test04()
{
	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printlist2(l1);

	//判断容器是否为空
	if (l1.empty())
	{
		cout << "l1为空" << endl;
	}
	else
	{
		cout << "l1不为空" << endl;
		cout << "l1的元素个数为：" << l1.size() << endl;
	}

	//重新指定大小
	l1.resize(10,10000);
	printlist2(l1);

	l1.resize(2);
	printlist2(l1);
}

int main3() {

	test04();

	system("pause");

	return 0;
}