#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<map>
#include<string>

//void myprint(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "keyֵ��" << (*it).first << " ֵ��" << (*it).second << endl;
//	}
//	cout << endl;
//}
//map�����Ĺ����븳ֵ
//int main()
//{
//	map<int,int> m1;
//	m1.insert(pair<int, int>(1, 10));//��������
//	m1.insert(pair<int, int>(3, 20));
//	m1.insert(pair<int, int>(2, 30));
//	m1.insert(pair<int, int>(4, 20));
//	myprint(m1);
//	map<int, int> m2(m1);
//	myprint(m2);
//
//	map<int, int> m3=m1;
//	myprint(m3);
//	return 0;
//}

//map�Ĵ�С�뽻��
//int main()
//{
//	map<int, int> m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 10));
//	m1.insert(pair<int, int>(3, 10));
//	m1.insert(pair<int, int>(4, 10));
//
//	if (m1.empty())
//	{
//		cout << "Ϊ��" << endl;
//	}
//	else
//	{
//		cout << m1.size() << endl;
//	}
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(1, 20));
//	m2.insert(pair<int, int>(2, 20));
//	m2.insert(pair<int, int>(3, 20));
//	m1.swap(m2);
//	myprint(m1);
//	return 0;
//}

//map�����ɾ��
//int main()
//{
//	map<int, int> m1;
//	//��һ��
//	m1.insert(make_pair(1, 10));
//	//�ڶ���
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(make_pair(3, 30));
//	//������
//	m1.insert(map<int, int>::value_type(4, 40));
//	//������(�����飩:��������key���ʵ�value���������������ʱ�����Զ�����һ������
//	m1[5] = 50;
//	myprint(m1);
//
//	m1.erase(m1.begin());
//	myprint(m1);
//
//	m1.erase(5);
//	myprint(m1);
//	return 0;
//}


//map�����÷º����Ӵ�С����
//class mycompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//int main()
//{
//	map<int, int,mycompare> m1;
//	m1.insert(make_pair(1, 10));
//	m1.insert(make_pair(2, 20));
//	m1.insert(make_pair(3, 30));
//	m1.insert(make_pair(4, 40));
//
//	for (map<int, int, mycompare>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	return 0;
//}


//�Զ���������������
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	int m_height;
//	Person(string name, int age, int height)
//	{
//		m_name = name;
//		m_age = age;
//		m_height = height;
//	}
//
//};
//
//class mycompare
//{
//public:
//	bool operator()(const int &a1, const int& a2)
//	{
//		return a1 < a2;
//	}
//};
//
//int main()
//{
//	map<int, Person,mycompare>m1;
//	Person p1("����", 18, 175);
//	Person p2("����", 16, 175);
//	Person p3("����", 19, 180);
//	Person p4("����", 17, 170);
//	m1.insert(make_pair(2, p1));
//	m1.insert(make_pair(1, p2)); 
//	m1.insert(make_pair(4, p3));
//	m1.insert(make_pair(3, p4));
//
//	for (map<int, Person,mycompare>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << "key:" << it->first << " ������" << it->second.m_name
//			<< " ���䣺" << it->second.m_age
//			<< " ��ߣ�" << it->second.m_height << endl;
//	}
//	return 0;
//}


//����
//��˾��Ƹ10��Ա����ABCDEFGHIJ����10��Ա�����빫˾����Ҫָ��Ա�����ĸ����Ź�����
//Ա����Ϣ�У�������������ɣ������У��߻����������з�
//�����10��Ա�����䲿�ź͹���
//ͨ��mulimap������Ϣ�Ĳ��룬key�����ű�ţ�value(Ա����
//�ֲ�����ʾԱ����Ϣ

//1������10��Ա��������vector��
//2������vector������ȡ��ÿ��Ա���������������
//3������󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽mulitmap��
//4���ݲ�����ʾԱ����Ϣ
#include<vector>
#include<ctime>

class Person
{
public:
	char m_name;
	int m_gz;
	Person(char name, int gz)
	{
		m_name = name;
		m_gz = gz;
	}
};
class Mycompare
{
public:
	bool operator()(const int &v1, const int &v2)
	{
		return v1 > v2;
	}
};

int main()
{
	//1��
	srand((unsigned int)time(NULL));
	vector<Person> v1;
	multimap<int, Person,Mycompare>m1;
	for (int i = 0; i < 10; i++)
	{
		Person p('A' + i, 10000 - 100 * i);
		v1.push_back(p);
	}

	//2��
	for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		/*cout << "������" << it->m_name << " ���ʣ�" << it->m_gz << endl;*/
		int key=rand() % 3 + 1;//���ֵ1-3��
		m1.insert(make_pair(key, *it));
	}

	for (multimap<int, Person, Mycompare>::iterator itbegin = m1.begin(); itbegin != m1.end(); itbegin++)
	{
		switch (itbegin->first)
		{
		case 1:
		{
			cout << "���ţ�" << " �߻�" << " ������" << itbegin->second.m_name
				<< " ���ʣ�" << itbegin->second.m_gz << endl;
			break;
		}
		case 2:
		{
			cout << "���ţ�" << " ����" << " ������" << itbegin->second.m_name
				<< " ���ʣ�" << itbegin->second.m_gz << endl;
			break;
		}
		case 3:
		{
			cout << "���ţ�" << " �з�" << " ������" << itbegin->second.m_name
				<< " ���ʣ�" << itbegin->second.m_gz << endl;
			break;
		}
		 
	}
	return 0;
}