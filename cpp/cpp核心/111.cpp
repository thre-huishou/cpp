#define _CRT_SECURE_NO_WARNINGS 1
 
#include<iostream>
using namespace std;

//int * func()
//{
//	int a = 10;
//	return &a;
//}
//int* func()
//{
//	//int *p = new int(10);
//	int *p = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = i + 100;
//	}
//
//	return p;
//}
//int main()
//{
//	int *ps = func();
//	cout << *ps << endl;//��һ�γɹ�����Ϊ���������˱���
//	cout << *ps << endl;//�ڶ����Ѿ��ͷ���
//	delete[] ps;
//	int a = 10;
//	int &b = a;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	b = 100;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	return 0;
//}

//void swap01(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void swap02(int *a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void swap03(int &a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	//ֵ����
//	//swap01(a, b);
//	//swap02(&a, &b);
//	swap03(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	return 0;
//}
//int & test01()
//{
//	int a = 10;
//	return a;
//}
//
//int& test02()
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	//int& a=test01();
//	int&a = test02();
//	cout << a << endl;//����������һ��
//	cout << a << endl;
//	test02() = 1000;
//	cout << a << endl;//����������һ��
//	cout << a << endl;
//	return 0;
//}

//
//int func(int a, int b)
//{
//	return a + b;
//}
//
//int func2(int a , int=10)
//{
//	return a ;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << func(a, b) << endl;
//	cout << func2(a) << endl;
//	return 0;
//}

//void func()
//{
//	cout << "func�ĵ���1" << endl;
//}
//void func(int)
//{
//	cout << "func�ĵ���2" << endl;
//}

//void func(int&a, int &b)
//{
//	cout << "������Ϊ��������" << endl;
//}
//void func(const int&a, int &b)
//{
//	cout << "����1��Ϊ��������" << endl;
//}

void func(int a, int b)
{
	cout << "Ĭ����Ϊ��������" << endl;
}
void func(int a,int b=10)
{
	cout << "Ĭ��1��Ϊ��������" << endl;
}

int main()
{
	int a = 10;
	int b = 30;
	func(a);
	return 0;
}