#define _CRT_SECURE_NO_WARNINGS 1
#include"gongneng.h"

void init_txl(TXL * ps)
{
	ps->size = 0;
}

void addpeople(TXL * ps)
{
	if (ps->size == MAX)
	{
		cout << "通讯录已满！！" << endl;
		return;
	}
	cout << "输入添加姓名：" << endl;
	cin >> ps->txl[ps->size].name;
	cout << "输入添加人员性别：" << endl;
	cin >> ps->txl[ps->size].sex;
	cout << "输入添加人员年龄：" << endl;
	cin >> ps->txl[ps->size].age;
	cout << "输入添加人员联系电话：" << endl;
	cin >> ps->txl[ps->size].phone;
	cout << "输入添加人员家庭住址：" << endl;
	cin >> ps->txl[ps->size].adder;
	ps->size++;
	cout << "添加成功！" << endl;
}

void printpeo(const TXL * ps)
{
	if (ps->size == 0)
	{
		cout << "空通讯录！！请添加！" << endl;
		return;
	}
	cout << "姓名:\t" << "性别:\t" << "年龄:\t" << "联系电话:\t" << "家庭住址:" << endl;
	for (int i = 0; i < ps->size; i++)
	{
		cout << ps->txl[i].name<<"\t"<< ps->txl[i].sex << "\t" << ps->txl[i].age 
			<< "\t" << ps->txl[i].phone << "\t\t" << ps->txl[i].adder << endl;
	}
}


void ddele(TXL * ps, string n)
{
	assert(ps != NULL);
	if (ps->size == 0)
	{
		cout << "空通讯录！" << endl;
	}
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->txl[i].name == n)
		{
			for (int j = i+1; j < ps->size; j++)
			{
				ps->txl[j-1] = ps->txl[j];
			}
			cout << "删除成功！" << endl;
			break;
		}
	}
	ps->size--;

}


void myfindh(TXL * ps, string n)
{
	assert(ps != NULL);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->txl[i].name == n)
		{
			cout << "姓名:\t" << "性别:\t" << "年龄:\t" << "联系电话:\t" << "家庭住址:" << endl;
			cout << ps->txl[i].name << "\t" << ps->txl[i].sex << "\t" << ps->txl[i].age
				<< "\t" << ps->txl[i].phone << "\t\t" << ps->txl[i].adder << endl;
			return;
		}
	}
	cout << "未查到该人员信息！" << endl;
}

void xiugai(TXL * ps, string n)
{
	assert(ps != NULL);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->txl[i].name == n)
		{
			cout << "修改后性别：" << endl;
			cin >> ps->txl[i].sex;
			cout << "修改后年龄：" << endl;
			cin >> ps->txl[i].age;
			cout << "修改后联系电话：" << endl;
			cin >> ps->txl[i].phone;
			cout << "修改后家庭住址：" << endl;
			cin >> ps->txl[i].adder;
			cout << "修改成功！！" << endl;
			return;
		}
	}
	cout << "查无此人!!" << endl;
}

void qingkong(TXL * ps)
{
	ps->size = 0;
	cout << "通讯录已清空！！" << endl;
}