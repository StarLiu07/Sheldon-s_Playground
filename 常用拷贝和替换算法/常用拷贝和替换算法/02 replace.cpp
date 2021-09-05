#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* 功能描述：
* 将容器内指定范围的旧元素改为新元素
* 
* 函数原型：
* replace(iterator beg,iterator end,oldvalue,newvalue);
* 将区间内旧元素 替换成 新元素
* beg 开始迭代器
* end 结束迭代器
* oldvalue 旧元素
* newvalue 新元素
*/

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << "  ";
	}
};

void test02()
{
	vector<int> v1;

	v1.push_back(20);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(30);
	v1.push_back(50);

	cout << "替换前：" << endl;
	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;

	cout << "替换后：" << endl;
	replace(v1.begin(), v1.end(), 20, 10);

	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;
}

int main2() {

	test02();

	system("pause");

	return 0;
}