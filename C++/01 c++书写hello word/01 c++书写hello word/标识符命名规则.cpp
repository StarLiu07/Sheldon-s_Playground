#include<iostream>
using namespace std;

//标识符命名规则
//1.标识符不可以是关键字
//2.标识符是由字母，数字，下划线构成
//3.标识符第一个字符只能是字母或下划线
//4.标识符区分大小写
int main() {

	//标识符不可以是关键字
	//int int = 10;

	//2.标识符是由字母，数字，下划线构成
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;

	//标识符的第一个字符只能是字母或下划线
	//int 123abc=40;

	//4.标识符区分大小写
	int aaa = 100;
	cout << aaa <<  endl;

	//建议：给变量起名的时候最好能做到见名知意
	int 加数1 = 10;
	int 加数2 = 20;
	int 和 = 加数1 + 加数2;
	cout << 和 << endl;
	//可以用中文

	system("pause");

	return 0;
}