#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"Parter.h"

//比赛规则：学校举办一场演讲比赛，共有12个人参加，比赛共两轮，第一轮为淘汰赛，第二轮为决赛
//每名选手都有对应的编号，如10001-10012；
//比赛方式：分组比赛，每组6人
//第一轮分为两个小组，整体按照选手编号进行抽签顺序演讲
//十个评委分别给每个选手打分，去除最高分与最低分，求的平均分为本轮徐拿手的成绩
//当小组演讲完后，淘汰组内排名最后的三个选手，前三名晋级，进入下一轮的比赛
//第二轮为决赛，前三名胜出
//每轮比赛过后需要显示晋级选手的信息

int main()
{
	srand((unsigned int)time(NULL));
//1、建立12个参赛人员
	vector<Person> v1;
	set_Parter(v1);
	//myprint(v1);
	//2、将参赛选手分为两组V1、v2
	vector<Person> v2, v3;
	random_shuffle(v1.begin(), v1.end());
	//myprint(v1);
	v2.resize(6);
	v3.resize(6);
	copy(v1.begin(), v1.begin() + 6, v2.begin());
	copy(v1.begin()+6, v1.end(), v3.begin());
	//myprint(v2);
	//cout << "----------------------" << endl;
	//myprint(v3);
	//3、分别给两组选手打分
	getscore(v2);
	getscore(v3);
	//4、公示分数
	cout << "第一轮比赛结果：" << endl;
	cout << "A组得分：" << endl;
	print_score(v2);
	cal_score(v2);
	cout << "------------------------" << endl;
	cout << "B组得分：" << endl;
	print_score(v3);
	cal_score(v3);
	cout << "A组排名：" << endl;
	myprint(v2);
	cout << "B组排名：" << endl;
	myprint(v3);

	//晋级：
	vector<Person>v4;
	v4.resize(6);
	merge(v2.begin(), v2.end()-3, v3.begin(), v3.end()-3, v4.begin(),GG());
	sort(v4.begin(), v4.end(), Greater());
	cout << "最终排名：" << endl;
	myprint(v4);

	return 0;
}

