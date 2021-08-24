#include <iostream>
using namespace std;
#include <list>

/*
* 函数原型
* front();  返回第一个元素
* back();  返回最后一个元素
*/

void test06()
{
	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//l1[0] //不可以用[]访问list容器中的元素

	//l1.at(0);  //不可以用at方式访问list容器中的元素

	//原因是list本质链表，不是用连续性空间存储数据，迭代器也是不支持随机访问的

	cout << "第一个元素为：" << l1.front() << endl;
	cout << "最后一个元素为：" << l1.back() << endl;

	//验证迭代器不支持随机访问
	list<int>::iterator it = l1.begin();

	it++; //支持双向
	it--;

	//it = it + 1;  
}

int main5() {

	test06();

	system("pause");

	return 0;
}