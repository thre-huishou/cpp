#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<list>
#include<string>

//void myprint(const list<int>& l)
//{
//	for (list<int>::const_iterator itbegin = l.begin(); itbegin != l.end(); itbegin++)
//	{
//		cout << *itbegin << " ";
//	}
//	cout << endl;
//}

//构造
//int main()
//{
//	list<int> lit;
//	lit.push_back(10);
//	lit.push_back(20);
//	lit.push_back(30);
//	lit.push_back(40);
//	myprint(lit);
//
//	list<int>l2(lit.begin(), lit.end());
//	myprint(l2);
//
//	list<int> l3(3, 10);
//	myprint(l3);
//
//	list<int> l4(l3);
//	myprint(l4);
//	return 0;
//}


////赋值和交换
//int main()
//{
//	list<int> l1;
//	//=重载
//	l1 = { 1,2,3,4,5,6 };
//	myprint(l1);
//	list<int> l2;
//	l2.assign(l1.begin(), l1.end());
//	myprint(l2);
//	list<int> l3;
//	l3.assign(3, 10);
//	myprint(l3);
//
//	l3.swap(l1);
//	myprint(l3);
//	myprint(l1);
//	return 0;
//}


//大小操作
//int main()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//	l1.push_back(60);
//	myprint(l1);
//	cout << l1.size() << endl;
//	cout << l1.empty() << endl;
//	l1.resize(8);
//	myprint(l1);
//	l1.resize(5);
//	myprint(l1);
//	l1.resize(8,111);
//	myprint(l1);
//	return 0;
//}


//list插入和删除
//int main()
//{
//	list<int> l1;
//	list<int> l2 = { 1,2,3,4 };
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	myprint(l1);
//	l1.push_front(40);
//	myprint(l1);
//	l1.pop_back();
//	myprint(l1);
//	l1.pop_front();
//	myprint(l1);
//	list<int>::iterator itbegin = l1.begin();
//	l1.insert(itbegin, 2, 100);
//	myprint(l1);
//	itbegin=l1.insert(itbegin,200);
//	l1.insert(itbegin, 300);
//	myprint(l1);
//	l1.insert(itbegin, l2.begin(), l2.end());
//	myprint(l1);
//
//	l1.erase(itbegin, l1.end());
//	myprint(l1);
//
//	l1.remove(100);
//	myprint(l1);
//
//}


//存取
//int main()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	cout << l1.front() << endl;
//	cout << l1.front() << endl;
//	cout << l1.back() << endl;
//	cout << l1.back() << endl;
//	return 0;
//}

//反转和排序
//int main()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(30);
//	l1.push_back(20);
//	l1.push_back(40);
//	myprint(l1);
//	l1.reverse();
//	myprint(l1);
//	l1.sort();
//	myprint(l1);
//	return 0;
//}

//排序案例
//将person自定义数据类型进行排序，person中属性有姓名、年龄、身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
class Person
{
public:
	string m_name;
	int m_age;
	int m_height;
	Person(string name, int age, int height)
	{
		m_name = name;
		m_age = age;
		m_height = height;
	}
};

void setlist(list<Person> &l)
{
	Person p1("张三",18, 176);
	Person p2("李四", 18, 178);
	Person p3("王二", 19, 175);
	Person p4("麻子", 16, 170);
	l.push_back(p1);
	l.push_back(p2);
	l.push_back(p3);
	l.push_back(p4);
}

void myprint(const list<Person> &l)
{
	list<Person>::const_iterator itbegin = l.begin();
	for (; itbegin != l.end(); itbegin++)
	{
		cout << "姓名：" << (*itbegin).m_name << " 年龄：" << itbegin->m_age
			<< " 身高：" << itbegin->m_height << endl;
	}
}
//指定排序规则
bool comparePerson(Person&p1, Person&p2)
{
	//按照年龄升序
	if (p1.m_age == p2.m_age)
	{
		//身高降序
		return p1.m_height > p2.m_height;
	}
	else
	{
		return p1.m_age < p2.m_age;
	}
	
}

int main()
{
	//建立链表
	list<Person> l1;
	setlist(l1);
	myprint(l1);

	//排序
	cout << "排序后：" << endl;
	l1.sort(comparePerson);
	myprint(l1);
	return 0;
}