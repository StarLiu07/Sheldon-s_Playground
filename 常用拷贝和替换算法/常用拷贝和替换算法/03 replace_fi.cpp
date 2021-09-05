#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

/*
* 功能描述：
* 将区间内满足条件的元素，替换成指定元素
* 
* 函数原型：
* replace_if(iterator beg,iterator end,_pred,newvalue);
* 按条件替换元素，满足条件的替换成指定元素
* beg 开始迭代器
* end 结束迭代器
* _pred 谓词
* newvalue 替换的新元素
*/

class myprint03
{
public:
	void operator()(int val)
	{
		cout << val << "  ";
	}
};

class greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};

void test03()
{
	vector<int> v1;
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(40);
	v1.push_back(40);
	v1.push_back(50);

	cout << "替换前：" << endl;
	for_each(v1.begin(), v1.end(), myprint03());
	cout << endl;

	//将大于等于30 替换为3000
	replace_if(v1.begin(), v1.end(), greater30(), 3000);
	cout << "替换后：" << endl;
	for_each(v1.begin(), v1.end(), myprint03());
	cout << endl;
}

int main3() {

	test03();

	system("pause");

	return 0;
}