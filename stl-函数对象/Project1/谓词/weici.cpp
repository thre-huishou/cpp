#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//一元谓词
class GreaterFive
{
public:
	bool operator()(int v)
	{
		if (v > 5)
		{
			return true;
		}
		else
			return false;
	}
};

void myprint(const vector<int>& v)
{
	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	myprint(v1);
	vector<int>::iterator it=find_if(v1.begin(), v1.end(), GreaterFive());//匿名函数对象
	if (it == v1.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到" <<*it<< endl;
	}
	return 0;
}