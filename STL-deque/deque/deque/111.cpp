#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>
//deque构造函数

//int main()
//{
//	deque<int> d1;
//	deque<int>::iterator itbegin = d1.begin();
//	deque<int>::iterator itend = d1.end();
//	deque<int> d2(itbegin, itend);
//	deque<int> d3(10, 2);
//	deque<int> d4(d3);
//	for (deque<int>::const_iterator   it = d4.begin(); it < d4.end(); it++)
//	{
//		cout << *it << endl;
//	}
//	return 0;
//}


//deque赋值
//int main()
//{
//	deque<int> deq;
//	deq.assign(10, 1);
//	for (deque<int>::const_iterator   it = deq.begin(); it < deq.end(); it++)
//	{
//		cout << *it ;
//	}
//	cout << endl;
//	deque<int> deq1;
//	//deq1 = deq;
//	//for (deque<int>::const_iterator it = deq1.begin(); it < deq1.end(); it++)
//	//{
//	//	cout << *it ;
//	//}
//	//cout << endl;
//	deque<int>::const_iterator it1 = deq.begin();
//	deque<int>::const_iterator it2 = deq.end();
//	deq1.assign(it1, it2 - 1);
//	for (deque<int>::const_iterator it = deq1.begin(); it < deq1.end(); it++)
//	{
//		cout << *it;
//	}
//	cout << endl;
//	return 0;
//}


//deque大小操作
//
//int main()
//{
//	deque<int> d1;
//	d1 = { 1,2,3,4,5,6 };
//	cout << d1.empty() << endl;
//	cout << d1.size() << endl;
//	d1.resize(5);
//	deque<int>::iterator itbegin = d1.begin();
//	for (; itbegin != d1.end(); itbegin++)
//	{
//		cout << *itbegin;
//	}
//	d1.resize(7, 2);
//	itbegin = d1.begin();
//	cout << endl;
//	for (; itbegin != d1.end(); itbegin++)
//	{
//		cout << *itbegin;
//	}
//	return 0;
//}

//deque的插入和删除

void myprint(deque<int>&deq)
{
	deque<int>::iterator itbegin = deq.begin();
	for (; itbegin != deq.end(); itbegin++)
	{
		cout << *itbegin<<" ";
	}
	cout << endl;
}

int main()
{
	deque<int> deq1 = { 1,2,3,4,5,6,7 };
	myprint(deq1);
	deq1.push_back(0);
	myprint(deq1);
	deq1.push_front(0);
	myprint(deq1);
	deq1.pop_back();
	myprint(deq1);
	deq1.pop_front();
	myprint(deq1);

	deque<int>::iterator it = deq1.begin();
	deq1.insert(it+1,2);
	myprint(deq1);
	it = deq1.begin();
	deq1.insert(it + 4, 2, 0);
	myprint(deq1);
	deque<int> deq2 = { 9,8,7,6,5,4,3 };
	deque<int>::iterator itbegin = deq2.begin();
	deque<int>::iterator itend = deq2.end();
	it = deq1.begin();
	deq1.insert(it + 2, itbegin, itend);
	myprint(deq1);
	deq2.erase(itbegin + 2, itend - 2);
	myprint(deq2);
	it = deq1.begin();
	deq1.erase(it);
	myprint(deq1);
	//deq1.clear();
	//myprint(deq1);

//存取
	cout << deq1[5]<<endl;
	cout << deq1.at(5) << endl;

	//排序
	sort(deq1.begin(), deq1.end());
	myprint(deq1);
	return 0;
}