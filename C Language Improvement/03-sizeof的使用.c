#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//1.sizeof本质不是一个函数而是一个运算符
void test01()
{
    printf("sizeof int = %d\n",sizeof(int));

    //对于统计变量的时候可以不加小括号
    double d = 3.14;
    printf("sizeof d = %d\n",sizeof d);
}

//2.sizeof返回一个  无符号整型(unsigned int)
void test02()
{
    // unsigned int a = 10;
    // if(a - 20 > 0) //如果一个unsigned int 与一个 int进行运算，那么结果会统一转换为 unsigned int
    // {
    //     printf("大于0\n");
    // }
    // else
    // {
    //     printf("小于0\n");
    // }

    if(sizeof(int) - 5 > 0)
    {
        printf("大于0\n");
        printf("%u\n",sizeof(int) - 5);
    }
    else
    {
        printf("小于0\n");
    }
    //输出结果为 大于0  由此可得sizeof的返回值为 unsigned int
}

//3.sizeof其他用法
//统计数组占空间大小
//如果数组名传入到一个形参中，那么这个数组名就被退化为一个指针，指向数组第一个元素的地址
void culcalateArray(int arr[])
{
    printf("culcalateArray size of arr = %d\n",sizeof(arr));
}
void test03()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    printf("size of arr = %d\n",sizeof(arr));//输出结果为32   4*8

    culcalateArray(arr);
}

int main()
{
    //test01();
    //test02();
    test03();
    return 0;
}