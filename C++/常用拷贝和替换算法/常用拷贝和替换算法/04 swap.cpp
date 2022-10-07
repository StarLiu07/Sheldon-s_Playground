#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* 功能描述：
* 互换两个容器的元素
* 
* 函数原型：
* swap(containew c1,containew c2);
* 互换两个容器的元素
* c1容器1
* c2容器2
*/

void myprint04(int val)
{
	cout << val << "  ";
}

void test04()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 100);
	}

	cout << "交换前：" << endl;
	cout << " v1:" << endl;
	for_each(v1.begin(), v1.end(), myprint04);
	cout << endl;

	cout << " v2:" << endl;
	for_each(v2.begin(), v2.end(), myprint04);
	cout << endl;

	cout << "————————————————————————" << endl;

	cout << "交换后：" << endl;

	swap(v1, v2);

	cout << " v1:" << endl;
	for_each(v1.begin(), v1.end(), myprint04);
	cout << endl;

	cout << " v2:" << endl;
	for_each(v2.begin(), v2.end(), myprint04);
	cout << endl;

}

int main() {

	test04();

	system("pause");

	return 0;
}