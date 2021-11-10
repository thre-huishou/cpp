#define _CRT_SECURE_NO_WARNINGS 1
#include"zhigongguanli.h"

guanlixitong::guanlixitong()
{
	ifstream ifs;
	ifs.open("111.txt", ios::in);
	if (!ifs.is_open())
	{
		//cout << "文件不存在！" << endl;
		this->m_empnum = 0;
		this->m_emparray = NULL;
		this->is_empty = true;
		ifs.close();
		return;
	}
	//判断文件存在，但是为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		this->m_empnum = 0;
		this->m_emparray = NULL;
		this->is_empty = true;
		ifs.close();
		return;
	}
	//文件 存在，并且记录数据
	int num = this->get_empnum();
	this->m_empnum = num;
	//开辟空间
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
	cout << "**********************职工管理系统*******************" << endl;
	cout << "***********1-增加职工信息   2-显示职工信息***********" << endl;
	cout << "***********3-删除离职职工   4-修改职工信息***********" << endl;
	cout << "***********5-查找职工信息   6-排序*******************" << endl;
	cout << "***********7-清空系统       0-退出管理系统***********" << endl;
}

void guanlixitong::exitsystem()
{
	cout << "欢迎下次使用" << endl;
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
	cout << "请输入添加职工的数量" << endl;
	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//添加
		//计算添加新空间的大小
		int newsize = this->m_empnum + addnum;

		worker ** newspace = new worker*[newsize];
		//将原来空间下数据，拷贝到新空间下
		if (this->m_emparray != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				newspace[i] = this->m_emparray[i];
			}
		}
		//添加新数据
		for (int i = 0; i < addnum; i++)
		{
			int id;
			string name;
			int dselect;
			cout << "请输入第 " << i + 1 << " 的编号：" ;
			cin >> id;
			cout << endl;
			cout << "请输入第 " << i + 1 << " 的姓名：" ;
			cin >> name;
			cout << endl;
			cout << "请输入第 " << i + 1 << " 的岗位："<<"(0-老板，1-经理，2-员工)";
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
		//释放原有的空间
		delete[] this->m_emparray;
		//更改新空间指向
		this->m_emparray = newspace;
		//更新新的职工人数
		this->m_empnum = newsize;
		cout << "添加成功" <<addnum<<"名 职工"<< endl;
		this->is_empty = false;
		//保存到文件中
		this->save();
	}
	else
	{
		cout << "输入有误" << endl;
	}
}

//读文件
void guanlixitong::print()
{
	//将文件中的数据，存到数组中
	if (this->is_empty)
	{
		cout << "文件为空或记录不存在" << endl;
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
		if (did == 2)//普通职工
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

//删除职工
void guanlixitong::del_emp()
{
	if (this->is_empty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		cout << "请输入想要删除职工编号:" << endl;
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
			//同步更新到文件中
			this->save();
			cout << "删除成功" << endl;
			
		}
		else
			cout << "删除失败，未找到" << endl;
	}
	system("pause");
	system("cls");
}

//判断职工是否存在
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
		cout << "文件不存在或者文件为空" << endl;
	}
	else
	{
		cout << "输入修改职工的编号:" << endl;
		int id = 0;
		cin >> id;
		int ret = this->isexist(id);
		if (ret != -1)
		{
			delete this->m_emparray[ret];

			int newid = 0;
			string newname = " ";
			int newdp = 0;

			cout << "查到： " << id << "号职工。请输入新职工号：" << endl;
			cin >> newid;
			cout << "请输入新姓名：" << endl;
			cin >> newname;
			cout << "请输入新的部门编号:" << endl;
			cout << "0、老板" << endl;
			cout << "1、经理" << endl;
			cout << "2、员工" << endl;
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
				cout << "输入错误" << endl;
				break;
			}
			this->m_emparray[ret] = w;
			cout << "修改成功" << endl;
			this->save();
		}
	}
	system("pause");
	system("cls");
}


//查找
void guanlixitong::find_emp()
{
	if (this->is_empty)
	{
		cout << "文件不存在或者文件为空" << endl;
		return;
	}
	cout << "输入查找方式（1、按姓名查找;2、按职工编号查找）：" << endl;
	int num = 0;
	cin >> num;
	switch (num)
	{
	case 1:
	{
		int k = 0;
		string name = " ";
		cout << "输入查找的职工姓名：";
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
			cout << "查无此人" << endl;
		}
		break;
	}
	case 2:
	{
		int k = 0;
		int id = 0;
		cout << "输入查找的职工编号：";
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
			cout << "查无此人" << endl;
		}
		break;
	}

	}
	system("pause");
	system("cls");
}

//排序
void guanlixitong::sort_emp()
{
	//按照编号排序
	if (this->is_empty)
	{
		cout << "文件为空或者文件不存在" << endl;
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
	cout << "排序成功" << endl;
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
	cout << "清零成功" << endl;
	system("pause");
	system("cls");
}