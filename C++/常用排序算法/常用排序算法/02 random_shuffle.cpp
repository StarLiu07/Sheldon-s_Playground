#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <ctime>

/*
* 功能描述：
* 洗牌  指定范围内的元素随机调整次序
* 
* 函数原型：
* random_shuffle(iterator beg,iterator end);
* 指定范围内的元素随机调整次序
* beg开始迭代器
* end结束迭代器
*/

void myprint01(int val)
{
	cout << val << "  ";
}

void test02()
{
	srand((unsigned int)time(NULL));

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//利用洗牌算法 打乱顺序
	random_shuffle(v.begin(), v.end());

	for_each(v.begin(), v.end(), myprint01);
	cout << endl;
}

int main2() {

	test02();

	system("pause");

	return 0;
}