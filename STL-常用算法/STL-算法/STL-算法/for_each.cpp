#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<numeric>
#include<functional>
#include<vector>
using namespace std;

//ÆÕÍ¨º¯Êý
//void myprint(int val)
//{
//	cout << val << " ";
//}
//
////·Âº¯Êý
//class Myp
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//int main()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	//for_each(v1.begin(), v1.end(), myprint);
//
//	for_each(v1.begin(), v1.end(), Myp());
//	return 0;
//}

//transform

class mytrans
{
public:
	int operator()(int v)
	{
		return v;
	}
};
class myprint
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
};
int main()
{
	vector<int> v1 = {1,2,3,4,5,6,7,8,9};
	vector<int> v2;
	v2.resize(9);
	transform(v1.begin(), v1.end(), v2.begin(), mytrans());
	for_each(v2.begin(), v2.end(), myprint());
	return 0;
}