#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//vector构造函数
//int main()
//{
//	vector<int> v(5, 1);
//	vector<int> v1(v.begin(), v.end()-1);
//	vector<int> v2(10, 100);
//	vector<int> v3(v2);
//	vector<int>::iterator itbegin = v3.begin();
//	for (; itbegin != v3.end(); itbegin++) 
//	{
//		cout << *itbegin << endl;
//	}
//}

//vector赋值操作
//vector&operstor=(const vector & vec);
//assign(beg,end);
//assign(n,elem);

//int main()
//{
//	vector<int> v;
//	//等号重载赋值
//	//v = { 1,2,3,4 };
//	vector<int> v1(10, 'c');
//	//v = v1;
//	//v.assign(v1.begin(), v1.end());
//	v.assign(10, 5);
//
//	vector<int>::iterator itbegin = v.begin();
//	for (; itbegin != v.end(); itbegin++)
//	{
//		cout << *itbegin << endl;
//	}
//	return 0;
//}

void myprint(vector<int>& v)
{
	vector<int>::iterator itbegin = v.begin();
	for (; itbegin != v.end(); itbegin++)
	{
		cout << *itbegin<<" ";
	}
	cout << endl;
}
//
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	myprint(v);
//
//	cout << v.empty() << endl;
//	cout << v.capacity() << endl;
//	v.push_back(10);
//	v.push_back(11);
//	v.push_back(12);
//	v.push_back(13);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//	v.resize(15);
//	myprint(v);
//	v.resize(9);
//	myprint(v);
//	v.resize(15, 2);
//	myprint(v);
//	return 0;
//}

//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	myprint(v);
//	for (int i = 5; i < 10; i++)
//	{
//		v.pop_back();
//	}
//	myprint(v);
//	vector<int>::iterator it=v.begin()+1;
//	v.insert(it, 2);
//	myprint(v);
//	it=v.begin() + 1;//上一次插入，改变了it 的值，导致直接插入错误
//	v.insert(it,2,2);
//	myprint(v);
//	it = v.begin() + 1;
//	v.erase(it);
//	myprint(v);
//	it = v.begin() + 1;
//	v.erase(it + 1, it + 4);//前闭后开
//	myprint(v);
//	v.clear();
//	myprint(v);
//	return 0;
//}


//vector中数据的存取
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	cout << v.at(5) << endl;
//	cout << v[5] << endl;
//	cout << v.front() << endl;
//	cout << v.back() << endl;
//
//	return 0;
//}

//int main()
//{
//	vector<int> v,v1;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//		//v1.push_back(i + 5);
//	}
//	//myprint(v);
//	//myprint(v1);
//	//v.swap(v1);
//	//myprint(v);
//	//myprint(v1);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//	v.resize(3);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//	vector<int>(v).swap(v);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//	return 0;
//}


//vector预留空间
int main()
{
	vector<int> v;
	int num = 0;
	int* p = NULL;
	//利用reserve预留空间
	v.reserve(100000);
	for (int i = 0; i < 100000; i++)//重新开辟了30次
	{
		v.push_back(i);
		//if (v.capacity() == v.size())
		//{
		//	num++;
		//}
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
	return 0;
}