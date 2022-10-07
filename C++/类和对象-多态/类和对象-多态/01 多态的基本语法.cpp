#include<iostream>
using namespace std;

/*多态分为两类
·静态多态:函数重载和运算符重载属于静态多态，复用函数名
动态多态:派生类和虚函数实现运行时多态
静态多态和动态多态区别:
·静态多态的函数地址早绑定–编译阶段确定函数地址
·动态多态的函数地址晚绑定–运行阶段确定函数地址
*/

//动物类
class animal
{
public:
	//虚函数
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class cat : public animal
{
public:
	//重写  函数返回值类型  函数名  参数列表  完全相同
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//狗类
class dog : public animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定  在编译阶段确定函数地址
//如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定

/*动态多态满足条件
1.有继承关系
2.子类重写父类的虚函数
*/

//动态多态使用
//父类的指针或者引用 指向子类对象

void dospeak(animal& animal)
{
	animal.speak();
}

void test01()
{
	cat cat;
	dospeak(cat);

	dog dog;
	dospeak(dog);
}

int main1() {

	test01();

	system("pause");

	return 0;
}