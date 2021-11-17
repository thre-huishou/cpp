#define _CRT_SECURE_NO_WARNINGS 1
#include"student.h"


////��ʼ��ԤԼ
//void Student::initorder()
//{
//	ifstream ifs;
//	ifs.open(ORDER_FILE, ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		ifs.close();
//		return;
//	}
//
//	Order o;
//	while (ifs >> o.m_id&&ifs >> o.m_name&&ifs >> o.m_room&&ifs >> o.m_data&&ifs >> o.m_time&&ifs>>o.m_status)
//	{
//		v_order.push_back(o);
//	}
//	ifs.close();
//}
//Ĭ�Ϲ���
Student::Student()
{

}
//��������
Student::Student( int id,string name, string password)
{
	m_id = id;
	m_name = name;
	m_pass_word = password;

	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		ifs.close();
		return;
	}
	computerroom rr;
	while (ifs >> rr.m_id&&ifs >> rr.m_capacity)
	{
		v_com.push_back(rr);
	}
	ifs.close();

}
//��������
Student::~Student()
{

}
//�˵�����
void Student::operMenu()
{
	cout << "��ӭѧ����" << this->m_name << "��½��" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           1.����ԤԼ            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |         2.�鿴��ǰԤԼ          |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |         3.�鿴����ԤԼ          |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           4.ȡ��ԤԼ            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           0.ע����½            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "��ѡ�����Ĳ�����" << endl;
}

//����ԤԼ
void Student::applyOrder()
{
	int data=0;
	int time=0;
	int room = 0;
	cout << "�������ŵ�ʱ��Ϊ��һ-���壺����8:00-����10:00" << endl;
	cout << "����������ԤԼ��ʱ�䣺" << endl;
	cout << "1.��һ" << endl;
	cout << "2.�ܶ�" << endl;
	cout << "3.����" << endl;
	cout << "4.����" << endl;
	cout << "5.����" << endl;
	while (true)
	{
		cin >> data;
		if (data >= 1 && data <= 5)
		{
			break;
		}
		cout << "������������������" << endl;
	}
	cout << "������ԤԼ��ʱ��Σ�" << endl;
	cout << "1.����" << endl;
	cout << "2.����" << endl;
	while (true)
	{
		cin >> time;
		if (time >= 1 && time <= 2)
		{
			break;
		}
		cout << "������������������" << endl;
	}
	cout << "������ԤԼ�Ļ����ţ�" << endl;
	for (vector<computerroom>::iterator it = v_com.begin(); it != v_com.end(); it++)
	{
		cout << it->m_id << "�Ż������������������" << it->m_capacity << endl;
	}
	while (true)
	{
		cin >> room;
		if (room >= 1 && room <= 3)
		{
			break;
		}
		cout << "������������������" << endl;
	}
	//�ж�����ʱ���ͻ
	ofstream ofs;
	int statue = 1;
	ofs.open(ORDER_FILE, ios::out | ios::app);
	if (!ofs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		ofs.close();
		return;
	}
	ofs << "ԤԼѧ��ѧ��:" << this->m_id << " "
		<< "ԤԼѧ������:" << this->m_name << " "
		<< "ԤԼ����:" << room << " "
		<< "ԤԼ����:" << data << " "
		<< "ԤԼʱ��:" << time << " "
		<< "ԤԼ״̬:" << statue << endl;

	cout << "ԤԼ�ɹ�" << endl;
	system("pause");
	system("cls");

}

//�鿴��ǰԤԼ
void Student::showMyOrder()
{
	Order o;
	if (o.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;	
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < o.m_size; i++)
	{
		if (this->m_id == atoi(o.m_orderData[i]["ԤԼѧ��ѧ��"].c_str()))//�ҵ������ԤԼ
		{
			cout << "ԤԼ���ڣ���" << o.m_orderData[i]["ԤԼ����"] << " ;"
				<< "ԤԼʱ�䣺" << ((o.m_orderData[i]["ԤԼʱ��"] == "1") ? "����" : "����") << " ;"
				<< "ԤԼ������" << o.m_orderData[i]["ԤԼ����"]<<" ;" ;
			string status = "״̬��";
			if (o.m_orderData[i]["ԤԼ״̬"] == "1")
			{
				status += "������";
			}
			else if (o.m_orderData[i]["ԤԼ״̬"] == "2")
			{
				status += "������";
			}
			else if(o.m_orderData[i]["ԤԼ״̬"] == "-1")
			{
				status += "ԤԼʧ��";
			}
			else
			{
				status += "��ȡ��";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");

}

//�鿴����ԤԼ
void Student::showAllOrder()
{
	Order o;
	if (o.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}

	for (int i = 0; i < o.m_size; i++)
	{
			cout << "ԤԼѧ��ѧ�ţ�"<< o.m_orderData[i]["ԤԼѧ��ѧ��"]<<" ;"
				<<"ԤԼѧ��������"<< o.m_orderData[i]["ԤԼѧ������"] << " ;"
				<<"ԤԼ���ڣ���" << o.m_orderData[i]["ԤԼ����"] << " ;"
				<< "ԤԼʱ�䣺" << ((o.m_orderData[i]["ԤԼʱ��"] == "1") ? "����" : "����") << " ;"
				<< "ԤԼ������" << o.m_orderData[i]["ԤԼ����"] << " ;";
			string status = "״̬��";
			if (o.m_orderData[i]["ԤԼ״̬"] == "1")
			{
				status += "������";
			}
			else if (o.m_orderData[i]["ԤԼ״̬"] == "2")
			{
				status += "������";
			}
			else if (o.m_orderData[i]["ԤԼ״̬"] == "-1")
			{
				status += "ԤԼʧ��";
			}
			else
			{
				status += "��ȡ��";
			}
			cout << status << endl;
	}
	system("pause");
	system("cls");
}

//ȡ��ԤԼ
void Student::cancelOrder()
{
	//cout << "��ǰԤԼ��Ϣ��" << endl;
	//this->showMyOrder();
	//string data;
	//string time;
	//string room;
	//cout << "����ȡ��ԤԼ�����ڣ�" << endl;
	//cout << "1.��һ" << endl;
	//cout << "2.�ܶ�" << endl;
	//cout << "3.����" << endl;
	//cout << "4.����" << endl;
	//cout << "5.����" << endl;

	Order oo;
	if (oo.m_size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	vector<int> v;
	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼" << endl;
	int index = 1;
	for (int i = 0; i < oo.m_size; i++)
	{
		if (this->m_id == atoi(oo.m_orderData[i]["ԤԼѧ��ѧ��"].c_str()))
		{
			if (oo.m_orderData[i]["ԤԼ״̬"] == "1" || oo.m_orderData[i]["ԤԼ״̬"] == "2")
			{
				v.push_back(i);
				cout << index++ << "��";
				cout << " ԤԼ���ڣ���" << oo.m_orderData[i]["ԤԼ����"];
				cout << " ԤԼʱ�ڣ�" << (oo.m_orderData[i]["ԤԼʱ��"] == "1" ? "����" : "����");
				cout << " ԤԼ������" << oo.m_orderData[i]["ԤԼ����"];
				string status = " ״̬��";
				if (oo.m_orderData[i]["ԤԼ״̬"] == "1")
				{
					status += "�����";
				}
				else
				{
					status += "�����";
				}
				cout << status << endl;
			}
		}
	}
	cout << "������ȡ���ļ�¼��0������" << endl;
	int select = 0;
	
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				oo.m_orderData[v[select - 1]]["ԤԼ״̬"] = "0";
				oo.updateorder();
				cout << "ȡ���ɹ�" << endl;
				system("pause");
				system("cls");
				return;
			}
		}
		else
		{
			cout << "��������" << endl;
		}
	}
}