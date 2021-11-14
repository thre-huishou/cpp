#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//º¯Êý¶ÔÏó
 
class Myadd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

class Myprint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

int main()
{
	Myadd myadd;
	cout << myadd(10, 20) << endl;
	Myprint myprint;
	myprint("hello world");
	return 0;
}