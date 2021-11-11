#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
#include"arr.hpp"
//实现一个通用的数组类，要求如下：
//1、可以实现对内置数据类型以及自定义数据类型的数据进行存储
//2、将数组中的数据存储到堆区
//3、构造函数中国可以传入数组的容量
//4、提供对应的拷贝构造函数以及operator=防止浅拷贝（等号运算符重载）
//5、提供尾插法和尾删法对数组中国的数据进行增加和删除
//6、可以通过下标的方式访问数组中的元素
//7、可以获取数组中当前元素的个数和数组的容量
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
//	cout << "a1的打印输出：" << endl;
//	print(a1);
//	return 0;
//}

//测试自定义数据类型
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
	Person p1("孙悟空",999);
	Person p2("韩信", 20);
	Person p3("妲己", 25);
	Person p4("赵云", 30);
	Person p5("李信", 35);
	arr.Pushback(p1);
	arr.Pushback(p2);
	arr.Pushback(p3);
	arr.Pushback(p4);
	arr.Pushback(p5);

	printperson(arr);
	return 0;
}