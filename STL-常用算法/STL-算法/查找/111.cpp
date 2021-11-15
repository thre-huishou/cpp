 #define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	vector<int>::iterator it = find(v1.begin(), v1.end(), 50);
	if (it == v1.end())
	{
		cout << "没查到" << endl;
	}
	else
	{
		cout << "查到：" << *it << endl;
	}
	return 0;
}