#define _CRT_SECURE_NO_WARNINGS 1
#include<string>
#include<iostream>
using namespace std;

//函数模板

////交换两个整形
//void swap(int &a, int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////交换两个浮点型
//void swap1(float&a, float&b)
//{
//	float tmp = a;
//	a = b;
//	b = tmp;
//}

//模板
//template<typename T>//声明一个模板，告诉编译器后面代码中国紧跟着的T不要报错，T是一个通用数据类型
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
//	//两种方式使用函数模板
//	//1、自动类型推导
//	swap2(a, b);
//	cout << "a=" << a << " b=" << b << endl;
//	//2、显示指定类型
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
//	cout << "func函数的调用" << endl;
//}
//
//int main()
//{
//	int a = 10;
//	float b = 20;
//
//	////必须推导出抑制类型的T，   
//	//swap01(a, b);
//
//	//必须要确定出T的数据类型
//	func<int>();
//	cout << "a=" << a << " b=" << b << endl;
//	return 0;
//}

//模板的排序案例
//利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//排序规则从大道小，排序算法为选择排序
//分别利用char数组和int数组进行测试

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
//		int max = i;//认定的最大值下标
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

//普通函数与函数模板的调用规则
//1、如果普通函数与函数模板都可以实现，优先调用普通模板
//2、可以通过空模板参数列表强制调用函数模板

//3、 函数模板可以发生重载

//4、如果函数模板可以产生更好的匹配，优先调用函数模板
//void print(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//template <class T>
//void print(T a, T b)
//{
//	cout << "函数模板的调用" << endl;
//}
//template <class T>//函数模板实现函数重载
//void print(T a, T b,T c)
//{
//	cout << "重载函数模板的调用" << endl;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	char d = 'e';
//	char  e = 'f';
//	print<>(a, b,c);//通过空模板列表强制调用函数模板
//	print(d, e);//函数模板产生更好的匹配，则调用函数模板
//	return 0;
//}


//模板的局限性
//模板并不是万能的，有些特定的数据类型，需要用具体化的方式做特殊实现

//对比两个数据是否相等的函数
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
////利用具体化的Person的版本实现代码
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
//	Person p1(10, "张三");
//	Person p2(12, "李四");
//	//int a = 10;
//	//int b = 20;
//	//bool ret = mycompare(a, b);
//	bool ret = mycompare(p1, p2);
//	if (ret == true)
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不相等" << endl;
//	}
//	return 0;
//}

////类模板
////类模板在模板参数列表中可以由默认参数
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
//	//1、类模板没有自动类型推导使用方式，只能用显示指定类型 
//	Person<string, int> p1("张三", 18);
//	cout << p1.m_name << " " << p1.m_age << endl;
//	return 0;
//}


////类模板中的成员函数 创建时机
//class Person1
//{
//public:
//	Person1()
//	{
//		cout << "person1构造函数的调用" << endl;
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
//		cout << "person2构造函数的调用" << endl;
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
//	//类模板中的成员函数
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

//类模板对象做函数参数
//指定传入类型
//参数模板化
//整个类模板化

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
////1、指定传入类型
//void printPerson1(Person<string, int>&p)
//{
//	p.showperson();
//}
////2、参数模板化
//template<class T1, class T2> 
//void printPerson2(Person<T1, T2>&p)
//{
//	p.showperson();
//	cout << "T1的类型：" << typeid(T1).name() << " T2的类型：" << typeid(T2).name() << endl;
//}
//
////3、整个类模板化
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
//	Person<string, int> c1("张三", 18);
//	printPerson1(c1);
//	printPerson2(c1);
//	printPerson3(c1);
//	return 0;
//}

////类模板与继承
//template <class T>
//class Base
//{
//public:
//	T m;
//};
//
////class Son:public Base<int>//必须要知道父类中的T类型，才能继承
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


////类模板的成员函数的类外实现
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
////构造函数的类外实现
//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	m_name = name;
//	m_age = age;
//}
////成员函数的类外实现
//template<class T1, class T2>
//void Person<T1, T2>::showperson()
//{
//	cout << m_name << " " << m_age << endl;
//	cout << "T1的类型:" << typeid(T1).name() << endl;
//	cout << "T2的类型:" << typeid(T2).name() << endl;
//}
//
//int main()
//{
//	Person<string, int> p1("张三", 18);
//	p1.showperson();
//	return 0;
//}


//类模板分文件编写
//由于类模板中成员函数的创建时机是在调用阶段，导致分文件编写时链接不到
//1、直接包含。cpp源文件
//2、将声明与实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制


//#include"Person.cpp"

//#include"Person.hpp"
//
//int main()
//{
//	Person<string, int> p1("张三", 18);
//	p1.showperson();
//	return 0;
//}

////类模板与友元
//template <class T1, class T2>//高速编译器存在person类
//class Person;
//template <class T1, class T2>//高速编译器，这是一个类外实现的函数
//void showperson(Person<T1, T2> p)
//{
//	cout << p.m_name << " " << p.m_age << endl;
//}
//template <class T1,class T2>
//class Person
//{
//
//	//全局函数类内实现
//	friend void showperson<>(Person<T1, T2> p);//类外试下需要加空参数列表
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
////全局函数类外实现
////template <class T1,class T2>
////void showperson(Person<T1, T2> p)
////{
////	cout << p.m_name << " " << p.m_age << endl;
////}
//
//int main()
//{
//	Person<string, int> p("张三", 18);
//	showperson(p);
//	return 0;
//}