#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<queue>

int main()
{
	queue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	que.push(4);
	cout << que.back() << endl;
	cout << que.front() << endl;
	que.pop();
	cout << que.back() << endl;
	cout << que.front() << endl;
	cout << que.size() << endl;
	cout << que.empty()<< endl;
	return 0;
}