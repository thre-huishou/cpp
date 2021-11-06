#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<memory>
#include<assert.h>
using namespace std;
#define MAX 1000

enum gongneng
{
	add=1,
	print,
	dele,
	myfind,
	revise,
	clc,
	myexit=0
};

struct People
{
	string name;
	string sex;
	int age;
	string phone;
	string adder;
};

struct TXL
{
	struct People txl[MAX];
	int size;
};


//初始化
void init_txl(TXL * ps);
//功能函数声明
//添加联系人
void addpeople(TXL * ps);
//显示联系人
void printpeo(const TXL * ps);
//删除联系人
void ddele(TXL * ps, string n);
//查找联系人
void myfindh(TXL * ps, string n);
//修改联系人
void xiugai(TXL * ps, string n);
//清空联系人
void qingkong(TXL * ps);
//退出通讯录
