#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//�Ӻ����������
//1 ��Ա��������+
//class Person
//{
//public:
//	Person(){}
//	Person(int a, int b) :m_a(a), m_b(b) {}
	//1 ��Ա��������+
	//Person operator+(Person &p)
	//{
	//	Person tmp;
	//	tmp.m_a = this->m_a + p.m_a;
	//	tmp.m_b = this->m_b + p.m_b;
	//	return tmp;
	//}
//	int m_a;
//	int m_b;
//};
////ȫ�ֺ�������+
//Person operator+(Person &p1, Person &p2)
//{
//	Person tmp;
//	tmp.m_a = p1.m_a + p2.m_a;
//	tmp.m_b = p1.m_b + p2.m_b;
//	return tmp;
//}
//
//int main()
//{
//	Person p1(10, 20);
//	Person p2(5, 10);
//	cout << p1.m_a << " " << p1.m_b << " " << p2.m_a << " " << p2.m_b << endl;
//	Person p3 = p1 + p2;
//	cout << p3.m_a << " " << p3.m_b << endl;
//	return 0;
//}

//�������㷨����
//class Person
//{
//public:
//	//���ó�Ա���������������㷨,�޷�ʵ��cout��<<�����,ֻ��ʹ��ȥȫ�ֺ���
//	int m_a;
//	int m_b;
//};
//ostream & operator<<(ostream &cout, Person &p)
//{
//	cout << "m_a=" << p.m_a << " m_b=" << p.m_b ;
//	return cout;
//}
//
//int main()
//{
//	Person p1;
//	p1.m_a = 10;
//	p1.m_b = 20;
//	cout << p1 << endl;;
//	return 0;
//}

//�������㷨����
//class Person
//{
//	friend ostream& operator<<(ostream &cout, Person p);
//public:
//	Person(){}
//	Person(int a)
//	{
//		m_a = a;
//	}
//	//����ǰ��++
//	Person& operator++()
//	{
//		m_a++;
//		return *this;
//	}
//	//����++
//	//void operator++(int),int ��Ϊһ��ռλ������������������ǰ�úͺ���
//	Person operator++(int)
//	{
//		//�ȼ�¼��ʱ�Ľ��
//		Person* tmp=new Person;
//		tmp->m_a = this->m_a;
//		//��++
//		this->m_a++;
//		//��󷵻ؼ�¼�Ľ��
//		return *tmp;
//	}
//private:
//	int m_a;
//};
//
//ostream& operator<<(ostream &cout ,Person p)
//{
//	cout << "m_a=" << p.m_a ;
//	return cout;
//}
//
//int main()
//{
//	Person p1(10);
//	cout << ++p1 << endl;
//	cout << p1++ << endl;
//	return 0;
//}


//=����
//class Person
//{
//public:
//	Person(){}
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//	~Person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//		}
//		return;
//		
//	}
//	Person& operator=(Person& p)
//	{
//		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ���ڿ���
//		if (this->m_age != NULL)
//		{
//			delete this->m_age;
//			this->m_age = NULL;
//		} 
//		int* age = new int(*p.m_age);
//		this->m_age = age;
//		return *this; 
//	}
//	int * m_age;
//
//};
//
//int main()
//{
//	Person p1(10);
//	cout << "p1�������ǣ�" << *p1.m_age << endl;
//	Person p2(20);
//	cout << "p2�������ǣ�" << *p2.m_age << endl;
//	p2 = p1;//�������Դ���=�������ǳ������������ڴ���ظ��ͷţ�
//	cout << "p2�������ǣ�" << *p2.m_age << endl;
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << *p3.m_age << *p2.m_age << *p1.m_age << endl;
//	return 0;
//}

//��ϵ���㷨����
//#include<string>
//class Person
//{
//public:
//	Person(){}
//	Person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator == (Person &p)
//	{
//		if (m_age == p.m_age&&m_name==p.m_name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	int m_age;
//	string m_name;
//};
//
//int main()
//{
//	Person p1("Tom",10);
//	cout <<"p1������:"<<p1.m_name<< " p1������:" << p1.m_age<<endl;
//	Person p2("Tem",10);
//	cout << "p2������:" << p2.m_name << " p2������:" << p2.m_age << endl;
//	if (p1 == p2)
//	{
//		cout << "�������" << endl;
//	}
//	else
//	{
//		cout << "���߲����" << endl;
//	}
//	return 0;
//}


//�����������������
#include<string>
class Myprint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

int main()
{
	Myprint p1;
	p1("hahahaha");//����ʹ�������ǳ���һ�����������Խзº��� 
	return 0;
}