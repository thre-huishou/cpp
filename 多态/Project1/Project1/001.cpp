#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//}; 
//
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "è��˵��" << endl;
//	}
//};
//class Dog:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "����˵��" << endl;
//	}
//};
//
////��ַ��󶨣��ڱ���׶�ȷ��������ַ
////������ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣�
//void dospeak(Animal &animal)//�������������������Ķ���
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

//��̬����
//��ͨд��
//���������㷨�����ڴ�����¹��ܣ�����Ҫ��Դ��������޸�.
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

//���ö�̬ʵ�ּ�����
//class Abstract
//{
//public:
//	int m_num1;
//	int m_num2;
//
//	virtual int getresult() = 0;//���麯��
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
//	//��̬ʹ��̫ż��
//	//����ָ���������ָ������
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

////���麯���ͳ�����
//class Base
//{
//public:
//	//���麯��
//	virtual void func() = 0;
//
//};
//
//class Son:public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "��д���麯��" << endl;
//	}
//};
//
//int main()
//{
//	////Base b1;//�������޷�ʵ��������
//	//Base *b = new Base;//����Ҳ�޷�����ʵ��������
//
//	//Son s1;//���಻��д���麯����Ҳ�޷�ʵ��������
//	//Son *s = new Son;
//	Base* b1 = new Son;//����ָ��ָ���������ʵ�ֶ�̬
//	b1->func();
//
//	return 0;
//}

//����2��������Ʒ
//class Base
//{
//public:
//	Base()
//	{
//		cout << "base�Ĺ��캯������" << endl;
//	}
//	virtual ~Base() = 0;//��������,����Ҫ�о���ʵ��
//	//{
//	//	cout << "base��������������" << endl;
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
//	cout << "base��������������" << endl;
//}
//
//class coffee :public Base
//{
//public:
//	coffee(string name)
//	{
//		cout << "coffee���캯������" << endl;
//		m_name = new string(name);
//	}
//	~coffee()
//	{
//		//��̬���಻������������������
//		if (m_name != NULL)
//		{
//			cout << "coffee������������" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	virtual void Boil()
//	{
//		cout << "������ˮ����" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "����"<<*m_name<<"���ȣ���" << endl;
//	}
//	virtual void pour()
//	{
//		cout << "���뱭�У�" << endl;
//	}
//	virtual void addinto()
//	{
//		cout << "����ţ�̺��ǣ���" << endl;
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
//		cout << "������ˮ����" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ����" << endl;
//	}
//	virtual void pour()
//	{
//		cout << "���뱭�У�" << endl;
//	}
//	virtual void addinto()
//	{
//		cout << "�������ϣ���" << endl;
//	}
//};
//
//int main()
//{
//	Base *b = new coffee("ȸ��");
//	b->makedrink();
//	
//	delete b;
//	b = NULL;
//	return 0;
//}


//��̬����3��������װ

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
		cout << "����Intel��˾������cpu"<< endl;
	}
};
class Lenovocpu :public Cpu
{
public:
	virtual void cpu()
	{
		cout << "����Lenovo��˾������cpu"<< endl;
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
		cout << "����Intel��˾�������Կ�" << endl;
	}
};
class Lenovoxianka:public Xianka
{
public:
	virtual void xianka()
	{
		cout << "����Lenovo��˾�������Կ�" << endl;
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
		cout << "����Intel��˾���ڴ���" << endl;
	}
};
class Lenovochutiao :public Chutiao
{
public:
	virtual void chutiao()
	{
		cout << "����Lenovo��˾���ڴ���" << endl;
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