#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//��̬��Ա����
//���ж���ͬ��ͬһ����̬��Ա����
//��̬��Ա�������ܷ��ʾ�̬��Ա����
//class Person
//{
//public:
//	static void func()
//	{
//		a = 100;//��̬��Ա�������Է��ʣ���̬��Ա����
//		//b = 200;//��̬��Ա���������Է��ʾ�̬��Ա����,��Ϊ��̬����ֻ��һ�ݣ�������֪���ı��ĸ������ĵĳ�Ա����
//		cout << "��̬��Ա��������" << endl;
//	}
//	static int a;
//	int b;
//};
//
//
//int main()
//{
//	int Person::a = 0;
//	Person p1;
//	p1.a = 10;
//
//	//ͨ��������з���
//	p1.func();
//
//	//ͨ������ ���з���
//	Person::func();
//
//	cout << p1.a << endl;
//	return 0;
//}

//����ģ�ͺ�thisָ��

//class Person
//{
//public:
//	Person()
//	{
//		m_a = 0;
//	}
//	char m_c;
//	int m_a;
//	char m_d;
//	static int m_b;
//	void func()
//	{
//		cout << m_b << endl;
//	}
//};
//
//int main()
//{
//	int Person::m_b = 0;//��������������Ҫ��ʼ��
//	Person p1;
//	cout << sizeof(p1) << endl;
//	return 0;
//}

//thisָ��
//class Person
//{
//public:
//	Person(int m_age)
//	{
//		this->m_age = m_age;//thisָ��ָ����ú����Ķ���
//	}
//	Person& addage(Person & p)
//	{
//		this->m_age += p.m_age;
//		return *this;
//	}
//
//	int m_age;
//};
////1 ������Ƴ�ͻ
//int main()
//{
//	Person p1(18);
//	Person p2(12);
//	p2.addage(p1).addage(p1);
//	cout << p2.m_age << endl;
//	return 0;
//}
////2 ���ض�����


//��ָ����ó�Ա����
//class Person
//{
//public:
//	void showPerson()
//	{
//		cout << "this is a person class" << endl;
//	}
//	void showage()
//	{
//		if (this == NULL)//��ֹ��ָ�룬���ӳ���Ľ�׳��
//		{
//			return;
//		}
//		cout << "age=" << age << endl;//���õ�ʱ��һ����this->age,����ǰthis�ǿ�ָ�� 
//	}
//
//	int age;
//};
// 
//int main()
//{
//	Person *p = NULL;
//	p->showPerson();
//	p->showage();
//	return 0;
//}


//const ���γ�Ա����
//class Person
//{
//public:
//	void showperson() const//����const�������Է��ʳ�Ա����,�����ڸ�this����const
//	{
//		age = 10;
//	}
//	void func()
//	{
//		m_a = 100;
//	}
//
//	mutable int age;//����mutable�󣬳�����Ҳ���Է��ʸó�Ա���� 
//	int m_a;
// };
//
//int main()
//{
//	const Person p;//������
//	p.m_a = 1;//�����󲻿����޸ĳ�Ա����
//	p.age = 1;
//	p.showperson();//������ֻ�ܵ��ó�����,�����Ե�����ͨ��������Ϊ��ͨ���������޸ĳ�Ա����
//	p.func();
//	return 0;
//}

