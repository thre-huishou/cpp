#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<string>
using namespace std;


template <class T>
class Arr
{
public:
	Arr(int capacity)
	{
		//cout << "Arr���вι���" << endl;
		m_capacity = capacity;
		m_size = 0;
		m_arr = new T[m_capacity];
	}

	//β�巨
	void Pushback(const T &val)
	{
		//�ж�����
		if (this->m_capacity == this->m_size)
		{
			return;
		}
		this->m_arr[this->m_size] = val;
		this->m_size++;
	}
	//βɾ��
	void Popback()
	{
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}

	//ͨ���±���������е�Ԫ��
	T& operator[](int index)
	{

		return this->m_arr[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_capacity;
	}
	int getSize()
	{
		return this->m_size;
	}

	~Arr()
	{
		if (m_arr != NULL)
		{
			delete[] m_arr;
			m_arr = NULL;
		}
	}
	Arr(const Arr& arr)
	{
		//cout << "Arr�Ŀ�������" << endl;
		m_capacity = arr.m_capacity;
		m_size = arr.m_size;
		m_arr == new T[arr.m_capacity];
		if (m_arr != NULL)
		{
			for (int i = 0; i < arr.m_size; i++)
			{
				m_arr[i] = arr.m_arr[i];
			}
		}
	}
	//operator=��ֹǳ����
	Arr& operator=(const Arr& arr)
	{
		//���ж϶����Ƿ������ݣ���������ͷ�
		//cout << "Arr��=���ع���" << endl;
		if (this->m_arr != NULL)
		{
			delete[] this->m_arr;
			this->m_arr = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->m_arr = new T[arr.m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->m_arr[i] = arr.m_arr[i];
		}
		return *this;
	}

private:
	T * m_arr;
	int m_capacity;
	int m_size;
};