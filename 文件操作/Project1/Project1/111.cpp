#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
//1������ͷ�ļ�
#include<fstream>
using namespace std;


//int main()
//{
//	//2������������
//	ofstream ofs;
//	//3����д����ļ�
//	ofs.open("111.txt", ios::out);
//	//4��д�ļ�
//	ofs << "hello world" << endl;
//	ofs << "TMD,�����" << endl;
//	//5���ر��ļ�
//	ofs.close();
//	return 0;
//}

//int main()
//{
//	//char buf[1024] = { 0 };
//	/*string buf;*/
//	char c;
//	//2����һ�����ļ���������
//	ifstream ifs;
//	//3���򿪶��ļ����ļ�
//	ifs.open("111.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ�ܣ���" << endl;
//		return 0;
//	}
//	//4�����ļ�
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	// }
//
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//	ifs.close();
//	return 0;
//}

//�����Ʒ�ʽ��д

//д
class Person
{
public:
	char m_name[64];
	int m_age;
};
//
//
//int main()
//{
//	ofstream ofs;
//	//ofstream ofs("222.txt", ios::out | ios::binary);
//	ofs.open("222.txt", ios::out | ios::binary);
//	Person p = {"����",18};
//	ofs.write((const char*)&p, sizeof(p));
//	ofs.close();
//	return 0;
//}

//��
int main()
{
	ifstream ifs;
	ifs.open("222.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "��ʧ��" << endl;
		return 0;
	}
	Person p;
	ifs.read((char *)&p, sizeof(p));
	cout << "������" << p.m_name << "����:" << p.m_age << endl;
	ifs.close();
	return 0;
}