#include "GameStart.h"

//开始游戏
void GameStart::StartGame()
{
    system("mode con cols=100 lines=32");

    cout << "\n\n\n\n";
    cout << "\t\t\t=================================================" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t欢迎来到贪吃蛇\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=\t\t\t\t\t\t=" << endl;
    cout << "\t\t\t=================================================" << endl;

    //暂停
    system("pause");
    system("cls");
}

void GameStart::gotoxy(int x, int y)//自己定义一个gotoxy，将光标跳到x列y行 
{
    COORD c;     //定义一个光标类
    c.X = x - 1; //设置这个光标的位置
    c.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);   //调用WindowsAPI来设置光标位置
}

/*
* 链表
* 由许许多多的节点组成
* 节点由数据域和指针组成
*/

//创建蛇
//单个节点
//typedef struct _SNAKE
//{
//    int x;
//    int y;
//    struct _SNAKE* next;
//}Snake;
//
//Snake* g_pHead = NULL; //头
//
////初始化蛇
//void GameStart::CreateSnake()
//{
//    Snake * temp = (Snake*)malloc(sizeof(Snake));
//    temp->x = 20;
//    temp->y = 15;
//    temp->next = NULL;
//    g_pHead = temp;
//
//    for (int i = 1; i < 3; i++)
//    {
//        Snake* p = (Snake*)malloc(sizeof(Snake));
//        p->x = 20 + 2 * i;
//        p->y = 15;
//        p->next = NULL;
//        temp->next = p; 
//        temp = p;
//    }
//    //输出
//    temp = g_pHead;
//    while (temp = NULL);
//    {
//        gotoxy(temp->x, temp->y);
//        cout << "■";
//        temp = temp->next;
//    }
//}

void GameStart::CreateSnake()
{
    int n = 4;//初始化蛇的长度
    int arr[4] = { 0,0,0,0 };
    gotoxy(28, 15);

    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] == 0)
        {
            cout << "■";
        }
    }

    
}