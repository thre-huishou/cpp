#define _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"
#include"point.h"

//double PI= 3.1415;
////类class
//class Circle
//{
//	//访问权限
//public://公共权限
//
//	//属性
//	int m_r;
//
//	//行为
//	//获取圆的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//通过圆类，创建具体的圆（对象）-实例化
//	Circle c1;
//	c1.m_r = 10;
//	cout << "圆的周长: " << c1.calculateZC() << endl;
//	return 0;
//}


//设计一个学生类，属性有姓名、学号，可以给属性赋值，并且显示
//class Student
//{
//public:
//
//	//属性
//	string name;
//	string id;
//	//行为
//	void fuzhi(Student & dd)
//	{
//		cout << "输入学生姓名：" << endl;
//		cin >> dd.name;
//		cout << "输入学生学号：" << endl;
//		cin >> dd.id;
//	}
//	void print(Student & dd)
//	{
//		cout << "姓名：" << dd.name << "学号:" << dd.id << endl;
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
//	//属性
//	string m_name;
//	string m_id;
//	//行为
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	void print()
//	{
//		cout << "姓名：" << m_name << "学号:" << m_id << endl;
//	}
//};
//  
//int main()
//{
//	Student s1;
//
//	return 0;
//}


//访问权限
//public-公共权限；类内可以访问，类外也可以访问
//protected-保护权限；类内可以访问，类外不可以访问，子类可以访问父类的保护权限
//private-私有权限；类内可以访问，类外不可以访问，子类不可以访问父类的私有权限


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


//成员属性私有化

//class Person
//{
//	//姓名;可读可写
//	string m_name;
//	//年龄；只读
//	int m_age;
//	//情人；只写
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

//案例：设计立方体类
//设计出立方体类，求出立方体的面积和体积，分别用全局函数和成员函数判断两个立方体是否相等

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
//	cout << "请输入长宽高：" << endl;
//	cin >> L;
//	cin >> W;
//	cin >> H;
//	l1.setL(L, W, H);
//	cout << "请输入长宽高：" << endl;
//	cin >> L;
//	cin >> W;
//	cin >> H;
//	l2.setL(L, W, H);
//	cout << "面积：" << l1.getS() << " " << "体积：" << l1.getV() << endl;
//	cout << "面积：" << l2.getS() << " " << "体积：" << l2.getV() << endl;
//	if (l1.panduan(l2))
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不相等" << endl;
//	}
//	if (panduan(l1, l2))
//	{
//		cout << "相等2" << endl;
//	}
//	else
//	{
//		cout << "不相等2" << endl;
//	}
//	
//	return 0;
//}

//点圆案例
int main()
{
	int c_x, c_y, c_r;
	int d_x, d_y;
	class Dot d1;
	cout << "输入点的坐标：" << endl;
	cin >> d_x;
	cin >> d_y;
	d1.setxy(d_x, d_y);
	class Circle c1;
	cout << "输入圆的坐标与半径：" << endl;
	cin >> c_x;
	cin >> c_y;
	cin >> c_r;
	c1.setxyr(c_x, c_y, c_r);
	if (d1.panduan(c1))
	{
		cout << "圆内" << endl;
	}
	else
	{
		cout << "圆外" << endl;
	}
	return 0;
}