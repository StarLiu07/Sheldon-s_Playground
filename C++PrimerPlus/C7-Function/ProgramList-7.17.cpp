//用递归来画一把尺子
#include <iostream>
using namespace std;

const int Len = 66; //打印出来的标尺一共有65个 | 还有一个是\0占位符
const int Divs = 6;

void subdivide(char ar[],int low,int high,int level);

int main()
{
    char ruler[Len];
    for(int i = 1; i < Len - 2; i++)
        ruler[i] = ' '; //把第 0 ~ 64 个元素全都设置成 ' ',剩下一个占位符
    ruler[Len - 1] = '\0';
    int max = Len - 2;
    int min = 0;
    ruler[min] = ruler[max] = '|'; //将一头一尾设置成 | 
    cout << ruler << endl;
    for(int i = 1;i <= Divs;i++) //标尺有7层
    {
        subdivide(ruler,min,max,i);
        cout << ruler << endl;
        for(int j = 1;j < Len - 2;j++)
            ruler[j] = ' '; //重置为空白标尺
    }

    return 0;
}

void subdivide(char ar[],int low,int high,int level)
{
    if(level == 0)
        return;
    int mid = (high + low) / 2;
    ar[mid] = '|';
    subdivide(ar,low,mid,level - 1);
    subdivide(ar,mid,high,level - 1);
}