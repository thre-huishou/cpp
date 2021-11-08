#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//静态成员函数
//所有对象同享同一个静态成员函数
//静态成员函数智能访问静态成员变量
//class Person
//{
//public:
//	static void func()
//	{
//		a = 100;//静态成员函数可以访问，静态成员变量
//		//b = 200;//静态成员函数不可以访问静态成员变量,因为静态函数只有一份，函数不知道改变哪个变量的的成员变量
//		cout << "静态成员函数调用" << endl;
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
//	//通过对象进行访问
//	p1.func();
//
//	//通过类名 进行访问
//	Person::func();
//
//	cout << p1.a << endl;
//	return 0;
//}

//对象模型和this指针

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
//	int Person::m_b = 0;//类内声明，类外要初始化
//	Person p1;
//	cout << sizeof(p1) << endl;
//	return 0;
//}

//this指针
//class Person
//{
//public:
//	Person(int m_age)
//	{
//		this->m_age = m_age;//this指针指向调用函数的对象
//	}
//	Person& addage(Person & p)
//	{
//		this->m_age += p.m_age;
//		return *this;
//	}
//
//	int m_age;
//};
////1 解决名称冲突
//int main()
//{
//	Person p1(18);
//	Person p2(12);
//	p2.addage(p1).addage(p1);
//	cout << p2.m_age << endl;
//	return 0;
//}
////2 返回对象本身


//空指针调用成员函数
//class Person
//{
//public:
//	void showPerson()
//	{
//		cout << "this is a person class" << endl;
//	}
//	void showage()
//	{
//		if (this == NULL)//防止空指针，增加程序的健壮性
//		{
//			return;
//		}
//		cout << "age=" << age << endl;//调用的时候一般是this->age,而当前this是空指针 
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


//const 修饰成员函数
//class Person
//{
//public:
//	void showperson() const//加了const，不可以访问成员属性,类似于给this加了const
//	{
//		age = 10;
//	}
//	void func()
//	{
//		m_a = 100;
//	}
//
//	mutable int age;//加了mutable后，常函数也可以访问该成员属性 
//	int m_a;
// };
//
//int main()
//{
//	const Person p;//常对象
//	p.m_a = 1;//常对象不可以修改成员属性
//	p.age = 1;
//	p.showperson();//常对象只能调用常函数,不可以调用普通函数，因为普通函数可以修改成员属性
//	p.func();
//	return 0;
//}

