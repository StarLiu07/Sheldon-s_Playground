#include<iostream>
using namespace std;

/*在C++中struct 和 class 唯一的区别就在于默认的访问权限不同
区别：
struct 默认权限为公共
class  默认权限为私有
*/

class c1
{
	int m_a;//默认权限为私有权限
};

struct c2
{
	int m_a;//默认权限为公共权限	
};

int main3() {

	c1 c1;
	//c1.m_a = 1; //在class里默认权限为私有，因此不能访问

	c2 c2;
	c2.m_a = 1;   //在struct里默认权限为公共，因此可以访问

	system("pause");

	return 0;
}