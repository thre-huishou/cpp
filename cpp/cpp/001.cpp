#define _CRT_SECURE_NO_WARNINGS 1

//c++��дhello world
#include<iostream>
#include<string>
#include<system_error>
using namespace std;

//��ʶ����������
//1����ʶ���������ǹؼ���
//2����ʶ��������ĸ�����֡��»������
//3����ʶ����һ�������������֣�
//4����ʶ�����ִ�Сд;

int main()
{
	//int a_1 = 10;
	//int A_1 = 20;
	//int _a1 = 3;
	//int a = 10;
	//int b = 20;
	//(a > b ? a : b) = 30;
	//cout << a << " " << b << endl;
	//cin >> a_1;
	//string arr = "abcdef";
	//cout << a_1 << endl;
	//cout << arr << endl;
	//cout << a_1 / 3 << endl;
	//cout << 9.0 / 2.0 << endl;
	//cout << ((a) && (b++)) << endl;
	//cout << a << " " << b << endl;
	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << j << "*" << i << "=" << j * i<<"\t";
	//	}
	//	cout << endl;
	//}
	//char a = 'a';
	//cout << (int)a << endl;
	//int arr[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10 - i - 1; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int tmp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tmp;
	//		}
	//	}
	//}
	//for (int j = 0; j < 10; j++)
	//{
	//	cout << arr[j]<<"->";
	//}

	int arr[2][3]=
	{
		{1,2,3},
		{4,5,6}
	};
	cout << arr << "->" << arr + 1 << endl;
	cout << &arr << "->" << &arr + 1 << endl;
	cout << arr[0] << "->" << arr[0] + 1 << endl;
	cout << &arr[0] << "->" << &arr[0] + 1 << endl;
	 
	system("color 0A");//�ı����̨������ǰ��
 	return 0;
}