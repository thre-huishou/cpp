#define _CRT_SECURE_NO_WARNINGS 1

//c++��дhello world
#include<iostream>
#include<string>
using namespace std;

//��ʶ����������
//1����ʶ���������ǹؼ���
//2����ʶ��������ĸ�����֡��»������
//3����ʶ����һ�������������֣�
//4����ʶ�����ִ�Сд;

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
	system("color 0A");//�ı����̨������ǰ��
	return 0;
}