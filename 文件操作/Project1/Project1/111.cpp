#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
//1、包含头文件
#include<fstream>
using namespace std;


//int main()
//{
//	//2、创建流对象
//	ofstream ofs;
//	//3、打开写入的文件
//	ofs.open("111.txt", ios::out);
//	//4、写文件
//	ofs << "hello world" << endl;
//	ofs << "TMD,真恶心" << endl;
//	//5、关闭文件
//	ofs.close();
//	return 0;
//}

//int main()
//{
//	//char buf[1024] = { 0 };
//	/*string buf;*/
//	char c;
//	//2创建一个读文件的流对象
//	ifstream ifs;
//	//3、打开读文件的文件
//	ifs.open("111.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败！！" << endl;
//		return 0;
//	}
//	//4、读文件
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

//二进制方式读写

//写
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
//	Person p = {"张三",18};
//	ofs.write((const char*)&p, sizeof(p));
//	ofs.close();
//	return 0;
//}

//读
int main()
{
	ifstream ifs;
	ifs.open("222.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "打开失败" << endl;
		return 0;
	}
	Person p;
	ifs.read((char *)&p, sizeof(p));
	cout << "姓名：" << p.m_name << "年龄:" << p.m_age << endl;
	ifs.close();
	return 0;
}