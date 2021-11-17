#define _CRT_SECURE_NO_WARNINGS 1
#include"order.h"


Order::Order()
{
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string id;
	string name;
	string room;
	string data;
	string time;
	string status;

	this->m_size = 0;

	while (ifs >> id && ifs >> name && ifs >> room && ifs >> data && ifs >> time && ifs >> status)
	{
		//cout << id << endl;
		//cout << name << endl;
		//cout << room << endl;
		//cout << data << endl;
		//cout << time << endl;
		//cout << status << endl;

		string key;
		string value; 
		map<string, string>m;

		int pos=id.find(":");
		if (pos != -1)
		{
			key = id.substr(0, pos);
			value = id.substr(pos + 1, id.size() - pos - 1);

			m.insert(make_pair(key, value));

		}
		pos = name.find(":");
		if (pos != -1)
		{
			key = name.substr(0, pos);
			value = name.substr(pos + 1, name.size() - pos - 1);

			m.insert(make_pair(key, value));

		}

		pos = room.find(":");
		if (pos != -1)
		{
			key = room.substr(0, pos);
			value = room.substr(pos + 1, room.size() - pos - 1);

			m.insert(make_pair(key, value));

		}

		pos = data.find(":");
		if (pos != -1)
		{
			key = data.substr(0, pos);
			value = data.substr(pos + 1, data.size() - pos - 1);

			m.insert(make_pair(key, value));

		}
		pos = time.find(":");
		if (pos != -1)
		{
			key = time.substr(0, pos);
			value = time.substr(pos + 1, time.size() - pos - 1);

			m.insert(make_pair(key, value));

		}
		pos = status.find(":");
		if (pos != -1)
		{
			key = status.substr(0, pos);
			value = status.substr(pos + 1, status.size() - pos - 1);

			m.insert(make_pair(key, value));

		}
		m_orderData.insert(make_pair(m_size,m));
		m_size++;

	}
	ifs.close();

	//for (map<int, map<string, string>>::iterator it = m_orderData.begin(); it != m_orderData.end(); it++)
	//{
	//	cout << it->first << ";";
	//	for (map<string, string>::iterator itt = it->second.begin(); itt != it->second.end(); itt++)
	//	{
	//		cout << itt->first << ":" << itt->second << " ";
	//	}
	//}
}

void Order::updateorder()
{
	if (this->m_size == 0)
	{
		return;
	}

	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);
	for (int i = 0; i < m_size; i++)
	{
		ofs << "ԤԼѧ��ѧ��:" << this->m_orderData[i]["ԤԼѧ��ѧ��"] << " ";
		ofs << "ԤԼѧ������:" << this->m_orderData[i]["ԤԼѧ������"] << " ";
		ofs << "ԤԼ����:" << this->m_orderData[i]["ԤԼ����"] << " ";
		ofs << "ԤԼ����:" << this->m_orderData[i]["ԤԼ����"] << " ";
		ofs << "ԤԼʱ��:" << this->m_orderData[i]["ԤԼʱ��"] << " ";
		ofs << "ԤԼ״̬:" << this->m_orderData[i]["ԤԼ״̬"] << endl;;
	}

	ofs.close();
}

