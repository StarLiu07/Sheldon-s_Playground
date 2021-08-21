#include <iostream>
using namespace std;
#include <deque>

//功能：双端数组，可以对头端进行插入和删除
/*
* deque和vector区别
* vector对于头部的插入删除效率低，数据量越大，效率越低
* deque相对而言，对头部的插入删除速度会比vector快
* vector访问元素时的速度会比deque快，这两者内部实现有关
*/

/*
* deque构造函数  函数原型：
* deque<T>deqT;  默认构造形式
* deque(beg,end);  构造函数将[beg,end]区间中的元素拷贝给本身
* deque(n,elem);  构造函数将n个elem拷贝给本身
* deque(const deque &deq);  拷贝构造函数
*/

void printdeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printdeque(d1);

	deque<int> d2(d1.begin(), d1.end());
	printdeque(d2);

	deque<int> d3(10, 100);
	printdeque(d3);

	deque<int> d4(d3);
	printdeque(d4);
}

int main1() {

	test01();

	system("pause");

	return 0;
}