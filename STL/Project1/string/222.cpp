#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//int main()
//{
//	//string�Ĺ��캯��
//	string s1;
//	const char* ss = "absjfhf";
//	string s2(ss);
//	string s3(s2);
//	string s4(5, 'c');
//
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	return 0;
//}


////string�ĸ�ֵ
////1��string& operator=(const char *s);    //char*�����ַ�������ֵ����ǰ���ַ���
////2��string& operator=(const string &s);   //���ַ���s��ֵ����ǰ���ַ���
////3��string& operator=(char c);           //�ַ���ֵ����ǰ���ַ���
////4��string& assign(const char *s);       //���ַ���s��ֵ����ǰ���ַ���
////5��string& assign(const char *s, int n);  //���ַ���s��ǰn���ַ�������ǰ���ַ���
////6��string& assign(const string &s);      //���ַ���s������ǰ�ַ���
////7��string & assign(int n, char c);       //��n���ַ�c������ǰ�ַ���
//
//
//
//int main()
//{
//	//1��
//	string s1 = "hello world";
//	cout << s1 << endl;
//	//2��
//	string s2 = s1;
//	cout << s2 << endl;
//	//3��
//	s2 = 'a';
//	cout << s2 << endl;
//	//4��
//	s2.assign(s1, 5);
//	cout << s2 << endl;
//	//5��
//	s2.assign(s1);
//	cout << s2 << endl;
//	//6��
//	s2.assign(10, 'c');
//	cout << s2 << endl;
//	return 0;
//}


////string�ַ���ƴ��:ʵ�����ַ���ĩβƴ���ַ���
//string& operator+=(const char* str);           //����+=����
//string& operator+=(const char c);           //����+=�����
//string & operator+=(const string& str);          //����+=�����
//string& append(const char*s)��           //���ַ���s���ӵ���ǰ�ַ���ĩβ
//string& append(const char *s, int n);           //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ���ĩβ
//string& append(const string &s);       //tͬoperaator+=(const string& str)
//string& append(const string &s ,int pos, int n)  //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����ĩβ,�±��0��



//int main()
//{
//	string str1 = "hello world";
//	str1 += " ŷҮ";
//	cout << str1 << endl;
//	const char * str2 = "142344";
//	str1 += str2;
//	cout << str1 << endl;
//	str1 += 'd';
//	cout << str1 << endl;
//	str1.append(str2);
//	cout << str1 << endl;
//	str1.append(str2, 2);
//	cout << str1 << endl;
//	str1.append(str2);
//	cout << str1 << endl;
//	str1.append(str2, 3, 2);
//	cout << str1 << endl;
//	return 0;
//}


////string ���Һ��滻
//int main()
//{
//	string str1 = "hello world hello ";
//	string str2 = "ll";
//	cout<<str1.find("wor")<<endl;
//	cout << str1.find(str2) << endl;
//	cout << str1.find("world", 0, 1) << endl;
//	cout << str1.find("world", 0, 2) << endl;
//	cout << str1.find('o') << endl;
//
//	cout << str1.rfind(str2) << endl;
//	cout << str1.rfind("ll") << endl;
//	cout << str1.rfind("ll", 19, 2) << endl;
//	cout << str1.rfind('r') << endl;
//
//	cout << str1.replace(0, 4, str2)<< endl;
//	cout << str1.replace(0, 4, "123446778") << endl;
//	return 0;
//}

////�ַ����Ƚ�
//int main()
//{
//	string str1 = "hello world";
//	string str2 = "hello5";
//	cout << str1.compare(str2) << endl;
//	return 0;
//}


//�ַ���ȡ
//int main()
//{
//	string str1 = "123456789";
//	cout << str1[1] << endl;
//	cout << str1.at(5) << endl;
//	return 0;
//}

//�ַ�������/ɾ��
//int main()
//{
//	string str1 = "123456";
//	string str2 = "444";
//	str1.insert(2, str2);
//	cout << str1 << endl;
//	str1.insert(3, "555");
//	cout << str1 << endl;
//	str1.insert(2, 3,'c');
//	cout << str1 << endl;
//	str1.erase(3, 5);
//	cout << str1 << endl;
//	return 0;
//}

////�Ӵ���ȡ
//int main()
//{
//	string str1 = "123456789";
//	cout << str1.substr(0, 5) << endl;
//
//	return 0;
//}