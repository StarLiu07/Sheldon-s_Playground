#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>

int map[8][6] = {
	0,1,1,1,1,0,
	1,1,0,0,1,0,
	1,4,2,0,1,0,
	1,1,2,0,1,1,
	1,1,0,2,0,1,
	1,3,2,0,0,1,
	1,3,3,5,3,1,
	1,1,1,1,1,1,
};

int main() {

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			switch (map[i][j])
			{
			case0:
				cout << " " << endl;
				break;
			case1:
				cout << "■";
				break;
			case2:
				cout << "□";
				break;
			case3:
				cout << "☆";
				break;
			case4:
				cout << "♀";
				break;
			case5:
				cout << "★";
				break;
			case7:
				cout << "♀";
				break;
			}
		}
		cout << endl;
	}

	//时刻找到人的位置
	int r = 0;
	int c = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (map[i][j] == 4)
			{
				r = i;
				j = c;
			}
		}
	}
	cout << r << c << endl;

	system("pause");
	return 0;
}