#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stack>

int main()
{
	//����
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
	//��ֵ

	//��ȡ

	//��С
	return 0;
}