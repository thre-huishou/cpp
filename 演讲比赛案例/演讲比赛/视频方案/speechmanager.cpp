#define _CRT_SECURE_NO_WARNINGS 1
#include"speechmanager.h"

//构造函数
SpeechManager::SpeechManager()
{
	this->initspeech();
	this->createspeaker();
	this->load_history();
}

//析构函数
SpeechManager::~SpeechManager()
{

}

void SpeechManager::shoemeau()
{
	cout << "**************************************************" << endl;
	cout << "***************  欢迎参加演讲比赛  ***************" << endl;
	cout << "***************   1.开始演讲比赛   ***************" << endl;
	cout << "***************   2.查看往届记录   ***************" << endl;
	cout << "***************   3.清空比赛记录   ***************" << endl;
	cout << "***************   0.退出比赛程序   ***************" << endl;
	cout << "**************************************************" << endl;
	cout << endl;
}

void SpeechManager::initspeech()
{
	//容器都是空
	v1.clear();
	v2.clear();
	v3.clear();
	m_speaker.clear();
	m_index = 1;
	//清空记录容器
	m_his.clear();
}


void SpeechManager::createspeaker()
{
	string name = "ABCDEFGHIJKL";
	string m = "选手";
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
	cout << "第<<" << this->m_index << ">> 轮比赛选手正在抽签 " << endl;
	cout << "----------------------------" << endl;
	cout << "抽签结果如下：" << endl;
	if (this->m_index == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());

		//打印
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << "选手编号:" << *it << " 选手姓名:" << this->m_speaker.at(*it).m_name << endl;
		}

	}
	else
	{
		//第二轮比赛
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator itt = v2.begin(); itt != v2.end(); itt++)
		{
			cout << "选手编号:" << *itt << " 选手姓名:" << this->m_speaker.at(*itt).m_name << endl;
		}
	}
	cout << "-----------------------------" << endl;
	system("pause");
	//system("cls");
	cout << endl;
}

void SpeechManager::speech_contest()
{
	cout << "第<<" << this->m_index << ">> 轮比赛正式开始 " << endl;
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
		/*cout << "姓名：" << this->m_speaker[*it].m_name << " 编号：" << *it;*/
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
	/*	cout << "平均分：" << avg << endl;*/
		n++;
		groupscore.insert(make_pair(avg, *it));
		//每6人取前三名
		if (n % 6 == 0)
		{
			cout << "第" << n / 6 << "小组比赛名次:" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupscore.begin(); it != groupscore.end(); it++)
			{
				cout << "选手编号:" << (*it).second <<"姓名："<<this->m_speaker[it->second].m_name<< " 得分:" << (*it).first << endl;
			}
			//取走前三名
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
	cout << "第<<" << this->m_index << ">> 轮比赛结束 " << endl;
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
	cout << "第<<" << this->m_index << ">> 轮比赛晋级名单 " << endl;
	for (vector<int>::iterator it = v_src.begin(); it != v_src.end(); it++)
	{
		cout << "编号：" << *it << " 姓名：" << this->m_speaker[*it].m_name
			<< " 得分：" << this->m_speaker[*it].m_score[this->m_index - 1] << endl;
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
	cout << "保存完成" << endl;
	this->fileIsempty = false;
	
}

void SpeechManager::load_history()
{
	ifstream ifs;
	ifs.open("111.csv", ios::in);
	if (!ifs.is_open())
	{
		this->fileIsempty = true;
		/*cout << "文件不存在" << endl;*/
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		/*cout << "文件为空!"<<endl;*/
		this->fileIsempty = true;
		ifs.close();
		return;
	}

	this->fileIsempty = false;
	ifs.putback(ch);//将上面读取的单个字符再放回来
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
				//没有找到
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
	//1、抽签
	speechdraw();
	//2、比赛
	speech_contest();
	//3、显示晋级结果
	myprint();
	this->m_index++;
	//抽签
	speechdraw();
	//比赛
	speech_contest();
	//显示最终结果
	myprint();
	//保存到文件中
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
		cout << "历史记录为空" << endl;
	}
	else
	{
		for (map<int, vector<string>>::iterator it = m_his.begin(); it != m_his.end(); it++)
		{
			cout << "第" << it->first + 1 << "届冠军编号:" << it->second[0] << " 姓名:" << it->second[1] << " 分数：" << it->second[2] << endl;
			cout << "第" << it->first + 1 << "届亚军编号:" << it->second[3] << " 姓名:" << it->second[4] << " 分数：" << it->second[5] << endl;
			cout << "第" << it->first + 1 << "届季军编号:" << it->second[6] << " 姓名:" << it->second[7] << " 分数：" << it->second[8] << endl;
		}
	}
	system("pause");
	system("cls");
}


void SpeechManager::myclear()
{
	cout << "确认清空?" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;
	int num = 0;
	cin >> num;
	if (num == 1)
	{
		//如果存在、删除文件重新创建
		ofstream ofs("111.csv", ios::trunc);
		ofs.close();

		this->initspeech();
		this->createspeaker();
		this->load_history();

		cout << "清空成功" << endl;
	}
	system("pause");
	system("cls");
}