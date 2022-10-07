#include <iostream>
using namespace std;
#include<stdio.h>
#include <windows.h>

int main() {

	int select = 0;//记录选择
	cout << "1.单独轰炸" << endl;
	cout << "2.群体轰炸" << endl;
	cout << "3.退出" << endl;

	cin >> select;

	if (select == 1)
	{
		//单独轰炸

		char name[30] = {0}; //记录轰炸对象的名称
		int times = 0; //记录轰炸的次数


		cout << "请输入您要轰炸的对象" << endl;
		cin >> name;
		cout << "请输入您要轰炸的次数" << endl;
		cin >> times;

		//窗口句柄
		//窗口的ID
		HWND qqhwnd;  //定义一个变量 存放一个窗口的ID

		//在桌面上寻找窗口
		qqhwnd = FindWindowA(NULL,name);

		//发送消息
		//向某一个窗口发送消息
		for (int i = 0; i < times; i++)
		{
			SendMessage(qqhwnd, WM_PASTE, 0, 0);
			SendMessage(qqhwnd, WM_KEYDOWN, VK_RETURN, 0);
		}


	}
	else if (select == 2)
	{
		//群体轰炸

		HWND qqhwnd;

		while (1)
		{
			//得到QQ主界面的窗口ID
			qqhwnd = FindWindowA(NULL, "QQ");

			//1.选中主界面
			//2.TAB TAB
			//3.不断按回车和下键 打开对话框
			//4.粘贴
			//5.发送
			//6.关闭对话框

			SetForegroundWindow(qqhwnd); //把QQ窗口设置为最前

			keybd_event(VK_TAB, 0, 0, 0); //按下TAB键
			Sleep(70);
			keybd_event(VK_TAB, 0, 2, 0); //弹起TAB键
			Sleep(70);

			keybd_event(VK_TAB, 0, 0, 0); //按下TAB键
			Sleep(70);
			keybd_event(VK_TAB, 0, 2, 0); //弹起TAB键
			Sleep(70);

			while (1)
			{
				keybd_event(VK_RETURN, 0, 0, 0); //按下TAB键
				Sleep(70);
				keybd_event(VK_RETURN, 0, 2, 0); //弹起TAB键
				Sleep(70);

				keybd_event(VK_DOWN, 0, 0, 0); //按下TAB键
				Sleep(70);
				keybd_event(VK_DOWN, 0, 2, 0); //弹起TAB键
				Sleep(70);

				if (qqhwnd != GetForegroundWindow())
				{
					break;
				}
				//
			}

			//粘贴
			keybd_event(VK_CONTROL, 0, 0, 0); //按下TAB键
			Sleep(70);
			keybd_event('V', 0, 0, 0); //弹起TAB键
			Sleep(70);

			keybd_event('V', 0, 2, 0); //按下TAB键
			Sleep(70);
			keybd_event(VK_CONTROL, 0, 2, 0); //弹起TAB键
			Sleep(70);

			//发送
			keybd_event(VK_RETURN, 0, 0, 0); //按下TAB键 
			Sleep(70);
			keybd_event(VK_RETURN, 0, 2, 0); //弹起TAB键
			Sleep(70);

			//关闭对话框
			keybd_event(VK_ESCAPE, 0, 0, 0); //按下TAB键
			Sleep(70);
			keybd_event(VK_ESCAPE, 0, 2, 0); //弹起TAB键
			Sleep(70);


			//MoveWindow(qqhwnd, 0, 0, 800, 800, true);

			
		}

		
	}		
	else
	{
		
	}

	system("pause");

	return 0;
}