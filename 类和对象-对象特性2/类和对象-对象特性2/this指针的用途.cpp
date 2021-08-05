#include<iostream>
using namespace std;

//this指针指向被调用的成员函数所属的对象
/*this指针时隐含每一个非静态成员函数内的一种指针
this指针不需要定义，直接使用即可*/

/*this指针用途：
1.当形参和成员变量同名时，可用this指针来区分
2.在类的非静态成员函数中返回对象本身，可使用return*this
*/

class person2
{
public:

	person2(int age)
	{
		//this指针指向被调用的成员函数所属的对象
		this->age = age;
	}

	//不加&返回局部变量则编译器会进行拷贝创建p2'并返回，所以返回的并不是p2
	person2& personadd(person2& p)
	{
		this->age += p.age;

		//this指向的是p2
		return *this;
	}

	int age;
};

//1.解决名称冲突
void exam3()
{
	person2 p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}

//返回对象本身用*this
void exam4()
{
	person2 p2(10);

	person2 p3(10);

	//链式编程思想
	p2.personadd(p3).personadd(p3).personadd(p3);

	cout << "p2的年龄为：" << p2.age << endl;
}

int main5() {

	//exam3();
	exam4();

	system("pause");

	return 0;
}