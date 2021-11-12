#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<string>


//int main()
//{
//	//string的构造函数
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


////string的赋值
////1、string& operator=(const char *s);    //char*类型字符串，赋值给当前的字符串
////2、string& operator=(const string &s);   //把字符串s赋值给当前的字符串
////3、string& operator=(char c);           //字符赋值给当前的字符串
////4、string& assign(const char *s);       //把字符串s赋值给当前的字符串
////5、string& assign(const char *s, int n);  //把字符串s的前n个字符串给当前的字符串
////6、string& assign(const string &s);      //把字符串s赋给当前字符串
////7、string & assign(int n, char c);       //用n个字符c赋给当前字符串
//
//
//
//int main()
//{
//	//1、
//	string s1 = "hello world";
//	cout << s1 << endl;
//	//2、
//	string s2 = s1;
//	cout << s2 << endl;
//	//3、
//	s2 = 'a';
//	cout << s2 << endl;
//	//4、
//	s2.assign(s1, 5);
//	cout << s2 << endl;
//	//5、
//	s2.assign(s1);
//	cout << s2 << endl;
//	//6、
//	s2.assign(10, 'c');
//	cout << s2 << endl;
//	return 0;
//}


////string字符串拼接:实现在字符串末尾拼接字符串
//string& operator+=(const char* str);           //重载+=符号
//string& operator+=(const char c);           //重载+=运算符
//string & operator+=(const string& str);          //重载+=运算符
//string& append(const char*s)；           //把字符串s连接到当前字符串末尾
//string& append(const char *s, int n);           //把字符串s的前n个字符连接到当前字符串末尾
//string& append(const string &s);       //t同operaator+=(const string& str)
//string& append(const string &s ,int pos, int n)  //字符串s中从pos开始的n个字符连接到字符串的末尾,下标从0算



//int main()
//{
//	string str1 = "hello world";
//	str1 += " 欧耶";
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


////string 查找和替换
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

////字符串比较
//int main()
//{
//	string str1 = "hello world";
//	string str2 = "hello5";
//	cout << str1.compare(str2) << endl;
//	return 0;
//}


//字符存取
//int main()
//{
//	string str1 = "123456789";
//	cout << str1[1] << endl;
//	cout << str1.at(5) << endl;
//	return 0;
//}

//字符串插入/删除
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

////子串获取
//int main()
//{
//	string str1 = "123456789";
//	cout << str1.substr(0, 5) << endl;
//
//	return 0;
//}