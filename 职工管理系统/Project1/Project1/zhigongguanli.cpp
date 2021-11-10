#define _CRT_SECURE_NO_WARNINGS 1
#include"zhigongguanli.h"

guanlixitong::guanlixitong()
{
	ifstream ifs;
	ifs.open("111.txt", ios::in);
	if (!ifs.is_open())
	{
		//cout << "�ļ������ڣ�" << endl;
		this->m_empnum = 0;
		this->m_emparray = NULL;
		this->is_empty = true;
		ifs.close();
		return;
	}
	//�ж��ļ����ڣ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		this->m_empnum = 0;
		this->m_emparray = NULL;
		this->is_empty = true;
		ifs.close();
		return;
	}
	//�ļ� ���ڣ����Ҽ�¼����
	int num = this->get_empnum();
	this->m_empnum = num;
	//���ٿռ�
	this->m_emparray = new worker*[this->m_empnum];
	this->init_emp();
}

guanlixitong::~guanlixitong()
{
	if (this->m_emparray != NULL)
	{
		delete[] this->m_emparray;
		this->m_emparray = NULL;
	}
}

void guanlixitong::showmeau()
{
	cout << "*****************************************************" << endl;
	cout << "**********************ְ������ϵͳ*******************" << endl;
	cout << "***********1-����ְ����Ϣ   2-��ʾְ����Ϣ***********" << endl;
	cout << "***********3-ɾ����ְְ��   4-�޸�ְ����Ϣ***********" << endl;
	cout << "***********5-����ְ����Ϣ   6-����*******************" << endl;
	cout << "***********7-���ϵͳ       0-�˳�����ϵͳ***********" << endl;
}

void guanlixitong::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
}

void guanlixitong::save()
{
	ofstream ofs;
	ofs.open("111.txt", ios::out);
	for (int i = 0; i < this->m_empnum; i++)
	{
		ofs << this->m_emparray[i]->m_id << " "
			<< this->m_emparray[i]->m_name << " "
			<< this->m_emparray[i]->m_dpt_id << endl;
	}
	ofs.close();
}

void guanlixitong::addInfo()
{
	cout << "���������ְ��������" << endl;
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//���
		//��������¿ռ�Ĵ�С
		int newsize = this->m_empnum + addnum;

		worker ** newspace = new worker*[newsize];
		//��ԭ���ռ������ݣ��������¿ռ���
		if (this->m_emparray != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				newspace[i] = this->m_emparray[i];
			}
		}
		//���������
		for (int i = 0; i < addnum; i++)
		{
			int id;
			string name;
			int dselect;
			cout << "������� " << i + 1 << " �ı�ţ�" ;
			cin >> id;
			cout << endl;
			cout << "������� " << i + 1 << " ��������" ;
			cin >> name;
			cout << endl;
			cout << "������� " << i + 1 << " �ĸ�λ��"<<"(0-�ϰ壬1-����2-Ա��)";
			cin >> dselect;
			cout << endl;

			worker* ww = NULL;
			switch (dselect)
			{
			case Sel_Boss:
			{
				ww = new Boss(id, name, dselect);
				break;
			}
			case Sel_Jingli:
			{
				ww = new Jingli(id, name, dselect);
				break;
			}
			case Sel_Employee:
			{
				ww = new Employee(id, name, dselect);
				break;
			}
			default:
				break;
			}
			newspace[this->m_empnum + i] = ww;
		}
		//�ͷ�ԭ�еĿռ�
		delete[] this->m_emparray;
		//�����¿ռ�ָ��
		this->m_emparray = newspace;
		//�����µ�ְ������
		this->m_empnum = newsize;
		cout << "��ӳɹ�" <<addnum<<"�� ְ��"<< endl;
		this->is_empty = false;
		//���浽�ļ���
		this->save();
	}
	else
	{
		cout << "��������" << endl;
	}
}

//���ļ�
void guanlixitong::print()
{
	//���ļ��е����ݣ��浽������
	if (this->is_empty)
	{
		cout << "�ļ�Ϊ�ջ��¼������" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_empnum; i++)
		{
			this->m_emparray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

int guanlixitong::get_empnum()
{
	ifstream ifs;
	ifs.open("111.txt", ios::in);

	int id;
	string name;
	int  did;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
}

void guanlixitong::init_emp()
{
	ifstream ifs;
	ifs.open("111.txt", ios::in);
	int id;
	string name;
	int did;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* wk = NULL;
		if (did == 2)//��ְͨ��
		{
			wk = new Employee(id,name,did);
		}
		else if (did == 1)
		{
			wk = new Jingli(id, name, did);
		}
		else
		{
			wk = new Boss(id, name, did);
		}
		this->m_emparray[index] = wk;
		index++;

	}
	ifs.close();
}

//ɾ��ְ��
void guanlixitong::del_emp()
{
	if (this->is_empty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫɾ��ְ�����:" << endl;
		int id = 0;
		cin >> id;
		int index = this->isexist(id);
		if (index != -1)
		{
			for (int i = index; i < this->m_empnum-1; i++)
			{
				this->m_emparray[i] = this->m_emparray[i + 1];
			}
			this->m_empnum--;
			//ͬ�����µ��ļ���
			this->save();
			cout << "ɾ���ɹ�" << endl;
			
		}
		else
			cout << "ɾ��ʧ�ܣ�δ�ҵ�" << endl;
	}
	system("pause");
	system("cls");
}

//�ж�ְ���Ƿ����
int guanlixitong::isexist(int id)
{
	int index = -1;
	for (int i = 0; i < this->m_empnum; i++)
	{
		if (this->m_emparray[i]->m_id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

void guanlixitong::mod_emp()
{
	if (this->is_empty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ��" << endl;
	}
	else
	{
		cout << "�����޸�ְ���ı��:" << endl;
		int id = 0;
		cin >> id;
		int ret = this->isexist(id);
		if (ret != -1)
		{
			delete this->m_emparray[ret];

			int newid = 0;
			string newname = " ";
			int newdp = 0;

			cout << "�鵽�� " << id << "��ְ������������ְ���ţ�" << endl;
			cin >> newid;
			cout << "��������������" << endl;
			cin >> newname;
			cout << "�������µĲ��ű��:" << endl;
			cout << "0���ϰ�" << endl;
			cout << "1������" << endl;
			cout << "2��Ա��" << endl;
			cin >> newdp;
			worker* w = NULL;
			switch (newdp)
			{
			case Sel_Boss:
			{
				w = new Boss(newid, newname, newdp);
				break;
			}
			case Sel_Jingli:
			{
				w= new Jingli(newid, newname, newdp);
				break;
			}
			case Sel_Employee:
			{
				w = new Employee(newid, newname, newdp);
				break;
			}
			default:
				cout << "�������" << endl;
				break;
			}
			this->m_emparray[ret] = w;
			cout << "�޸ĳɹ�" << endl;
			this->save();
		}
	}
	system("pause");
	system("cls");
}


//����
void guanlixitong::find_emp()
{
	if (this->is_empty)
	{
		cout << "�ļ������ڻ����ļ�Ϊ��" << endl;
		return;
	}
	cout << "������ҷ�ʽ��1������������;2����ְ����Ų��ң���" << endl;
	int num = 0;
	cin >> num;
	switch (num)
	{
	case 1:
	{
		int k = 0;
		string name = " ";
		cout << "������ҵ�ְ��������";
		cin >> name;
		for (int i = 0; i < this->m_empnum; i++)
		{
			if (name == this->m_emparray[i]->m_name)
			{
				this->m_emparray[i]->showInfo();
				k++;
			}
		}
		if (k == 0)
		{
			cout << "���޴���" << endl;
		}
		break;
	}
	case 2:
	{
		int k = 0;
		int id = 0;
		cout << "������ҵ�ְ����ţ�";
		cin >> id;
		for (int i = 0; i < this->m_empnum; i++)
		{
			if (id == this->m_emparray[i]->m_id)
			{
				this->m_emparray[i]->showInfo();
				k++;
			}
		}
		if (k == 0)
		{
			cout << "���޴���" << endl;
		}
		break;
	}

	}
	system("pause");
	system("cls");
}

//����
void guanlixitong::sort_emp()
{
	//���ձ������
	if (this->is_empty)
	{
		cout << "�ļ�Ϊ�ջ����ļ�������" << endl;
		return;
	}
	for (int i = 0; i < this->m_empnum; i++)
	{
		for (int j = 0; j < this->m_empnum - i - 1; j++)
		{
			if (this->m_emparray[j]->m_id > this->m_emparray[j + 1]->m_id)
			{
				worker* tmp = this->m_emparray[j];
				this->m_emparray[j] = this->m_emparray[j + 1];
				this->m_emparray[j + 1] = tmp;
			}
		}
	}
	cout << "����ɹ�" << endl;
	this->save();
	system("pause");
	system("cls");
}

void guanlixitong::clear_emp()
{
	delete[] this->m_emparray;
	this->m_emparray = NULL;
	this->m_empnum = 0;
	this->is_empty = true;
	this->save();
	cout << "����ɹ�" << endl;
	system("pause");
	system("cls");
}