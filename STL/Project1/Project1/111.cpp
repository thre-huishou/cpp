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
//class Person
//{
//public:
//	Person(string name, int age) :m_name(name), m_age(age)
//	{
//
//	}
//
//	string m_name;
//	int m_age;
//};
//ostream& operator<<(ostream &cout, Person p)
//{
//	cout << "������" << p.m_name << " ����:" << p.m_age << endl;
//	return cout;
//}
//
//void printperson(Person &p)
//{
//	cout << "������" << p.m_name << " ����:" << p.m_age << endl;
//}
//
//int main()
//{
//	vector<Person> v;
//	Person p1("����",18);
//	v.push_back(p1);
//	Person p2("����", 19);
//	v.push_back(p2);
//	Person p3("����", 20);
//	v.push_back(p3);
//	Person p4("����", 21);
//	v.push_back(p4);
//
//	//��һ�ֱ���
//	vector<Person>::iterator itbegin = v.begin();
//	vector<Person>::iterator itend = v.end();
//	while (itbegin != itend)
//	{
//		cout << *itbegin << endl;
//		itbegin++;
//	}
//
//	//�ڶ��ֱ���
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	//��3�б���
//	/*for_each(v.begin(), v.end(), printperson);*/
//	return 0;
//}


//vector������Ƕ��vector����

int main()
{
	vector<vector<int>> v;
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	v1.push_back(1);
	vector<int> v2;
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	v2.push_back(2);
	vector<int> v3;
	v3.push_back(3);
	v3.push_back(3);
	v3.push_back(3);
	v3.push_back(3);
	vector<int> v4;
	v4.push_back(4);
	v4.push_back(4);
	v4.push_back(4);
	v4.push_back(4);

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);


	vector<vector<int>>::iterator vbegin = v.begin();
	vector<vector<int>>::iterator vend = v.end();
	while (vbegin != vend)
	{
		vector<int>::iterator vvbegin = (*vbegin).begin();
		vector<int>::iterator vvend = (*vbegin).end();
		while (vvbegin != vvend)
		{
			cout << *vvbegin;
			vvbegin++;
		}
		cout << endl;
		vbegin++;
	}
	return 0;
}