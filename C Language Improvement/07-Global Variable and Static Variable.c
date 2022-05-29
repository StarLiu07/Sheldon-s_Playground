#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//静态变量
//程序运行前分配内存
//生命周期在程序运行结束死亡
//默认属于内部链接属性，在当前文件中使用，除非包含了头文件
//全局作用域
static int a = 10;

void test01()
{
    static int b = 20;//局部作用域  b只能在test01中使用
}

//全局变量
//默认在C语言下，全局变量前加了关键字 extern
//属于外部连接属性
int c = 30;

int main()
{
    //g_a = 10; 找不到

    // extern int g_b;
    // g_b = 100; //在06-堆区及注意事项.c中创建了一个全局变量 此文件依然可用，不过最好加上上面那句
    // printf("%d\n",g_b);
    // printf("%d\n",c);
    printf("%s\n","hello world");
    //system("pause");
    return 0;
}