#define _CRT_SECURE_NO_WARNINGS 1
#include"����ԤԼϵͳ.h"
#include"globalFile.h"
//ϵͳ��飺ѧУ�м������ͬ�Ļ���������ʹ��ʱ�������֡�ײ�����󡱣��ȿ�����һ�׻���ԤԼϵͳ��
/*��ݼ�飺�ֱ����������ʹ�ø�ϵͳ
1��ѧ����������ʹ�û���
2����ʦ�����ѧ��������
3������Ա����ѧ������ʦ�����˺�
*/

/*
������飺
�����ܹ���3��
1��1�Ż���------�������20��
2��2�Ż���------�������50��
3��3�Ż���------�������100��
*/

/*
�����飺
1������Ķ���ÿ���й���Ա�������
2��ѧ������ԤԼδ��һ���ڵĻ���ʹ�ã�ԤԼ������Ϊ��һ�����壬ԤԼʱ��Ҫѡ��ԤԼʱ��Σ����硢���磩
3����ʦ�����ԤԼ������ʵ��������ԤԼͨ�����߲�ͨ��
*/

/*
ϵͳ��������
1�����Ƚ����½���棬��ѡ���½����У�
ѧ��������ʦ������Ա���˳�

2��ÿ����ݶ���Ҫ������֤�󣬽����Ӳ˵�
ѧ����Ҫ���룺ѧ�š���������½����
��ʦ��Ҫ���룺ְ���š���������½����
����Ա��Ҫ���룺����Ա��������½����

3��ѧ�����幦��
����ԤԼ---ԤԼ����
�鿴�����ԤԼ---�鿴�����ԤԼ״̬
�鿴����ԤԼ-----�鿴ȫ��ԤԼ��Ϣ�Լ�ԤԼ״̬
ȡ��ԤԼ---ȡ�������ԤԼ��ԤԼ�ɹ�������е�ԤԼ����ȡ��
ע����½----�˳���½

4����ʦ���幦��
�鿴����ԤԼ----�鿴ȫ��ԤԼ��Ϣ�Լ�ԤԼ״̬��
���ԤԼ----��ѧ����ԤԼ�������
ע����½----�˳���½

5������Ա���幦��
����˺�---���ѧ�������ʦ���˺ţ���Ҫ���ѧ����Ż��߽�ʦְ�����Ƿ��ظ�
�鿴�˺�---����ѡ��鿴ѧ��������ʦ��ȫ����Ϣ
�鿴����---�鿴���л�������Ϣ
���ԤԼ---�������ԤԼ��Ϣ
ע����½---�˳���½
*/


//�����ʦ���Ӳ˵�����
void teachermenu(Person* &tea)
{
	while (true)
	{
		tea->operMenu();
		Teacher* man = (Teacher*)tea;//ǿתΪ����ָ�룬ʹ�����ຯ��
		int select = 0;
		cin >> select;
		switch (select)
		{
		case tea_showallorder:
		{
			man->showAllOrder();
			break;
		}
		case tea_validorder:
		{
			man->validOrder();
			break;
		}
		case tea_exit:
		{
			cout << "ע���ɹ���" << endl;
			delete man;
			system("pause");
			system("cls");
			return;
		}
		default:
		{
			cout << "�����ʽ����" << endl;
			break;
		}
		}
	}
}


//����ѧ����Ա�Ӳ˵�����
void studentmenu(Person* &stu)
{
	while (true)
	{
		stu->operMenu();
		Student* man = (Student*)stu;//ǿתΪ����ָ�룬ʹ�����ຯ��
		int select = 0;
		cin >> select;
		switch (select)
		{
		case apply_order:
		{
			man->applyOrder();
			break;
		}
		case show_my_order:
		{
			man->showMyOrder();
			break;
		}
		case show_all_order:
		{
			man->showAllOrder();
			break;
		}
		case cancel_order:
		{
			man->cancelOrder();
			break;
		}
		case stu_exit:
		{
			cout << "ע���ɹ���" << endl;
			delete man;
			system("pause");
			system("cls");
			return;
		}
		default:
		{
			cout << "�����ʽ����" << endl;
			break;
		}
		}
	}
}

//���������Ա�Ӳ˵�����
void adminmenu(Person * &admin)
{
	while (true)
	{
		//���ù�����Ա�Ӳ˵�
		admin->operMenu();
		Admin* man = (Admin*)admin;//ǿתΪ����ָ�룬ʹ�����ຯ��
		int select = 0;
		cin >> select;
		switch (select)
		{
		case add_person:
		{
			man->addPerson();
			break;
		}
		case show_person:
		{
			man->showPerson();
			break;
		}
		case show_computer:
		{
			man->showComputer();
			break;
		}
		case clear_order:
		{
			man->clearFile();
			break;
		}
		case admin_exit:
		{
			cout << "ע���ɹ���" << endl;
			delete man;
			system("pause");
			system("cls");
			return;
		}
		default:
		{
			cout << "�����ʽ����" << endl;
			break;
		}
		}
	}
}


//��½����
void LoginIn(string filename, int type)
{
	Person* person = NULL;
	ifstream ifs;
	ifs.open(filename, ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}

	//׼�������û���Ϣ
	int id = 0;
	string name;
	string pwd;

	//�ж����
	if (type == 1)
	{
		cout << "���������ѧ�ţ�" << endl;
		cin >> id;
	}
	else if (type == 2)
	{
		cout << "���������ְ���ţ�" << endl;
		cin >> id;
	}
	cout << "������������ƣ�" << endl;
	cin >> name;
	cout << "������������룺" << endl;
	cin >> pwd;
	if (type == 1)
	{
		//ѧ�������֤
		int fid;
		string fname;
		string fpwd;
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			//�Ա�
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "��֤ͨ����" << endl;
				person = new Student(id, name, pwd);
				system("pause");
				system("cls");
				//����ѧ����ݵ��Ӳ˵�
				studentmenu(person);
				return;
			}
		}

	}
	else if (type == 2)
	{
		//��ʦ�������֤
		int fid;
		string fname;
		string fpwd;
		while (ifs >> fid && ifs >> fname && ifs >> fpwd)
		{
			//�Ա�
			if (fid == id && fname == name && fpwd == pwd)
			{
				cout << "��֤ͨ����" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//�����ʦ��ݵ��Ӳ˵�
				teachermenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա�������֤
		string fname;
		string fpwd;
		while ( ifs >> fname && ifs >> fpwd)
		{
			//�Ա�
			if (fname == name && fpwd == pwd)
			{
				cout << "��֤ͨ����" << endl;
				system("pause");
				system("cls");
				person = new Admin(name, pwd);
				//�������Ա��ݵ��Ӳ˵�
				adminmenu(person);
				return;
			}
		}
	}
	cout << "��½ʧ��" << endl;
	system("pause");
	system("cls");

}



int main()
{
	Computer_room_system ss;
	int num = 1;
	while (num)
	{
		ss.main_meau();
		cout << "��������ѡ��";
		cin >> num;
		switch (num)
		{
		case student:
		{

			cout << "ѧ��" << endl;
			LoginIn(STUDENT_FLIE, student);
			break;
		}
		case teacher:
		{
			cout << "��ʦ" << endl;
			LoginIn(TEACHER_FLIE, teacher);
			break;
		}
		case admin:
		{
			cout << "����Ա" << endl;
			LoginIn(ADMIN_FILE, admin);
			break;
		}
		case myexit:
		{
			cout << "�˳�ϵͳ" << endl;
			break;
		}
		default:
			cout << "�����ʽ����ȷ" << endl;
			break;
		}
	}
	
	return 0;
}