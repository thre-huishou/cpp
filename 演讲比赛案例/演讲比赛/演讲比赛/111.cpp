#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"Parter.h"

//��������ѧУ�ٰ�һ���ݽ�����������12���˲μӣ����������֣���һ��Ϊ��̭�����ڶ���Ϊ����
//ÿ��ѡ�ֶ��ж�Ӧ�ı�ţ���10001-10012��
//������ʽ�����������ÿ��6��
//��һ�ַ�Ϊ����С�飬���尴��ѡ�ֱ�Ž��г�ǩ˳���ݽ�
//ʮ����ί�ֱ��ÿ��ѡ�ִ�֣�ȥ����߷�����ͷ֣����ƽ����Ϊ���������ֵĳɼ�
//��С���ݽ������̭����������������ѡ�֣�ǰ����������������һ�ֵı���
//�ڶ���Ϊ������ǰ����ʤ��
//ÿ�ֱ���������Ҫ��ʾ����ѡ�ֵ���Ϣ

int main()
{
	srand((unsigned int)time(NULL));
//1������12��������Ա
	vector<Person> v1;
	set_Parter(v1);
	//myprint(v1);
	//2��������ѡ�ַ�Ϊ����V1��v2
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
	//3���ֱ������ѡ�ִ��
	getscore(v2);
	getscore(v3);
	//4����ʾ����
	cout << "��һ�ֱ��������" << endl;
	cout << "A��÷֣�" << endl;
	print_score(v2);
	cal_score(v2);
	cout << "------------------------" << endl;
	cout << "B��÷֣�" << endl;
	print_score(v3);
	cal_score(v3);
	cout << "A��������" << endl;
	myprint(v2);
	cout << "B��������" << endl;
	myprint(v3);

	//������
	vector<Person>v4;
	v4.resize(6);
	merge(v2.begin(), v2.end()-3, v3.begin(), v3.end()-3, v4.begin(),GG());
	sort(v4.begin(), v4.end(), Greater());
	cout << "����������" << endl;
	myprint(v4);

	return 0;
}

