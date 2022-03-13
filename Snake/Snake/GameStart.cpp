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
struct _SNAKE
{
    int x; //横坐标
    int y; //纵坐标
    _SNAKE* next; //指针
};

//Snake* g_pHead = NULL; //头


//初始化蛇
void GameStart::CreateSnake()
{
    _SNAKE* head = nullptr;
    head = new _SNAKE;
    head->x = 20;
    head->y = 15;
    head->next = nullptr;

    _SNAKE* g_pHead = new _SNAKE;
    g_pHead = head;

    for (int i = 1; i < 3; i++)
    {
        _SNAKE* p = new _SNAKE;
        p->x = 20 + 2 * i;
        p->y = 15;
        p->next = nullptr;
        head->next = p;
        head = p;
    }

    //输出
    head = g_pHead;
    while (head = NULL)
    {
        gotoxy(head->x, head->y);
        cout << "■";
        head = head->next;
        
    }

    //Snake * temp = (Snake*)malloc(sizeof(Snake));
    //temp->x = 20;
    //temp->y = 15;
    //temp->next = NULL;
    //g_pHead = temp;

    //for (int i = 1; i < 3; i++)
    //{
    //    Snake* p = (Snake*)malloc(sizeof(Snake));
    //    p->x = 20 + 2 * i;
    //    p->y = 15;
    //    p->next = NULL;
    //    temp->next = p; 
    //    temp = p;
    //}
    ////输出
    //temp = g_pHead;
    //while (temp = NULL);
    //{
    //    gotoxy(temp->x, temp->y);
    //    cout << "■";
    //    temp = temp->next;
    //}
}

//void GameStart::CreateSnake()
//{
//    const int n = 15;//初始化蛇的长度
//    int arr[n] = { 1,1,1,1};
//    gotoxy(28, 15);
//
//    for (int i = 0; i < sizeof(arr); i++)
//    {
//        if (arr[i] == 1)
//        {
//            cout << "■";
//        }
//    }
//
//    
//}

//移动蛇
void GameStart::MoveSnake()
{
    
}

//运行游戏
void GameStart::RunGame()
{
    while (1)
    {
        //判断有没有输入
        if (_kbhit())
        {
            //获取输入
            //char ch = getch();
            //switch (ch)
            //{
            //    //控制方向
            //}
            
        }

        //移动蛇
        MoveSnake();
    }
}