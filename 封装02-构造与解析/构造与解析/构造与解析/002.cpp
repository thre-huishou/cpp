#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//
//	//���캯��
//	Person()
//	{
//		cout << "���캯���ĵ��ã���" << endl;
//	}
//	~Person()
//	{
//		cout << "���������ĵ���" << endl;
//	}
//};
//
//int main()
//{
//	Person p1;
//	return 0;
//}

//���캯���ķ��������

//�в����޲�
//class Person
//{
//public:
//	//�в����޲�
//	Person()
//	{
//		cout << "Person���޲ι��캯���ĵ���" << endl;
//	}
//	Person(int a)
//	{
//		cout << "Person���вι��캯���ĵ���" << endl;
//		age = a;
//	}
//	//��ͨ�뿽��
//	Person(const Person& p)
//	{
//		cout << "Person�Ŀ��������ĵ���" << endl;
//		//��������������е����ԣ�������������
//		age = p.age;
//	}
//	~Person()
//	{
//		cout<< "Person�����������ĵ���" << endl;
//	}
//
//	int age;
//};
//
//int main()
//{
	//���÷�ʽ
	//1\���ŷ�
	//Person p1;
	//Person p2(10);
	//Person p3(p2);
	//cout << p1.age << endl;
	//cout << p2.age << endl;
	//cout << p3.age << endl;

	//2\��ʾ��
	//Person p1;
	//Person p2 = Person(10);//�вι���
	//Person p3 = Person(p2);
	//Person(10);//���������ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << p1.age << endl;
	//cout << p2.age << endl;
	//cout << p3.age << endl;

	//3��ʽת����
	//Person p1 = 10;//�൱��Person p1=Person��10��
	//Person p2 = p1; 
//	//return 0;
//}

//class Person
//{
//public:
//	//Person()
	//{
	//	cout << "Person��Ĭ�Ϲ��캯���ĵ���" << endl;
	//}
	//Person(int a)
	//{
	//	cout << "Person���вι��캯���ĵ���" << endl;
	//	age = a;
	//}
	//Person(const Person& p)
	//{
	//	cout << "Person�Ŀ������캯���ĵ���" << endl;
	//	age = p.age;
	//}
//	~Person()
//	{
//		cout << "Person�����������ĵ���" << endl;
//	}
//
//	int age;
//};

//void dowork(Person p)//�൱�ڿ������캯��
//{
//
//}
//Person dowork2()
//{
//	Person p;
//	return p;
//}
//int main()
//{
	//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
	//Person p1;
	//Person p1(10);
	//Person p2(p1);
	//ֵ���ݵķ�ʽ������������ֵ
	//Person p3;
	//dowork(p3);

	//ֵ��ʽ���ؾֲ�����
	/*Person p4 = dowork2();*/
//	return 0;
//}

//
////�����ǳ����
//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	Person(int a,int height)
//	{
//		cout << "Person�вι��캯������" << endl;
//		m_age = a;
//		m_height = new int(height);
//	}
//	Person(const Person & p)//ǳ����
//	{
//		cout << "Person�������캯������" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);//��������ռ���п��� 
//	}
//	~Person()
//	{
//		//���������ٵ����ݽ����ͷ�
//		if (m_height != NULL)//�ᷢ���ظ��ͷ�
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Person�����������ĵ���" << endl;
//	}
//	int m_age;
//	int * m_height;
//};
//
//int main()
//{
//	Person p1(10,160);
//	cout << p1.m_age << endl;
//	cout << *p1.m_height << endl;
//	Person p2(p1);
//	cout << p2.m_age << endl;
//	cout << *p2.m_height << endl;
//	return 0;
//}


//��ʼ���б�
//
//#include<string>
//class Person
//{
//public:
//	Person():m_age(18),m_height(180),m_name("zhangsan")
//	{
//		cout << "Ĭ�Ϲ��캯��" << endl;
//	}
//	~Person()
//	{
//		cout << "Ĭ����������" << endl;
//	}
//	int m_age;
//	int m_height;
//	string m_name;
//};
//
//int main()
//{
//	Person p1;
//	cout << "���䣺"<<p1.m_age << "��ߣ�"<<p1.m_height <<"������"<< p1.m_name << endl;
//	return 0;
//}


