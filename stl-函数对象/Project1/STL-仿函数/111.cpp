#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>

//内建的函数对象
//算数仿函数
//int main()
//{
//	negate<int> n;
//	cout << n(50) << endl;
//
//	plus<int> add;
//	cout << add(10, 20) << endl;
//	return 0;
//}

//关系仿函数
//int main()
//{
//	vector<int> v1 = { 1,3,2,4,5 };
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	sort(v1.begin(),v1.end(),greater<int>());
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	return 0;
//}

//逻辑仿函数
int main()
{
	vector<bool> v1 = { 1,0,1,0,1,0 };
	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	vector<bool> v2;
	v2.resize(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(),logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}