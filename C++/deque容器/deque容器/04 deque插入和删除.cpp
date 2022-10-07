#include <iostream>
using namespace std;
#include <deque>

/*
* 函数原型：
* push_back(elem);  在容器尾部添加一个数据
* push_front(elem);  在容器头部插入一个数据
* pop_back();  删除容器最后一个数据
* pop_front();  删除容器第一个数据
* 
* 指定位置操作：
* insert(pos,elem);  在pos位置插入一个elem元素的拷贝，返回新数据的位置
* insert(pos,n,elem);  在pos位置插入n个elem数据，无返回值
* insert(pos,beg,end);  在pos位置插入[beg,end]区间的数据，无返回值
* clear();  清空容器的所有数据
* erase(beg,end);  删除[beg,end]区间的数据，返回下一个数据的位置
* erase(pos);  删除pos位置的数据，返回下一个数据的位置
*/

void printdeque4(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

//两端操作
void test04()
{
	deque<int> d1;

	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);

	printdeque4(d1);

	//尾删
	d1.pop_back();
	printdeque4(d1);

	//头删
	d1.pop_front();
	printdeque4(d1);
}

void test05()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	printdeque4(d1);

	//insert插入
	d1.insert(d1.begin(), 1000);
	printdeque4(d1);

	d1.insert(d1.begin(), 2, 10000);
	printdeque4(d1);

	//按照区间进行插入
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(),  d2.begin(), d2.end());
	printdeque4(d1);
}

void test06()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	//删除
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);

	//按照区间的方式删除
	//d1.erase(d1.begin(), d1.end());
	//清空
	d1.clear();

	printdeque4(d1);
}

int main4() {
	
	test04();
	test05();
	test06();

	system("pause");

	return 0;
}