#include<iostream>
using namespace std;

//switch语句作用：执行多条件分支语句

int main() {

	//switch语句
	//给电影进行打分
	//10~9 经典
	//8~7 非常好
	//6~5 一般
	//5一下 烂片

	//1.提示用户给电影评分
	cout << "请给用户进行打分" << endl;
	//2.用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	//根据用户输入的分数来提示用户最后的结果

	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7 :
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为电影一般" << endl;
		break;
	case 5 :
		cout << "您认为电影一般" << endl;
	default :
		cout << "您认为电影是烂片" << endl;

	}

	//if...else 和 switch 区别
	//switch缺点，判断是只能是整型或字符型，不可以是一个区间
	//switch优点，结构清晰，执行效率高

	system("pause");

	return 0;
}