#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//07-全局变量静态变量.c 测试
static g_a = 100;
int g_b = 10;

int * getSpace()
{
    int * p = malloc(sizeof(int) * 5);//在堆区创建了一个有20字节空间大小的int *的数组

    if (p == NULL)
    {
        return NULL;
    }

    for(int i = 0;i < 5;i++)
    {
        p[i] = 100 + i;
    }
    return p;
}

void test01()
{
    int * p = getSpace();

    for(int i = 0;i < 5;i++)
    {
        printf("%d\n",p[i]);
    }

    //释放堆区数据
    free(p);
    p = NULL;//防止p变成野指针，所以让p指向空
}

//堆区注意事项
void allocateSpace(char * pp)//分配空间的函数
{
    char * temp = malloc(100);
    memset(temp,0,100);//这个函数说明要把temp里面的100个字节的数据全部改成0
    strcpy(temp,"hello world");
    pp = temp;
}

void test02()
{
    char * p = NULL;
    allocateSpace(p);
    printf("p = %s\n",p);//打印为 null，因为从始至终都没有动过 p 的地址
}

void allocateSpace2(char ** pp)//分配空间的函数
{
    char * temp = malloc(100);
    memset(temp,0,100);//这个函数说明要把temp里面的100个字节的数据全部改成0
    strcpy(temp,"hello world");
    *pp = temp;
}

void test03()
{
    char * p = NULL;
    allocateSpace2(&p);
    printf("p2 = %s\n",p);
    //想要成功打印hello world就要把指针的地址传入并且用一个高级指针修饰它
}

int main()
{

    test01();
    test02();
    test03();

    return 0;
}