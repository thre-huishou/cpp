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
		cout << "ͨѶ¼��������" << endl;
		return;
	}
	cout << "�������������" << endl;
	cin >> ps->txl[ps->size].name;
	cout << "���������Ա�Ա�" << endl;
	cin >> ps->txl[ps->size].sex;
	cout << "���������Ա���䣺" << endl;
	cin >> ps->txl[ps->size].age;
	cout << "���������Ա��ϵ�绰��" << endl;
	cin >> ps->txl[ps->size].phone;
	cout << "���������Ա��ͥסַ��" << endl;
	cin >> ps->txl[ps->size].adder;
	ps->size++;
	cout << "��ӳɹ���" << endl;
}

void printpeo(const TXL * ps)
{
	if (ps->size == 0)
	{
		cout << "��ͨѶ¼��������ӣ�" << endl;
		return;
	}
	cout << "����:\t" << "�Ա�:\t" << "����:\t" << "��ϵ�绰:\t" << "��ͥסַ:" << endl;
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
		cout << "��ͨѶ¼��" << endl;
	}
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->txl[i].name == n)
		{
			for (int j = i+1; j < ps->size; j++)
			{
				ps->txl[j-1] = ps->txl[j];
			}
			cout << "ɾ���ɹ���" << endl;
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
			cout << "����:\t" << "�Ա�:\t" << "����:\t" << "��ϵ�绰:\t" << "��ͥסַ:" << endl;
			cout << ps->txl[i].name << "\t" << ps->txl[i].sex << "\t" << ps->txl[i].age
				<< "\t" << ps->txl[i].phone << "\t\t" << ps->txl[i].adder << endl;
			return;
		}
	}
	cout << "δ�鵽����Ա��Ϣ��" << endl;
}

void xiugai(TXL * ps, string n)
{
	assert(ps != NULL);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->txl[i].name == n)
		{
			cout << "�޸ĺ��Ա�" << endl;
			cin >> ps->txl[i].sex;
			cout << "�޸ĺ����䣺" << endl;
			cin >> ps->txl[i].age;
			cout << "�޸ĺ���ϵ�绰��" << endl;
			cin >> ps->txl[i].phone;
			cout << "�޸ĺ��ͥסַ��" << endl;
			cin >> ps->txl[i].adder;
			cout << "�޸ĳɹ�����" << endl;
			return;
		}
	}
	cout << "���޴���!!" << endl;
}

void qingkong(TXL * ps)
{
	ps->size = 0;
	cout << "ͨѶ¼����գ���" << endl;
}