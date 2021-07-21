#include<iostream>
using namespace std;

//数据输入作用：用于从键盘获取数据
//关键字：cin   语法：cin>>变量

int main() {

	//1.整型
	int a = 0;
	cout << "请给整型变量a赋值:" << endl;
	cin >> a;
	cout << "整型变量a=" << a << endl;

	//2.浮点型
	float b = 3.14f;
	cout << "请给浮点b赋值：" << endl;
	cin >> b;
	cout << "浮点b=" << b << endl;

	//3.字符型
	char ch = 'a';
	cout << "请给字符ch赋值：" << endl;
	cin >> ch;
	cout << "字符ch=" << ch << endl;

	//4.字符串型
	string str = "hello world";
	cout << "请给字符串str赋值：" << endl;
	cin >> str;
	cout << "字符串str=" << str << endl;

	//5.布尔类型
	bool flag = false;
	cout << "请给布尔型flag赋值" << endl;
	cin >> flag;//bool类型 只要是非0的值都代表真（自动忽略小数）
	cout << "布尔型flag=" << flag << endl;

	system("pause");

	return 0;
}