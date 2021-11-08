#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//加好运算符重载
//1 成员函数重载+
//class Person
//{
//public:
//	Person(){}
//	Person(int a, int b) :m_a(a), m_b(b) {}
	//1 成员函数重载+
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
////全局函数重载+
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

//左移运算法重载
//class Person
//{
//public:
//	//利用成员函数重载左移运算法,无法实现cout在<<的左边,只能使用去全局函数
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

//递增运算法重载
//class Person
//{
//	friend ostream& operator<<(ostream &cout, Person p);
//public:
//	Person(){}
//	Person(int a)
//	{
//		m_a = a;
//	}
//	//重载前置++
//	Person& operator++()
//	{
//		m_a++;
//		return *this;
//	}
//	//后置++
//	//void operator++(int),int 作为一个占位参数，可以用于区分前置和后置
//	Person operator++(int)
//	{
//		//先记录当时的结果
//		Person* tmp=new Person;
//		tmp->m_a = this->m_a;
//		//在++
//		this->m_a++;
//		//最后返回记录的结果
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


//=重载
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
//		//应该先判断是否有属性在堆区，如果有先释放干净，然后在开辟
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
//	cout << "p1的年龄是：" << *p1.m_age << endl;
//	Person p2(20);
//	cout << "p2的年龄是：" << *p2.m_age << endl;
//	p2 = p1;//编译器自带的=运算符是浅拷贝，会造成内存的重复释放；
//	cout << "p2的年龄是：" << *p2.m_age << endl;
//	Person p3(30);
//	p3 = p2 = p1;
//	cout << *p3.m_age << *p2.m_age << *p1.m_age << endl;
//	return 0;
//}

//关系运算法重载
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
//	cout <<"p1的名字:"<<p1.m_name<< " p1的年龄:" << p1.m_age<<endl;
//	Person p2("Tem",10);
//	cout << "p2的名字:" << p2.m_name << " p2的年龄:" << p2.m_age << endl;
//	if (p1 == p2)
//	{
//		cout << "两者相等" << endl;
//	}
//	else
//	{
//		cout << "两者不相等" << endl;
//	}
//	return 0;
//}


//函数调用运算符重载
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
	p1("hahahaha");//由于使用起来非常想一个函数，所以叫仿函数 
	return 0;
}