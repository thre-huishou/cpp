#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

class myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};
//accumulate
int main()
{
	vector<int> v1;
	v1 = { 1,2,3,4,5,6,7 };
	int num=accumulate(v1.begin(), v1.end(), 1);
	cout << num << endl;


	//fill
	//fill(v1.begin(), v1.end()-1 , 1);
	//for_each(v1.begin(), v1.end(), myprint());

	//set_intersection
	vector<int> v2 = { 4,5,6,7,8,9,10 };

	//����
	vector<int> v3;
	v3.resize(v1.size() < v2.size() ? v1.size() : v2.size());
	//vector<int>::iterator it=set_intersection(v1.begin(),v1.end(), v2.begin(),v2.end(), v3.begin());
	//for_each(v3.begin(), it, myprint());//����������ʹ���󽻼��ķ��ص�����

	//����
	//vector<int> v4;
	//v4.resize(v1.size() + v2.size());
	//vector<int>::iterator itt = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v4.begin());
	//for_each(v4.begin(), itt, myprint());

	//�
	vector<int> v5;
	//v1�����v2�Ĳ,��v1�м�ȥ����
	v5.resize(v1.size() < v2.size() ? v2.size() : v1.size());
	vector<int>::iterator ittt = set_difference( v2.begin(), v2.end(),v1.begin(), v1.end(), v5.begin());
	for_each(v5.begin(), ittt, myprint());
	return 0;
}