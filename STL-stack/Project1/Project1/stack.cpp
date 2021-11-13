#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stack>

int main()
{
	//构造
	stack<int> stk;
	for (int i = 0; i < 5; i++)
	{
		stk.push(i + 10);
	}
	while(!stk.empty())
	{
		cout << stk.top() << endl;
		stk.pop();
	}
	//赋值

	//存取

	//大小
	return 0;
}