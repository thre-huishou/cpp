#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"
#include"point.h"

//double PI= 3.1415;
////��class
//class Circle
//{
//	//����Ȩ��
//public://����Ȩ��
//
//	//����
//	int m_r;
//
//	//��Ϊ
//	//��ȡԲ���ܳ�
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//ͨ��Բ�࣬���������Բ������-ʵ����
//	Circle c1;
//	c1.m_r = 10;
//	cout << "Բ���ܳ�: " << c1.calculateZC() << endl;
//	return 0;
//}


//���һ��ѧ���࣬������������ѧ�ţ����Ը����Ը�ֵ��������ʾ
//class Student
//{
//public:
//
//	//����
//	string name;
//	string id;
//	//��Ϊ
//	void fuzhi(Student & dd)
//	{
//		cout << "����ѧ��������" << endl;
//		cin >> dd.name;
//		cout << "����ѧ��ѧ�ţ�" << endl;
//		cin >> dd.id;
//	}
//	void print(Student & dd)
//	{
//		cout << "������" << dd.name << "ѧ��:" << dd.id << endl;
//	}
//};
//
//int main()
//{
//	Student s1;
//	s1.fuzhi(s1);
//	s1.print(s1);
//	return 0;
//}

//class Student
//{
//public:
//
//	//����
//	string m_name;
//	string m_id;
//	//��Ϊ
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	void print()
//	{
//		cout << "������" << m_name << "ѧ��:" << m_id << endl;
//	}
//};
//  
//int main()
//{
//	Student s1;
//
//	return 0;
//}


//����Ȩ��
//public-����Ȩ�ޣ����ڿ��Է��ʣ�����Ҳ���Է���
//protected-����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ���Է��ʣ�������Է��ʸ���ı���Ȩ��
//private-˽��Ȩ�ޣ����ڿ��Է��ʣ����ⲻ���Է��ʣ����಻���Է��ʸ����˽��Ȩ��


//class Person
//{
//public:
//	string m_name;
//protected:
//	int m_car;
//private:
//	string m_littlethree;
//
//public:
//	void func()
//	{
//		m_name = "zhangsan";
//	}
//	void func1()
//	{
//		m_car = 10;
//	}
//	void func2()
//	{
//		m_littlethree = "lisi";
//	}
//};
//
//int main()
//{
//	Person p1;
//	cout << p1.m_name << endl;
//
//	return 0;
//}


//��Ա����˽�л�

//class Person
//{
//	//����;�ɶ���д
//	string m_name;
//	//���䣻ֻ��
//	int m_age;
//	//���ˣ�ֻд
//	string m_xiaosan;
//
//public:
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	void duage()
//	{
//		m_age = 18;
//		cout << m_age << endl;
//	}
//	void setxiaosan(string name)
//	{
//		m_xiaosan = name;
//	}
//};
//
//int main()
//{
//	Person p1;
//	p1.setname("zhangsan");
//	p1.duage();
//	p1.setxiaosan("lisi");
//	return 0;
//}

//�����������������
//��Ƴ��������࣬���������������������ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����

//class Lifangti
//{
//	int m_L;
//	int m_H;
//	int m_W;
//
//public:
//	void setL(int L, int W, int H)
//	{
//		m_L = L;
//		m_W = W;
//		m_H = H;
//	}
//
//	int getS()
//	{
//		int S = (m_L*m_H + m_L * m_W + m_H * m_W) * 2;
//		return S;
//	}
//	int getV()
//	{
//		int V = m_L * m_W*m_H;
//		return V;
//	}
//
//	bool panduan(Lifangti l2)
//	{
//		if (getS() == l2.getS() && getV() == l2.getV())
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//};
//bool panduan(Lifangti l1, Lifangti l2)
//{
//	if (l1.getS() == l2.getS() && l1.getV() == l2.getV())
//	{
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//int main()
//{
//	Lifangti l1,l2;
//	int L = 0;
//	int W = 0;
//	int H = 0;
//	cout << "�����볤��ߣ�" << endl;
//	cin >> L;
//	cin >> W;
//	cin >> H;
//	l1.setL(L, W, H);
//	cout << "�����볤��ߣ�" << endl;
//	cin >> L;
//	cin >> W;
//	cin >> H;
//	l2.setL(L, W, H);
//	cout << "�����" << l1.getS() << " " << "�����" << l1.getV() << endl;
//	cout << "�����" << l2.getS() << " " << "�����" << l2.getV() << endl;
//	if (l1.panduan(l2))
//	{
//		cout << "���" << endl;
//	}
//	else
//	{
//		cout << "�����" << endl;
//	}
//	if (panduan(l1, l2))
//	{
//		cout << "���2" << endl;
//	}
//	else
//	{
//		cout << "�����2" << endl;
//	}
//	
//	return 0;
//}

//��Բ����
int main()
{
	int c_x, c_y, c_r;
	int d_x, d_y;
	class Dot d1;
	cout << "���������꣺" << endl;
	cin >> d_x;
	cin >> d_y;
	d1.setxy(d_x, d_y);
	class Circle c1;
	cout << "����Բ��������뾶��" << endl;
	cin >> c_x;
	cin >> c_y;
	cin >> c_r;
	c1.setxyr(c_x, c_y, c_r);
	if (d1.panduan(c1))
	{
		cout << "Բ��" << endl;
	}
	else
	{
		cout << "Բ��" << endl;
	}
	return 0;
}