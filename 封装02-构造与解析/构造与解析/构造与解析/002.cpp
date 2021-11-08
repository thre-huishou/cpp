#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//
//	//构造函数
//	Person()
//	{
//		cout << "构造函数的调用！！" << endl;
//	}
//	~Person()
//	{
//		cout << "析构函数的调用" << endl;
//	}
//};
//
//int main()
//{
//	Person p1;
//	return 0;
//}

//构造函数的分类与调用

//有参与无参
//class Person
//{
//public:
//	//有参与无参
//	Person()
//	{
//		cout << "Person的无参构造函数的调用" << endl;
//	}
//	Person(int a)
//	{
//		cout << "Person的有参构造函数的调用" << endl;
//		age = a;
//	}
//	//普通与拷贝
//	Person(const Person& p)
//	{
//		cout << "Person的拷贝函数的调用" << endl;
//		//将传入的人身所有的属性，拷贝到我身上
//		age = p.age;
//	}
//	~Person()
//	{
//		cout<< "Person的析构函数的调用" << endl;
//	}
//
//	int age;
//};
//
//int main()
//{
	//调用方式
	//1\括号法
	//Person p1;
	//Person p2(10);
	//Person p3(p2);
	//cout << p1.age << endl;
	//cout << p2.age << endl;
	//cout << p3.age << endl;

	//2\显示法
	//Person p1;
	//Person p2 = Person(10);//有参构造
	//Person p3 = Person(p2);
	//Person(10);//匿名对象，特点：当前行执行结束后，系统会立即回收掉匿名对象；
	//cout << p1.age << endl;
	//cout << p2.age << endl;
	//cout << p3.age << endl;

	//3隐式转换法
	//Person p1 = 10;//相当于Person p1=Person（10）
	//Person p2 = p1; 
//	//return 0;
//}

//class Person
//{
//public:
//	//Person()
	//{
	//	cout << "Person的默认构造函数的调用" << endl;
	//}
	//Person(int a)
	//{
	//	cout << "Person的有参构造函数的调用" << endl;
	//	age = a;
	//}
	//Person(const Person& p)
	//{
	//	cout << "Person的拷贝构造函数的调用" << endl;
	//	age = p.age;
	//}
//	~Person()
//	{
//		cout << "Person的析构函数的调用" << endl;
//	}
//
//	int age;
//};

//void dowork(Person p)//相当于拷贝构造函数
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
	//使用一个已经创建完毕的对象来初始化一个新对象
	//Person p1;
	//Person p1(10);
	//Person p2(p1);
	//值传递的方式给函数参数传值
	//Person p3;
	//dowork(p3);

	//值方式返回局部对象
	/*Person p4 = dowork2();*/
//	return 0;
//}

//
////深拷贝与浅拷贝
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//	Person(int a,int height)
//	{
//		cout << "Person有参构造函数调用" << endl;
//		m_age = a;
//		m_height = new int(height);
//	}
//	Person(const Person & p)//浅拷贝
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);//重新申请空间进行拷贝 
//	}
//	~Person()
//	{
//		//将堆区开辟的数据进行释放
//		if (m_height != NULL)//会发生重复释放
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Person的析构函数的调用" << endl;
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


//初始化列表
//
//#include<string>
//class Person
//{
//public:
//	Person():m_age(18),m_height(180),m_name("zhangsan")
//	{
//		cout << "默认构造函数" << endl;
//	}
//	~Person()
//	{
//		cout << "默认析构函数" << endl;
//	}
//	int m_age;
//	int m_height;
//	string m_name;
//};
//
//int main()
//{
//	Person p1;
//	cout << "年龄："<<p1.m_age << "身高："<<p1.m_height <<"姓名："<< p1.m_name << endl;
//	return 0;
//}


