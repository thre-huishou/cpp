#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;

//����ģ��

////������������
//void swap(int &a, int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////��������������
//void swap1(float&a, float&b)
//{
//	float tmp = a;
//	a = b;
//	b = tmp;
//}

//ģ��
//template<typename T>//����һ��ģ�壬���߱�������������й������ŵ�T��Ҫ����T��һ��ͨ����������
//void swap2(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 1.1;
//	float d = 2.2;
//	//swap1(c, d);
//	//cout << "c=" << c << " d=" << d << endl;
//	//swap(a, b);
//	//cout << "a=" << a << " b=" << b << endl;
//
//	//���ַ�ʽʹ�ú���ģ��
//	//1���Զ������Ƶ�
//	swap2(a, b);
//	cout << "a=" << a << " b=" << b << endl;
//	//2����ʾָ������
//	swap2<int>(a, b);
//	cout << "a=" << a << " b=" << b << endl;
//	return 0;
//}

//template <class T>
//void swap01(T &a, T&b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//template <class T>
//void func()
//{
//	cout << "func�����ĵ���" << endl;
//}
//
//int main()
//{
//	int a = 10;
//	float b = 20;
//
//	////�����Ƶ����������͵�T��   
//	//swap01(a, b);
//
//	//����Ҫȷ����T����������
//	func<int>();
//	cout << "a=" << a << " b=" << b << endl;
//	return 0;
//}

//ģ���������
//���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
//�������Ӵ��С�������㷨Ϊѡ������
//�ֱ�����char�����int������в���

//template <class T>
//void my_swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//template <class T>
//void my_sort(T *arr,int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶������ֵ�±�
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			my_swap(arr[i], arr[max]);
//		}
//	}
//	
//	
//}
//
//int main()
//{
//	int arr1[10] = { 8,9,7,4,5,2,3,1,6,0 };
//	char arr2[] = { 'a','c','t','e','s','p','y','v','b','n' };
//	my_sort(arr1,10);
//	my_sort(arr2,10);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr1 [i];
//	}
//	return 0;
//}

//��ͨ�����뺯��ģ��ĵ��ù���
//1�������ͨ�����뺯��ģ�嶼����ʵ�֣����ȵ�����ͨģ��
//2������ͨ����ģ������б�ǿ�Ƶ��ú���ģ��

//3�� ����ģ����Է�������

//4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
//void print(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//}
//template <class T>
//void print(T a, T b)
//{
//	cout << "����ģ��ĵ���" << endl;
//}
//template <class T>//����ģ��ʵ�ֺ�������
//void print(T a, T b,T c)
//{
//	cout << "���غ���ģ��ĵ���" << endl;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	char d = 'e';
//	char  e = 'f';
//	print<>(a, b,c);//ͨ����ģ���б�ǿ�Ƶ��ú���ģ��
//	print(d, e);//����ģ��������õ�ƥ�䣬����ú���ģ��
//	return 0;
//}


//ģ��ľ�����
//ģ�岢�������ܵģ���Щ�ض����������ͣ���Ҫ�þ��廯�ķ�ʽ������ʵ��

//�Ա����������Ƿ���ȵĺ���
//template <class T>
//bool mycompare(T &a, T &b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//class Person
//{
//public:
//	Person(int age, string name) :m_age(age), m_name(name)
//	{
//
//	}
//	int m_age;
//	string m_name;
//};
////���þ��廯��Person�İ汾ʵ�ִ���
//template<> bool mycompare(Person &a, Person &b)
//{
//	if (a.m_age == b.m_age&&a.m_name == b.m_name)
//	{
//		return true;
//	}
//	else
//	{
//		return false; 
//	}
//}
//
//int main()
//{
//	Person p1(10, "����");
//	Person p2(12, "����");
//	//int a = 10;
//	//int b = 20;
//	//bool ret = mycompare(a, b);
//	bool ret = mycompare(p1, p2);
//	if (ret == true)
//	{
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "�����" << endl;
//	}
//	return 0;
//}

////��ģ��
////��ģ����ģ������б��п�����Ĭ�ϲ���
//template <class NameType, class AgeType=int>
//class Person
//{
//public:
//
//	Person(NameType name, AgeType age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	NameType m_name;
//	AgeType m_age;
//};
//
//int main()
//{
//	//1����ģ��û���Զ������Ƶ�ʹ�÷�ʽ��ֻ������ʾָ������ 
//	Person<string, int> p1("����", 18);
//	cout << p1.m_name << " " << p1.m_age << endl;
//	return 0;
//}


////��ģ���еĳ�Ա���� ����ʱ��
//class Person1
//{
//public:
//	Person1()
//	{
//		cout << "person1���캯���ĵ���" << endl;
//	}
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	Person2()
//	{
//		cout << "person2���캯���ĵ���" << endl;
//	}
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//
//template<class T>
//class myclass
//{
//public:
//	myclass()
//	{
//		cout << "myclassd gouzao hanshu " << endl;
//	}
//	T obj;
//	//��ģ���еĳ�Ա����
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//int main()
//{
//	myclass <Person1>c1;
//	c1.func1();
//	//c1.func2();
//	return 0; 
//}

//��ģ���������������
//ָ����������
//����ģ�廯
//������ģ�廯

//template<class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	void showperson()
//	{
//		cout << m_name << " " << m_age << endl;
//	}
//
//	T1 m_name;
//	T2 m_age;
//};
//
////1��ָ����������
//void printPerson1(Person<string, int>&p)
//{
//	p.showperson();
//}
////2������ģ�廯
//template<class T1, class T2> 
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showperson();
//	cout << "T1�����ͣ�" << typeid(T1).name() << " T2�����ͣ�" << typeid(T2).name() << endl;
//}
//
////3��������ģ�廯
//template <class T>
//void printPerson3(T &p)
//{
//	p.showperson();
//}
//
//
//
//int main()
//{
//	Person<string, int> c1("����", 18);
//	printPerson1(c1);
//	printPerson2(c1);
//	printPerson3(c1);
//	return 0;
//}

////��ģ����̳�
//template <class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son:public Base<int>//����Ҫ֪�������е�T���ͣ����ܼ̳�
////{
////public:
////
////};
//template<class T1,class T2>
//class Son:public Base<T2>
//{
//public:
//	T1 obj;
//};
//
//
//int main()
//{
//	Son<string, int> s1;
//	return 0;
//}


////��ģ��ĳ�Ա����������ʵ��
//template <class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showperson();
//	T1 m_name;
//	T2 m_age;
//};
////���캯��������ʵ��
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	m_name = name;
//	m_age = age;
//}
////��Ա����������ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showperson()
//{
//	cout << m_name << " " << m_age << endl;
//	cout << "T1������:" << typeid(T1).name() << endl;
//	cout << "T2������:" << typeid(T2).name() << endl;
//}
//
//int main()
//{
//	Person<string, int> p1("����", 18);
//	p1.showperson();
//	return 0;
//}


//��ģ����ļ���д
//������ģ���г�Ա�����Ĵ���ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���
//1��ֱ�Ӱ�����cppԴ�ļ�
//2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ.hpp��hpp��Լ�������ƣ�������ǿ��


//#include"Person.cpp"

//#include"Person.hpp"
//
//int main()
//{
//	Person<string, int> p1("����", 18);
//	p1.showperson();
//	return 0;
//}

////��ģ������Ԫ
//template <class T1, class T2>//���ٱ���������person��
//class Person;
//template <class T1, class T2>//���ٱ�����������һ������ʵ�ֵĺ���
//void showperson(Person<T1, T2> p)
//{
//	cout << p.m_name << " " << p.m_age << endl;
//}
//template <class T1,class T2>
//class Person
//{
//
//	//ȫ�ֺ�������ʵ��
//	friend void showperson<>(Person<T1, T2> p);//����������Ҫ�ӿղ����б�
//	//{
//	//	cout << p.m_name << " " << p.m_age << endl;
//	//}
//public:
//	Person(T1 name, T2 age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
////ȫ�ֺ�������ʵ��
////template <class T1,class T2>
////void showperson(Person<T1, T2> p)
////{
////	cout << p.m_name << " " << p.m_age << endl;
////}
//
//int main()
//{
//	Person<string, int> p("����", 18);
//	showperson(p);
//	return 0;
//}