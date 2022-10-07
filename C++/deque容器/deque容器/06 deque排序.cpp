#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>  //标准算法头文件

//算法：sort(iterator beg,iterator end);  对beg和end区间内元素进行排序

void printdeque6(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << "  ";
	}
	cout << endl;
}

void test08()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printdeque6(d);

	//排序  默认排序规则 从小到大 升序
	//对于支持随机访问的迭代器容器，都可以利用sort算法直接对其进行排序
	sort(d.begin(), d.end());

	cout << "排序后" << endl;
	printdeque6(d);


}

int main() {

	test08();

	system("pause");

	return 0;
}