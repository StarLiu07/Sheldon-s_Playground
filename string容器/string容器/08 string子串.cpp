#include <iostream>
using namespace std;

//string substr(int pos = 0,int n = npos) const;  返回由pos开始的n个字符组成的字符串

void test09()
{
	string str = "abcdef";

	string substr = str.substr(1, 3);

	cout << "substr = " << substr << endl;
}

//实用操作
void test10()
{
	string email = "zhangsan@sina.com";

	//从邮件地址中 获取 用户名信息

	int pos = email.find("@");

	string username = email.substr(0, posS);

	cout << "username = " << username << endl;
}

int main() {

	test09();

	test10();

	system("pause");

	return 0;
}