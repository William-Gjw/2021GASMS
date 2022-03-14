#include <iostream>
using namespace std;
#include <fstream>
#include "globalFile.h"
#include "classPeople.h"
#include <vector>

//显示主菜单函数
void mainMenu();

//实现登录验证
void login(int type);
//实现管理员菜单功能
void adminMenu(SystemAdministrator& sa);
//实现操作员菜单功能
void operatorMenu(SystemOperator& so);
//实现学生菜单功能
void studentMenu(Student& st);

vector<Student>v;

int main()
{
	int select = 0; //用于接收用户的选择
	while (1)
	{
		mainMenu();
		cin >> select;
		switch (select)
		{
		case 1: //系统管理员身份
			login(1);
			break;
		case 2: //系统操作员身份
			login(2);
			break;
		case 3: //学生用户身份
			login(3);
			break;
		case 0:
			cout << "欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			break;
		}
	}
}

//显示主菜单函数
void mainMenu()
{
	cout << endl;
	cout << "=======================欢迎使用2021研究生招生成绩管理系统=======================" << endl;
	cout << endl << "请选择您的身份：" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                 1.系统管理员                |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                 2.系统操作员                |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  3.学生用户                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                    0.退出                   |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "请输入您的选择：";
}

/*
	login(int type)实现登录验证
	根据文件data1.txt中的用户名和密码进行用户验证，进入不同身份的子菜单
	参数：整型，用于接收用户类型（管理员、操作员和学生）
	返回值：无

*/
void login(int type)
{
	//读取文件data1.txt
	ifstream ifs(USERACCOUNT, ios::in);

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		return;
	}
	//判断用户类型
	if (type == 1)
	{
		//管理员
		string name;
		string pwd;
		while (1)
		{
			cout << "请输入管理员用户名：";
			cin >> name;
			cout << "请输入密码：";
			cin >> pwd;

			int fType; //用于保存从文件中读取的用户类型
			string fUsername; //用于保存从文件中读取的用户名
			string fPwd; //用于保存从文件中读取的密码
			
			//将读文件指针返回到文件头
			ifs.clear(); //end of file时，seek是无效的，必须先clear
			ifs.seekg(0);

			while (ifs >> fType && ifs >> fUsername && ifs >> fPwd)
			{
				if (fType == type && fUsername == name && fPwd == pwd)
				{
					cout << "登录成功！" << endl;
					ifs.close();
					system("pause");
					system("cls");
					//进入管理员子菜单
					SystemAdministrator sa(name, pwd);
					adminMenu(sa);

					return;
				}
				//cout << fType << " " << fUsername << " " << fPwd << endl;
			}
			cout << "用户名或密码错误！" << endl;
			cout << "请选择：1-重试 2-返回主菜单" << endl;
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
		//操作员
		string name;
		string pwd;
		while (1)
		{
			cout << "请输入操作员用户名：";
			cin >> name;
			cout << "请输入密码：";
			cin >> pwd;

			int fType; //用于保存从文件中读取的用户类型
			string fUsername; //用于保存从文件中读取的用户名
			string fPwd; //用于保存从文件中读取的密码

			//将读文件指针返回到文件头
			ifs.clear(); //end of file时，seek是无效的，必须先clear
			ifs.seekg(0);

			while (ifs >> fType && ifs >> fUsername && ifs >> fPwd)
			{
				if (fType == type && fUsername == name && fPwd == pwd)
				{
					cout << "登录成功！" << endl;
					ifs.close();
					system("pause");
					system("cls");
					//进入操作员子菜单
					SystemOperator so(name, pwd);
					operatorMenu(so);

					return;
				}
				//cout << fType << " " << fUsername << " " << fPwd << endl;
			}
			cout << "用户名或密码错误！" << endl;
			cout << "请选择：1-重试 2-返回主菜单" << endl;
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
		//学生
		string name;
		string pwd;
		while (1)
		{
			cout << "请输入学生用户名：";
			cin >> name;
			cout << "请输入密码：";
			cin >> pwd;

			int fType; //用于保存从文件中读取的用户类型
			string fUsername; //用于保存从文件中读取的用户名
			string fPwd; //用于保存从文件中读取的密码

			//将读文件指针返回到文件头
			ifs.clear(); //end of file时，seek是无效的，必须先clear
			ifs.seekg(0);

			while (ifs >> fType && ifs >> fUsername && ifs >> fPwd)
			{
				if (fType == type && fUsername == name && fPwd == pwd)
				{
					cout << "登录成功！" << endl;
					ifs.close();
					system("pause");
					system("cls");
					//进入管理员子菜单
					Student st(name, pwd);
					studentMenu(st);

					return;
				}
				//cout << fType << " " << fUsername << " " << fPwd << endl;
			}
			cout << "用户名或密码错误！" << endl;
			cout << "请选择：1-重试 2-返回主菜单" << endl;
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
	adminMenu(SystemAdministrator& sa)实现管理员子菜单的功能


*/
void adminMenu(SystemAdministrator& sa)
{
	int select = 0; //用于接收用户的选择

	while (1)
	{
		//显示管理员子菜单
		sa.showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //系统管理员身份
			break;
		case 2: //系统操作员身份
			break;
		case 3: //学生用户身份
			break;
		case 0:
			cout << "注销成功！" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
}

/*
	operatorMenu(SystemAdministrator& sa)实现管理员子菜单的功能


*/
void operatorMenu(SystemOperator& so)
{
	int select = 0; //用于接收用户的选择

	while (1)
	{
		//显示管理员子菜单
		so.showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //系统管理员身份
			break;
		case 2: //系统操作员身份
			break;
		case 3: //学生用户身份
			break;
		case 0:
			cout << "注销成功！" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			break;
		}
		system("pause");
		system("cls");
	}


}

/*
	studentMenu(SystemAdministrator& sa)实现管理员子菜单的功能


*/
void studentMenu(Student& st)
{
	int select = 0; //用于接收用户的选择

	while (1)
	{
		//显示管理员子菜单
		st.showMenu();
		cin >> select;
		switch (select)
		{
		case 1: //系统管理员身份
			break;
		case 2: //系统操作员身份
			break;
		case 3: //学生用户身份
			break;
		case 0:
			cout << "注销成功！" << endl;
			system("pause");
			system("cls");
			return;
			break;
		default:
			cout << "输入有误，请重新输入！" << endl;
			break;
		}
		system("pause");
		system("cls");
	}


}


