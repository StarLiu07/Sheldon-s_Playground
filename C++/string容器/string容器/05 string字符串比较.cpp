#include <iostream>
using namespace std;

//int compare(const string &s) const; 与字符串s比较
//int compare(const char &s) const;  与字符串s比较

void test06()
{
	string str1 = "hello";
	string str2 = "xello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 等于 str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 大于 str2 " << endl;
	}
	else
	{
		cout << "str1 小于 str2 " << endl;
	}
}

int main5() {

	test06();

	system("pause");
	
	return 0;
}