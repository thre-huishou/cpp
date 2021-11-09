#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//}; 
//
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
//class Dog:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗在说话" << endl;
//	}
//};
//
////地址早绑定，在编译阶段确定函数地址
////若果向执行让猫说话，那么这个函数地址就不能提前绑定，
//void dospeak(Animal &animal)//父类的引用来调用子类的对象
//{
//	animal.speak();
//}
//
//int main()
//{
//	//Animal animal;
//	//animal.speak();
//	//Cat cat;
//	//dospeak(cat);
//	Dog dog;
//	dospeak(dog);
//	return 0;
//}

//多态案例
//普通写法
//但是这种算法，在内次添加新功能，都需要对源代码进行修改.
//class Calulator
//{
//public:
//	int m_num1;
//	int m_num2;
//
//	int getresult(string p)
//	{
//		if (p == "+")
//		{
//			return m_num1 + m_num2;
//		}
//		else if (p == "-")
//		{
//			return m_num1 - m_num2;
//		}
//		else if (p == "*")
//		{
//			return m_num1 * m_num2;
//		}
//	}
//};

//利用多态实现计算器
//class Abstract
//{
//public:
//	int m_num1;
//	int m_num2;
//
//	virtual int getresult() = 0;//纯虚函数
//};
//
//class add:public Abstract
//{
//public:
//	virtual int getresult()
//	{
//		return m_num1 + m_num2;
//	}
//};
//class sub:public Abstract
//{
//public:
//	virtual int getresult()
//	{
//		return m_num1 - m_num2;
//	}
//};
//
//int main()
//{
//	//Calulator c;
//	//c.m_num1 = 10;
//	//c.m_num2 = 20;
//	//cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getresult("+") << endl;
//	//cout << c.m_num1 << "-" << c.m_num2 << "=" << c.getresult("-") << endl;
//	//cout << c.m_num1 << "*" << c.m_num2 << "=" << c.getresult("*") << endl;
//
//	//多态使用太偶见
//	//父类指针或者引用指向子类
//	Abstract *abc = new add;
//	abc->m_num1 = 10;
//	abc->m_num2 = 20;
//	cout<<abc->getresult()<<endl;
//	delete abc;
//	abc = new sub;
//	abc->m_num1 = 10;
//	abc->m_num2 = 20; 
//	cout << abc->getresult() << endl;
//	return 0;
//}

////纯虚函数和抽象类
//class Base
//{
//public:
//	//纯虚函数
//	virtual void func() = 0;
//
//};
//
//class Son:public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "重写纯虚函数" << endl;
//	}
//};
//
//int main()
//{
//	////Base b1;//抽象类无法实例化对象
//	//Base *b = new Base;//堆区也无法创建实例化对象
//
//	//Son s1;//子类不重写纯虚函数，也无法实例化对象
//	//Son *s = new Son;
//	Base* b1 = new Son;//父类指针指向子类对象，实现多态
//	b1->func();
//
//	return 0;
//}

//案例2：制作饮品
//class Base
//{
//public:
//	Base()
//	{
//		cout << "base的构造函数调用" << endl;
//	}
//	virtual ~Base() = 0;//纯虚析构,必须要有具体实现
//	//{
//	//	cout << "base的析构函数调用" << endl;
//	//}
//	virtual void Boil() = 0;
//
//	virtual void Brew() = 0;
//
//	virtual void pour() = 0;
//
//	virtual void addinto() = 0;
//
//	void makedrink()
//	{
//		Boil();
//		Brew();
//		pour();
//		addinto();
//	}
//};
//Base::~Base()
//{
//	cout << "base的析构函数调用" << endl;
//}
//
//class coffee :public Base
//{
//public:
//	coffee(string name)
//	{
//		cout << "coffee构造函数调用" << endl;
//		m_name = new string(name);
//	}
//	~coffee()
//	{
//		//多态父类不会调用子类的析构函数
//		if (m_name != NULL)
//		{
//			cout << "coffee析构函数调用" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	virtual void Boil()
//	{
//		cout << "正在煮水！！" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡"<<*m_name<<"咖啡！！" << endl;
//	}
//	virtual void pour()
//	{
//		cout << "倒入杯中！" << endl;
//	}
//	virtual void addinto()
//	{
//		cout << "加入牛奶和糖！！" << endl;
//	}
//
//	string* m_name;
//};
//
//class Tee :public Base
//{
//public:
//	virtual void Boil()
//	{
//		cout << "正在煮水！！" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶！！" << endl;
//	}
//	virtual void pour()
//	{
//		cout << "倒入杯中！" << endl;
//	}
//	virtual void addinto()
//	{
//		cout << "加入佐料！！" << endl;
//	}
//};
//
//int main()
//{
//	Base *b = new coffee("雀巢");
//	b->makedrink();
//	
//	delete b;
//	b = NULL;
//	return 0;
//}


//多态案例3：电脑组装

class Cpu
{
public:
	virtual void cpu() = 0;
};
class Intelcpu:public Cpu
{
public: 
	virtual void cpu()
	{
		cout << "这是Intel公司生产的cpu"<< endl;
	}
};
class Lenovocpu :public Cpu
{
public:
	virtual void cpu()
	{
		cout << "这是Lenovo公司生产的cpu"<< endl;
	}
};

class Xianka
{
public:
	virtual void xianka() = 0;
};
class Intelxianka:public Xianka
{
public:
	virtual void xianka()
	{
		cout << "这是Intel公司生产的显卡" << endl;
	}
};
class Lenovoxianka:public Xianka
{
public:
	virtual void xianka()
	{
		cout << "这是Lenovo公司生产的显卡" << endl;
	}
};

class Chutiao
{
public:
	virtual void chutiao() = 0;
};
class Intelchutiao :public Chutiao
{
public:
	virtual void chutiao()
	{
		cout << "这是Intel公司的内存条" << endl;
	}
};
class Lenovochutiao :public Chutiao
{
public:
	virtual void chutiao()
	{
		cout << "这是Lenovo公司的内存条" << endl;
	}
};

class computer
{
public:
	computer(Cpu* cpu, Xianka* xianka, Chutiao* chutiao)
	{
		cc = cpu;
		xx = xianka;
		tt = chutiao;
	}
	~computer()
	{
		if (cc != NULL)
		{
			delete cc;
			cc = NULL;
		}
		if (xx != NULL)
		{
			delete xx;
			xx = NULL;
		}
		if (tt != NULL)
		{
			delete tt;
			tt = NULL;
		}
	}
	void work()
	{
		cc->cpu();
		xx->xianka();
		tt->chutiao();
	}
private:
	Cpu* cc;
	Xianka* xx;
	Chutiao* tt;
};

int main()
{
	Cpu* intelcpu = new Intelcpu;
	Xianka* xiankan = new Lenovoxianka;
	Chutiao* intelchutiao = new Intelchutiao;
	computer*  c1=new computer(intelcpu, xiankan, intelchutiao);
	c1->work();
	delete c1;
	c1 = NULL;
	return 0; 
}