#include<iostream>
using namespace std;

//作用：用于根据表达式的值返回真值或假值
/*
* !:非  &&:与  ||:或
*/

int maincc() {

	//非:!
	//在C++中除了0都为真（True）
	int a = 10;
	cout << !a << endl;
	cout << !!a << endl;

	//真变假，假变真

	system("pause");

	return 0;
}