#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;


//vector����
#include<vector>
#include<algorithm>


//void myprint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//������һ��vector����������
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//ͨ�����������������е�����
//	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ�������еĵ�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();//������������ָ�������е����һ��Ԫ�ص���һ��Ԫ��
//
//	//��һ�ֱ�����ʽ
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin++ << endl;
//	}
//
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//�����ֱ���,liyong stl�ṩ�ı����㷨
//	for_each(v.begin(), v.end(), myprint);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//vector����Զ�����������
class Person
{
public:
	Person(string name, int age) :m_name(name), m_age(age)
	{

	}

	string m_name;
	int m_age;
};
ostream& operator<<(ostream &cout, Person p)
{
	cout << "������" << p.m_name << " ����:" << p.m_age << endl;
	return cout;
}

void printperson(Person &p)
{
	cout << "������" << p.m_name << " ����:" << p.m_age << endl;
}

int main()
{
	vector<Person> v;
	Person p1("����",18);
	v.push_back(p1);
	Person p2("����", 19);
	v.push_back(p2);
	Person p3("����", 20);
	v.push_back(p3);
	Person p4("����", 21);
	v.push_back(p4);

	//��һ�ֱ���
	vector<Person>::iterator itbegin = v.begin();
	vector<Person>::iterator itend = v.end();
	while (itbegin != itend)
	{
		cout << *itbegin << endl;
		itbegin++;
	}

	//�ڶ��ֱ���
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	//��3�б���
	/*for_each(v.begin(), v.end(), printperson);*/
	return 0;
}