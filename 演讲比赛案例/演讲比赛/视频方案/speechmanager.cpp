#define _CRT_SECURE_NO_WARNINGS 1
#include"speechmanager.h"

//���캯��
SpeechManager::SpeechManager()
{
	this->initspeech();
	this->createspeaker();
	this->load_history();
}

//��������
SpeechManager::~SpeechManager()
{

}

void SpeechManager::shoemeau()
{
	cout << "**************************************************" << endl;
	cout << "***************  ��ӭ�μ��ݽ�����  ***************" << endl;
	cout << "***************   1.��ʼ�ݽ�����   ***************" << endl;
	cout << "***************   2.�鿴�����¼   ***************" << endl;
	cout << "***************   3.��ձ�����¼   ***************" << endl;
	cout << "***************   0.�˳���������   ***************" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
}

void SpeechManager::initspeech()
{
	//�������ǿ�
	v1.clear();
	v2.clear();
	v3.clear();
	m_speaker.clear();
	m_index = 1;
	//��ռ�¼����
	m_his.clear();
}


void SpeechManager::createspeaker()
{
	string name = "ABCDEFGHIJKL";
	string m = "ѡ��";
	for (int i = 0; i < 12; i++)
	{
		Speaker p;
		p.m_name = m + name[i];
		for (int j = 0; j < 2; j++)
		{
			p.m_score[j] = 0;
		}
		v1.push_back(i + 10001);
		m_speaker.insert(make_pair(i + 10001, p));
	}
}


void SpeechManager::speechdraw()
{
	cout << "��<<" << this->m_index << ">> �ֱ���ѡ�����ڳ�ǩ " << endl;
	cout << "----------------------------" << endl;
	cout << "��ǩ������£�" << endl;
	if (this->m_index == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());

		//��ӡ
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << "ѡ�ֱ��:" << *it << " ѡ������:" << this->m_speaker.at(*it).m_name << endl;
		}

	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator itt = v2.begin(); itt != v2.end(); itt++)
		{
			cout << "ѡ�ֱ��:" << *itt << " ѡ������:" << this->m_speaker.at(*itt).m_name << endl;
		}
	}
	cout << "-----------------------------" << endl;
	system("pause");
	//system("cls");
	cout << endl;
}

void SpeechManager::speech_contest()
{
	cout << "��<<" << this->m_index << ">> �ֱ�����ʽ��ʼ " << endl;
	multimap<double, int, greater<double>> groupscore;
	int n = 0;
	vector<int> v_src;
	if (this->m_index == 1)
	{
		v_src = v1;
	}
	else
	{
		v_src = v2;
	}
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		/*cout << "������" << this->m_speaker[*it].m_name << " ��ţ�" << *it;*/
		deque<double> deq;
		for (int j = 0; j < 10; j++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			deq.push_back(score);
			//cout << score << " ";
		}
		//cout << endl;
		sort(deq.begin(), deq.end(), Greater());
		deq.pop_back();
		deq.pop_front();
		/*		for_each(deq.begin(), deq.end(),myprint());*/
		double avg = accumulate(deq.begin(), deq.end(), 0) / (double)deq.size();
		this->m_speaker.at(*it).m_score[this->m_index - 1] = avg;
	/*	cout << "ƽ���֣�" << avg << endl;*/
		n++;
		groupscore.insert(make_pair(avg, *it));
		//ÿ6��ȡǰ����
		if (n % 6 == 0)
		{
			cout << "��" << n / 6 << "С���������:" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end(); it++)
			{
				cout << "ѡ�ֱ��:" << (*it).second <<"������"<<this->m_speaker[it->second].m_name<< " �÷�:" << (*it).first << endl;
			}
			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end() && count < 3; it++, count++)
			{
				if (this->m_index == 1)
				{
					v2.push_back(it->second);
				}
				else
				{
					v3.push_back(it->second);
				}
			}
			groupscore.clear();
		}
	}
	cout << "-----------------------------" << endl;
	cout << "��<<" << this->m_index << ">> �ֱ������� " << endl;
}

void SpeechManager::myprint()
{
	vector<int> v_src;
	if (this->m_index == 1)
	{
		v_src= v2;
	}
	else
	{
		v_src = v3;
	}
	cout << "��<<" << this->m_index << ">> �ֱ����������� " << endl;
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		cout << "��ţ�" << *it << " ������" << this->m_speaker[*it].m_name
			<< " �÷֣�" << this->m_speaker[*it].m_score[this->m_index - 1] << endl;
	}
	system("pause");
}

void SpeechManager::mysave()
{
	ofstream ofs;
	ofs.open("111.csv", ios::out|ios::app);
	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++)
	{
		ofs << *it << ","
			<< m_speaker[*it].m_name << ","
			<< m_speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	ofs.close();
	cout << "�������" << endl;
	this->fileIsempty = false;
	
}

void SpeechManager::load_history()
{
	ifstream ifs;
	ifs.open("111.csv", ios::in);
	if (!ifs.is_open())
	{
		this->fileIsempty = true;
		/*cout << "�ļ�������" << endl;*/
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		/*cout << "�ļ�Ϊ��!"<<endl;*/
		this->fileIsempty = true;
		ifs.close();
		return;
	}

	this->fileIsempty = false;
	ifs.putback(ch);//�������ȡ�ĵ����ַ��ٷŻ���
	string data;
	int index = 0;
	while (ifs >> data)
	{
		/*cout << data << endl;*/

		vector<string> v;
		int pos = -1;
		int start = 0;
		while(1)
		{
			pos=data.find(",", start);
			if (pos == -1)
			{
				break;
				//û���ҵ�
			}
			string tmp = data.substr(start, pos - start);

			/*cout << tmp << endl;*/
			v.push_back(tmp);
			start = pos + 1;
		}
		this->m_his.insert(make_pair(index, v));
		index++;
	}

	ifs.close();
}

void SpeechManager::start_speech()
{
	//1����ǩ
	speechdraw();
	//2������
	speech_contest();
	//3����ʾ�������
	myprint();
	this->m_index++;
	//��ǩ
	speechdraw();
	//����
	speech_contest();
	//��ʾ���ս��
	myprint();
	//���浽�ļ���
	mysave();
	this->initspeech();
	this->createspeaker();
	this->load_history();
	system("pause");
	system("cls");
}

void SpeechManager::read_history()
{
	if (this->fileIsempty)
	{
		cout << "��ʷ��¼Ϊ��" << endl;
	}
	else
	{
		for (map<int, vector<string>>::iterator it = m_his.begin(); it != m_his.end(); it++)
		{
			cout << "��" << it->first + 1 << "��ھ����:" << it->second[0] << " ����:" << it->second[1] << " ������" << it->second[2] << endl;
			cout << "��" << it->first + 1 << "���Ǿ����:" << it->second[3] << " ����:" << it->second[4] << " ������" << it->second[5] << endl;
			cout << "��" << it->first + 1 << "�켾�����:" << it->second[6] << " ����:" << it->second[7] << " ������" << it->second[8] << endl;
		}
	}
	system("pause");
	system("cls");
}


void SpeechManager::myclear()
{
	cout << "ȷ�����?" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;
	int num = 0;
	cin >> num;
	if (num == 1)
	{
		//������ڡ�ɾ���ļ����´���
		ofstream ofs("111.csv", ios::trunc);
		ofs.close();

		this->initspeech();
		this->createspeaker();
		this->load_history();

		cout << "��ճɹ�" << endl;
	}
	system("pause");
	system("cls");
}