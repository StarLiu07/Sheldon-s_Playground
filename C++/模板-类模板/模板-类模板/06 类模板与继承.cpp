#include<iostream>
using namespace std;

/*当类模板碰到继承时，需要注意一下几点:
·当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
·如果不指定，编译器无法给子类分配内存
·如果想灵活指定出父类中T的类型，子类也需变为类模板 */

template<class T>
class base
{
public:
	T m;
};

//class son : public base //错误，必须要知道父类中的T类型，才能继承给类
class son : public base<int>
{

};

void test10()
{
	son s1;
}

//如果想灵活指定父类中T类型，子类也需要变类模板
template<class T1,class T2>
class son2 : public base<T2>
{
public:
	son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;
		cout << "T2的类型为：" << typeid(T2).name() << endl;
	}

	T1 obj;
};

void test11()
{
	son2<int,char> s2;
}

int main6() {

	system("pause");
	
	return 0;
}