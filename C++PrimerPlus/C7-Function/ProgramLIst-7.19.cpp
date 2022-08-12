#include <iostream>
using namespace std;

//下面的三个函数原型虽然参数列表看上去不一样，但是所表示的意思却是一样的
const double* f1(const double ar[],int n);
const double* f2(const double [],int);
const double* f3(const double*,int);

int main()
{
    double av[3] = {1112.3,1542.6,2227.9};

    //一个函数指针
    const double* (*p1)(const double*,int) = f1;
    auto p2 = f2; //auto能够自动识别类型，其等价于  const double* (*p2)(const double [],int) = f2;
    cout << "使用函数指针：" << endl;
    cout << " 地址" << endl;
    cout << (*p1)(av,3) << "：" << *(*p1)(av,3) << endl;
    cout << p2(av,3) << "：" << *p2(av,3) << endl;
    //18、19行的输出语句前面是一个double值的地址，而后面对应这个地址的实际值

    //pa是一个指针数组
    //auto不能用来初始化列表
    const double* (*pa[3])(const double *,int) = {f1,f2,f3};
    //但是auto对于初始化单个值是有效的
    //pb指向pa的第一个元素
    auto pb = pa; //其等价于 const double* (**pb)(const double *,int) = pa
    cout << "用指向函数的指针数组：" << endl;
    cout << " 地址：" << endl;
    for(int i = 0;i < 3;i++)
        cout << pa[i](av,3) << "：" << *pa[i](av,3) <<endl;
    cout << "使用指向函数指针的指针" << endl;
    cout << " 地址：" << endl;
    for(int i = 0;i < 3;i++)
        cout << pb[i](av,3) << "：" << *pb[i](av,3) << endl;
    cout << "使用指向指针数组的指针" << endl;
    cout << " 地址" << endl;
    //使用简单的方式申明 pc
    auto pc = &pa; //其等价于 const double* (*(*pc)[3])(const double *,int) = &pa
    cout << (*pc)[0](av,3)  << "：" << *(*pc)[0](av,3) << endl;
    //较复杂的方式申明 pd
    const double *(*(*pd)[3])(const double *,int) = &pa;
    //在pdb中储存返回值
    const double* pdb = (*pd)[1](av,3);
    //替代符号
    cout << (*(*pd)[2])(av,3) << "：" << *(*(*pd)[2])(av,3) << endl;
    //cin.get();

    return 0;
}

const double* f1(const double ar[],int n)
{
    return ar;
}

const double* f2(const double ar[],int n)
{
    return ar + 1;
}

const double* f3(const double ar[],int n)
{
    return ar + 2;
}