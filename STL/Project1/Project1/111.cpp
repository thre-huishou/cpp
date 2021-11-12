#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;


//vector容器
#include<vector>
#include<algorithm>


//void myprint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//创建了一个vector容器，数组
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//通过迭代器访问容器中的数据
//	vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器中的第一个元素
//	vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中的最后一个元素的下一个元素
//
//	//第一种遍历方式
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin++ << endl;
//	}
//
//	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	//第三种遍历,liyong stl提供的遍历算法
//	for_each(v.begin(), v.end(), myprint);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//vector存放自定义数据类型
class Person
{
public:
	Person(string name, int age) :m_name(name), m_age(age)
	{

	}

	string m_name;
	int m_age;
};
ostream& operator<<(ostream &cout, Person p)
{
	cout << "姓名：" << p.m_name << " 年龄:" << p.m_age << endl;
	return cout;
}

void printperson(Person &p)
{
	cout << "姓名：" << p.m_name << " 年龄:" << p.m_age << endl;
}

int main()
{
	vector<Person> v;
	Person p1("张三",18);
	v.push_back(p1);
	Person p2("李四", 19);
	v.push_back(p2);
	Person p3("王二", 20);
	v.push_back(p3);
	Person p4("麻子", 21);
	v.push_back(p4);

	//第一种遍历
	vector<Person>::iterator itbegin = v.begin();
	vector<Person>::iterator itend = v.end();
	while (itbegin != itend)
	{
		cout << *itbegin << endl;
		itbegin++;
	}

	//第二种遍历
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	//第3中遍历
	/*for_each(v.begin(), v.end(), printperson);*/
	return 0;
}