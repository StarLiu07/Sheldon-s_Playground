#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

/*
* 功能描述
* 查找指定元素是否存在
* 
* 函数原型：
* bool binary_seach(iterator beg,iterator end,value);
* 查找指定的元素，查到 返回true 否者false
* 注意：在无序序列中不可用
* beg开始迭代器
* end结束迭代器
* vlaue查找的元素
*/

void test06()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中是否有9元素
	//容器必须是有序的序列
	//v.push_back(2);  如果是无序序列，结果未知
	bool ret = binary_search(v.begin(), v.end(), 9);

	if (ret)
	{
		cout << "找到元素" << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

int main4() {

	test06();

	system("pause");

	return 0;
}