#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include"arr.hpp"
//ʵ��һ��ͨ�õ������࣬Ҫ�����£�
//1������ʵ�ֶ��������������Լ��Զ����������͵����ݽ��д洢
//2���������е����ݴ洢������
//3�����캯���й����Դ������������
//4���ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ�������Ⱥ���������أ�
//5���ṩβ�巨��βɾ���������й������ݽ������Ӻ�ɾ��
//6������ͨ���±�ķ�ʽ���������е�Ԫ��
//7�����Ի�ȡ�����е�ǰԪ�صĸ��������������
//
//void print(Arr<int> &a1)
//{
//	for (int i = 0; i < a1.getSize(); i++)
//	{
//		cout << a1[i] << endl;
//	}
//}

//int main()
//{
//	Arr<int> a1(5);
//	for (int i = 0; i < 5; i++)
//	{
//		a1.Pushback(i);
//	}
//	cout << "a1�Ĵ�ӡ�����" << endl;
//	print(a1);
//	return 0;
//}

//�����Զ�����������
class Person
{
public:
	int m_age;
	string m_name;
	Person()
	{

	}
	Person(string name, int age)
	{
		m_name = name;
		m_age = age;
	}
};

void printperson(Arr<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i].m_name << " " << arr[i].m_age << endl;
	}
}

int main()
{
	Arr<Person> arr(10);
	Person p1("�����",999);
	Person p2("����", 20);
	Person p3("槼�", 25);
	Person p4("����", 30);
	Person p5("����", 35);
	arr.Pushback(p1);
	arr.Pushback(p2);
	arr.Pushback(p3);
	arr.Pushback(p4);
	arr.Pushback(p5);

	printperson(arr);
	return 0;
}