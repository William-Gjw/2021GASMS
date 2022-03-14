#include <iostream>
using namespace std;
#include <fstream>
#include "globalFile.h"
#include "classPeople.h"
#include <vector>

//��ʾ���˵�����
void mainMenu();

//ʵ�ֵ�¼��֤
void login(int type);
//ʵ�ֹ���Ա�˵�����
void adminMenu(SystemAdministrator& sa);
//ʵ�ֲ���Ա�˵�����
void operatorMenu(SystemOperator& so);
//ʵ��ѧ���˵�����
void studentMenu(Student& st);

vector<Student>v;

int main()
{
	int select = 0; //���ڽ����û���ѡ��
	while (1)
	{
		mainMenu();
		cin >> select;
		switch (select)
		{
		case 1: //ϵͳ����Ա���
			login(1);
			break;
		case 2: //ϵͳ����Ա���
			login(2);
			break;
		case 3: //ѧ���û����
			login(3);
			break;
		case 0:
			cout << "��ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "�����������������룡" << endl;
			break;
		}
	}
}

//��ʾ���˵�����
void mainMenu()
{
	cout << endl;
	cout << "=======================��ӭʹ��2021�о��������ɼ�����ϵͳ=======================" << endl;
	cout << endl << "��ѡ��������ݣ�" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                 1.ϵͳ����Ա                |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                 2.ϵͳ����Ա                |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  3.ѧ���û�                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                    0.�˳�                   |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "����������ѡ��";
}

/*
	login(int type)ʵ�ֵ�¼��֤
	�����ļ�data1.txt�е��û�������������û���֤�����벻ͬ��ݵ��Ӳ˵�
	���������ͣ����ڽ����û����ͣ�����Ա������Ա��ѧ����
	����ֵ����

*/
void login(int type)
{
	//��ȡ�ļ�data1.txt
	ifstream ifs(USERACCOUNT, ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		return;
	}
	//�ж��û�����
	if (type == 1)
	{
		//����Ա
		string name;
		string pwd;
		while (1)
		{
			cout << "���������Ա�û�����";
			cin >> name;
			cout << "���������룺";
			cin >> pwd;

			int fType; //���ڱ�����ļ��ж�ȡ���û�����
			string fUsername; //���ڱ�����ļ��ж�ȡ���û���
			string fPwd; //���ڱ�����ļ��ж�ȡ������
			
			//�����ļ�ָ�뷵�ص��ļ�ͷ
			ifs.clear(); //end of fileʱ��seek����Ч�ģ�������clear
			ifs.seekg(0);

			while (ifs >> fType && ifs >> fUsername && ifs >> fPwd)
			{
				if (fType == type && fUsername == name && fPwd == pwd)
				{
					cout << "��¼�ɹ���" << endl;
					ifs.close();
					system("pause");
					system("cls");
					//�������Ա�Ӳ˵�
					SystemAdministrator sa(name, pwd);
					adminMenu(sa);

					return;
				}
				//cout << fType << " " << fUsername << " " << fPwd << endl;
			}
			cout << "�û������������" << endl;
			cout << "��ѡ��1-���� 2-�������˵�" << endl;
			int select;
			cin >> select;
			if (select != 1)
			{
				break;
			}

		}	
	}
	else if (type == 2)
	{
		//����Ա
		string name;
		string pwd;
		while (1)
		{
			cout << "���������Ա�û�����";
			cin >> name;
			cout << "���������룺";
			cin >> pwd;

			int fType; //���ڱ�����ļ��ж�ȡ���û�����
			string fUsername; //���ڱ�����ļ��ж�ȡ���û���
			string fPwd; //���ڱ�����ļ��ж�ȡ������

			//�����ļ�ָ�뷵�ص��ļ�ͷ
			ifs.clear(); //end of fileʱ��seek����Ч�ģ�������clear
			ifs.seekg(0);

			while (ifs >> fType && ifs >> fUsername && ifs >> fPwd)
			{
				if (fType == type && fUsername == name && fPwd == pwd)
				{
					cout << "��¼�ɹ���" << endl;
					ifs.close();
					system("pause");
					system("cls");
					//�������Ա�Ӳ˵�
					SystemOperator so(name, pwd);
					operatorMenu(so);

					return;
				}
				//cout << fType << " " << fUsername << " " << fPwd << endl;
			}
			cout << "�û������������" << endl;
			cout << "��ѡ��1-���� 2-�������˵�" << endl;
			int select;
			cin >> select;
			if (select != 1)
			{
				break;
			}
		}
	}
	else if (type == 3)
	{
		//ѧ��
		string name;
		string pwd;
		while (1)
		{
			cout << "������ѧ���û�����";
			cin >> name;
			cout << "���������룺";
			cin >> pwd;

			int fType; //���ڱ�����ļ��ж�ȡ���û�����
			string fUsername; //���ڱ�����ļ��ж�ȡ���û���
			string fPwd; //���ڱ�����ļ��ж�ȡ������

			//�����ļ�ָ�뷵�ص��ļ�ͷ
			ifs.clear(); //end of fileʱ��seek����Ч�ģ�������clear
			ifs.seekg(0);

			while (ifs >> fType && ifs >> fUsername && ifs >> fPwd)
			{
				if (fType == type && fUsername == name && fPwd == pwd)
				{
					cout << "��¼�ɹ���" << endl;
					ifs.close();
					system("pause");
					system("cls");
					//�������Ա�Ӳ˵�
					Student st(name, pwd);
					studentMenu(st);

					return;
				}
				//cout << fType << " " << fUsername << " " << fPwd << endl;
			}
			cout << "�û������������" << endl;
			cout << "��ѡ��1-���� 2-�������˵�" << endl;
			int select;
			cin >> select;
			if (select != 1)
			{
				break;
			}
		}
	}
	system("pause");
	system("cls");
}

/*
	adminMenu(SystemAdministrator& sa)ʵ�ֹ���Ա�Ӳ˵��Ĺ���


*/
void adminMenu(SystemAdministrator& sa)
{
	int select = 0; //���ڽ����û���ѡ��

	while (1)
	{
		//��ʾ����Ա�Ӳ˵�
		sa.showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //ϵͳ����Ա���
			break;
		case 2: //ϵͳ����Ա���
			break;
		case 3: //ѧ���û����
			break;
		case 0:
			cout << "ע���ɹ���" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "�����������������룡" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
}

/*
	operatorMenu(SystemAdministrator& sa)ʵ�ֹ���Ա�Ӳ˵��Ĺ���


*/
void operatorMenu(SystemOperator& so)
{
	int select = 0; //���ڽ����û���ѡ��

	while (1)
	{
		//��ʾ����Ա�Ӳ˵�
		so.showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //ϵͳ����Ա���
			break;
		case 2: //ϵͳ����Ա���
			break;
		case 3: //ѧ���û����
			break;
		case 0:
			cout << "ע���ɹ���" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "�����������������룡" << endl;
			break;
		}
		system("pause");
		system("cls");
	}


}

/*
	studentMenu(SystemAdministrator& sa)ʵ�ֹ���Ա�Ӳ˵��Ĺ���


*/
void studentMenu(Student& st)
{
	int select = 0; //���ڽ����û���ѡ��

	while (1)
	{
		//��ʾ����Ա�Ӳ˵�
		st.showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //ϵͳ����Ա���
			break;
		case 2: //ϵͳ����Ա���
			break;
		case 3: //ѧ���û����
			break;
		case 0:
			cout << "ע���ɹ���" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "�����������������룡" << endl;
			break;
		}
		system("pause");
		system("cls");
	}


}


