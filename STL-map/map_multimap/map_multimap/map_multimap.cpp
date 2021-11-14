#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<map>
#include<string>

//void myprint(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key值：" << (*it).first << " 值：" << (*it).second << endl;
//	}
//	cout << endl;
//}
//map容器的构造与赋值
//int main()
//{
//	map<int,int> m1;
//	m1.insert(pair<int, int>(1, 10));//匿名对组
//	m1.insert(pair<int, int>(3, 20));
//	m1.insert(pair<int, int>(2, 30));
//	m1.insert(pair<int, int>(4, 20));
//	myprint(m1);
//	map<int, int> m2(m1);
//	myprint(m2);
//
//	map<int, int> m3=m1;
//	myprint(m3);
//	return 0;
//}

//map的大小与交换
//int main()
//{
//	map<int, int> m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 10));
//	m1.insert(pair<int, int>(3, 10));
//	m1.insert(pair<int, int>(4, 10));
//
//	if (m1.empty())
//	{
//		cout << "为空" << endl;
//	}
//	else
//	{
//		cout << m1.size() << endl;
//	}
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(1, 20));
//	m2.insert(pair<int, int>(2, 20));
//	m2.insert(pair<int, int>(3, 20));
//	m1.swap(m2);
//	myprint(m1);
//	return 0;
//}

//map插入和删除
//int main()
//{
//	map<int, int> m1;
//	//第一种
//	m1.insert(make_pair(1, 10));
//	//第二种
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(make_pair(3, 30));
//	//第三种
//	m1.insert(map<int, int>::value_type(4, 40));
//	//第四种(不建议）:可以利用key访问到value，但是如果不存在时，会自动创建一个数据
//	m1[5] = 50;
//	myprint(m1);
//
//	m1.erase(m1.begin());
//	myprint(m1);
//
//	m1.erase(5);
//	myprint(m1);
//	return 0;
//}


//map中利用仿函数从大到小排序
//class mycompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//int main()
//{
//	map<int, int,mycompare> m1;
//	m1.insert(make_pair(1, 10));
//	m1.insert(make_pair(2, 20));
//	m1.insert(make_pair(3, 30));
//	m1.insert(make_pair(4, 40));
//
//	for (map<int, int, mycompare>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << it->first << " " << it->second << endl;
//	}
//	return 0;
//}


//自定义数据类型排序
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//	int m_height;
//	Person(string name, int age, int height)
//	{
//		m_name = name;
//		m_age = age;
//		m_height = height;
//	}
//
//};
//
//class mycompare
//{
//public:
//	bool operator()(const int &a1, const int& a2)
//	{
//		return a1 < a2;
//	}
//};
//
//int main()
//{
//	map<int, Person,mycompare>m1;
//	Person p1("张三", 18, 175);
//	Person p2("李四", 16, 175);
//	Person p3("王二", 19, 180);
//	Person p4("麻子", 17, 170);
//	m1.insert(make_pair(2, p1));
//	m1.insert(make_pair(1, p2)); 
//	m1.insert(make_pair(4, p3));
//	m1.insert(make_pair(3, p4));
//
//	for (map<int, Person,mycompare>::iterator it = m1.begin(); it != m1.end(); it++)
//	{
//		cout << "key:" << it->first << " 姓名：" << it->second.m_name
//			<< " 年龄：" << it->second.m_age
//			<< " 身高：" << it->second.m_height << endl;
//	}
//	return 0;
//}


//案例
//公司招聘10个员工（ABCDEFGHIJ），10名员工进入公司后，需要指派员工在哪个部门工作；
//员工信息有：姓名，工资组成；部门有：策划、美术、研发
//随机给10名员工分配部门和工资
//通过mulimap进行信息的插入，key（部门编号）value(员工）
//分部门显示员工信息

//1、创建10名员工，放入vector；
//2、遍历vector容器，取出每个员工，进行随机分组
//3、分组后，将员工部门编号作为key，具体员工作为value，放入到mulitmap中
//4、份部门显示员工信息
#include<vector>
#include<ctime>

class Person
{
public:
	char m_name;
	int m_gz;
	Person(char name, int gz)
	{
		m_name = name;
		m_gz = gz;
	}
};
class Mycompare
{
public:
	bool operator()(const int &v1, const int &v2)
	{
		return v1 > v2;
	}
};

int main()
{
	//1、
	srand((unsigned int)time(NULL));
	vector<Person> v1;
	multimap<int, Person,Mycompare>m1;
	for (int i = 0; i < 10; i++)
	{
		Person p('A' + i, 10000 - 100 * i);
		v1.push_back(p);
	}

	//2、
	for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		/*cout << "姓名：" << it->m_name << " 工资：" << it->m_gz << endl;*/
		int key=rand() % 3 + 1;//随机值1-3；
		m1.insert(make_pair(key, *it));
	}

	for (multimap<int, Person, Mycompare>::iterator itbegin = m1.begin(); itbegin != m1.end(); itbegin++)
	{
		switch (itbegin->first)
		{
		case 1:
		{
			cout << "部门：" << " 策划" << " 姓名：" << itbegin->second.m_name
				<< " 工资：" << itbegin->second.m_gz << endl;
			break;
		}
		case 2:
		{
			cout << "部门：" << " 美术" << " 姓名：" << itbegin->second.m_name
				<< " 工资：" << itbegin->second.m_gz << endl;
			break;
		}
		case 3:
		{
			cout << "部门：" << " 研发" << " 姓名：" << itbegin->second.m_name
				<< " 工资：" << itbegin->second.m_gz << endl;
			break;
		}
		 
	}
	return 0;
}