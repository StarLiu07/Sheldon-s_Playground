#include <iostream>
using namespace std;

/*案例描述：
利用函数模板封装一个排序的函数，可以对不同类型数据进行排序
排序从大到小
选择排序
分别利用char数据和int数据测试*/

//交换函数模板
template<class T>
void myswap2(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<class T>
void mysort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;//认定最大值下标
		for (int j = i + 1; j < len; j++)
		{
			//认定的最大值比遍历出的数值要小，说明j下标的元素才是真正的最大值
			if (arr[max] < arr[j])
			{
				max = j;
			}

		}
		if (max != i)
		{
			//交换max和i下标的元素
			myswap2(arr[max], arr[i]);
		}
	}
}

//提供打印数据模板
template<class T>
void printarry(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test04()
{
	//测试char数组
	char chararry[] = "badcfe";
	int num = sizeof(chararry) / sizeof(char);

	mysort(chararry, num);
	printarry(chararry, num);
}

void test05()
{
	int intarr[] = { 7,5,1,3,6 };

	int num = sizeof(intarr) / sizeof(int);

	mysort(intarr, num);

	printarry(intarr, num);
}

int main3() {

	test04();

	test05();

	system("pause");

	return 0;
}