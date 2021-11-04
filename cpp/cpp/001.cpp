#define _CRT_SECURE_NO_WARNINGS 1

//c++书写hello world
#include<iostream>
#include<string>
using namespace std;

//标识符命名规则
//1、标识符不可以是关键字
//2、标识符是由字母、数字、下划线组成
//3、标识符第一个不可以是数字；
//4、标识符区分大小写;

int main()
{
	int a_1 = 10;
	int A_1 = 20;
	int _a1 = 3;
	int a = 10;
	int b = 20;
	(a > b ? a : b) = 30;
	cout << a << " " << b << endl;
	cin >> a_1;
	string arr = "abcdef";
	cout << a_1 << endl;
	cout << arr << endl;
	cout << a_1 / 3 << endl;
	cout << 9.0 / 2.0 << endl;
	cout << ((a) && (b++)) << endl;
	cout << a << " " << b << endl;
	system("color 0A");//改变控制台背景与前景
	return 0;
}