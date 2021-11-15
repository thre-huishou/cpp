#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>


//void myprint(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//
//class mysort
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
//
////sort
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<int> v1;
//	v1.push_back(5);
//	v1.push_back(4);
//	v1.push_back(3);
//	v1.push_back(9);
//	v1.push_back(1);
//	v1.push_back(7);
//	/*sort(v1.begin(),v1.end(),mysort());*/
//	//ÄÚ½¨º¯Êý
//	//sort(v1.begin(), v1.end(), greater<int>());
//	//myprint(v1);
//
//	//random_shuffle
//	random_shuffle(v1.begin(), v1.end());
//	myprint(v1);
//	return 0;
//}


//merge

//class myprint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//int main()
//{
//	srand((unsigned int)time(NULL));
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	/*random_shuffle(v1.begin(), v1.end());*/
//	for_each(v1.begin(), v1.end(), myprint());
//	cout << endl;
//	vector<int> v2;
//	cout << "--------------------------" << endl;
//	for (int i = 10; i < 20; i++)
//	{
//		v2.push_back(i);
//	}
//	for_each(v2.begin(), v2.end(), myprint());
//	cout << endl;
//	cout << "merge" << endl;
//	vector<int>v3;
//	v3.resize((v1.size()) + (v2.size()));
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//	for_each(v3.begin(), v3.end(), myprint());
//	return 0;
//}

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//reverse
int main()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;
	reverse(v1.begin(), v1.end());
	for_each(v1.begin(), v1.end(), myprint());
	cout << endl;
	return 0;
}