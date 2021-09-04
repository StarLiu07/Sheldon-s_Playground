#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <functional>

/*
* 功能描述：
* 对容器内元素进行排序
* 
* 函数原型：
* sort(iterator beg,iterator end,_pred);
* 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器的位置
* beg  开始迭代器
* end  结束迭代器
* _pred  谓词
*/

void myprint(int val)
{
	cout << val << "  ";
}

void test01()
{
	vector<int> v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	//利用sort进行升序
	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(),myprint);
	cout << endl;

	//改变为 降序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myprint);
	cout << endl;
}

int main1() {

	test01();

	system("pause");

	return 0;
}