#define _CRT_SECURE_NO_WARNINGS 1
#include"admin.h"

//Ĭ�Ϲ���
Admin::Admin()
{

}
//��������
Admin::Admin(string name, string password)
{
	m_name = name;
	m_pass_word = password;
	this->initvector();

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
Admin::~Admin()
{

}
//�˵�����
void Admin::operMenu()
{
	cout << "��ӭ����Ա��" << this->m_name << "��½��" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           1.����˺�            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           2.�鿴�˺�            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           3.�鿴����            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           4.���ԤԼ            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                |           0.ע����½            |" << endl;
	cout << "                |                                 |" << endl;
	cout << "                 ---------------------------------" << endl;
	cout << "��ѡ�����Ĳ�����" << endl;
}

//ȥ�غ���
bool Admin::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		for (vector<Teacher>::iterator it = vtea.begin(); it != vtea.end(); it++)
		{
			if (it->m_id == id)
			{
				return true;
			}
		}
		return false;
	}
	else
	{
		for (vector<Student>::iterator it = vstu.begin(); it != vstu.end(); it++)
		{
			if (it->m_id == id)
			{
				return true;
			}
		}
		return false;
	}
}

//����˺�
void Admin::addPerson()
{
	cout << "����������˺����ࣺ" << endl;
	cout << "1.��ʦ�˺�." << endl;
	cout << "2.ѧ���˺�." << endl;

	string filename;
	string tip;
	ofstream ofs;

	int num = 0;
	cin >> num;
	if (num == 1)
	{
		filename = TEACHER_FLIE;
		tip = "������ְ���ţ�";
	}
	else
	{
		filename = STUDENT_FLIE;
		tip = "������ѧ�ţ�";
	}
	ofs.open(filename, ios::out | ios::app);
	int id;
	string name;
	string pwd;
	while (true)
	{
		cout << tip << endl;
		cin >> id;
		if (!this->checkRepeat(id, num))
		{
			break;
		}
		cout << "ѧ��/ְ�����ظ������������룺" << endl;
	}
	cout << "����������:" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;
	ofs << id << " " << name << " " << pwd << " " << endl;
	ofs.close();
	if (num == 1)
	{
		Teacher t(id, name, pwd);
		vtea.push_back(t);
	}
	else
	{
		Student s(id, name, pwd);
		vstu.push_back(s);
	}
	//this->initvector();
	cout << "�˺Ŵ����ɹ���" << endl;

	system("pause");
	system("cls");
}

//�鿴�˺�
void Admin::showPerson()
{
	cout << "��ʦ�˺ţ�" << endl;
	for (vector<Teacher>::iterator it = vtea.begin(); it!=vtea.end(); it++)
	{
		cout << "ְ���ţ�" << it->m_id << " ������" << it->m_name << " ���룺" << it->m_pass_word << endl;
	}
	cout << "------------------------------" << endl;
	cout << "ѧ���˺ţ�" << endl;
	for (vector<Student>::iterator it = vstu.begin(); it != vstu.end(); it++)
	{
		cout << "ѧ�ţ�" << it->m_id << " ������" << it->m_name << " ���룺" << it->m_pass_word << endl;
	}
	system("pause");
	system("cls");
}

//�鿴������Ϣ
void Admin::showComputer()
{
	for (vector<computerroom>::iterator it = this->v_com.begin(); it != v_com.end(); it++)
	{
		cout << "��" << it->m_id << "�Ż�������߿�����" << it->m_capacity << "��" << endl;
	}
	system("pause");
	system("cls");
}

//���ԤԼ��¼
void Admin::clearFile()
{
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::trunc);
	cout << "�ɹ������¼" << endl;
	ofs.close();
	system("pause");
	system("cls");
}

//��ʼ������
void Admin::initvector()
{
	//��ȡѧ���ļ��е���Ϣ
	ifstream ifs;
	ifs.open(STUDENT_FLIE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		ifs.close();
		return;
	}
	vstu.clear();
	vtea.clear();

	Student s;
	while (ifs >> s.m_id&&ifs >> s.m_name&&ifs >> s.m_pass_word)
	{
		vstu.push_back(s);
	}
	cout << "��ǰѧ������Ϊ��" << vstu.size() << endl;
	ifs.close();

	//��ȡ��ʦ�ļ��е���Ϣ
	ifs.open(TEACHER_FLIE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		ifs.close();
		return;
	}

	Teacher t;
	while (ifs >> t.m_id&&ifs >> t.m_name&&ifs >> t.m_pass_word)
	{
		vtea.push_back(t);
	}
	cout << "��ǰ��ʦ����Ϊ��" << vtea.size() << endl;
	ifs.close();
}
