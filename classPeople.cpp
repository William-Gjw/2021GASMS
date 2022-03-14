
#include "classPeople.h"

/*
* ========================
	系统管理员类SystemAdministrator

* ========================
*/
SystemAdministrator::SystemAdministrator()
{
}
SystemAdministrator::SystemAdministrator(string name, string pwd)
{
	this->name = name;
	this->pwd = pwd;
}
//显示管理员子菜单
void SystemAdministrator::showMenu()
{
	cout << endl;
	cout << "欢迎管理员：" << this->name << " 登录！" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|             1.添加系统操作员账号            |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              2.添加学生用户账号             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              3.录入学生基本信息             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              4.修改学生基本信息             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              5.删除学生基本信息             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              6.统计所有学生信息             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  0.注销登录                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "请输入您的选择：";
}

//添加系统操作员账号
void SystemAdministrator::addOperator()
{

}

//添加学生用户账号
void SystemAdministrator::addStudent()
{

}

//录入学生基本信息
void SystemAdministrator::addStudentInfo()
{
	string sId;//复试考号
	string sName; //姓名
	string instituteName; //报考学院
	int type; //报考类别 1-学硕 2-专硕 3-非全
	double common1; //基础课1成绩
	double common2; //基础课2成绩
	double profess1; //专业课1成绩
	double profess2; //专业课2成绩
	double firstScore; //初试总分
	double secondScore; //复试成绩
	double spokenScore; //口语成绩
	double TotalScore; //综合成绩
}

//修改学生基本信息
void SystemAdministrator::modifyStudentInfo()
{

}

//删除学生基本信息
void SystemAdministrator::deleteStudentInfo()
{

}

//统计排序学生信息
void SystemAdministrator::sortStudentInfo()
{

}


/*
* ========================
	系统操作员类SystemOperator

* ========================
*/
SystemOperator::SystemOperator()
{
}
SystemOperator::SystemOperator(string name, string pwd)
{
	this->name = name;
	this->pwd = pwd;
}
//显示操作员子菜单
void SystemOperator::showMenu()
{
	cout << endl;
	cout << "欢迎操作员：" << this->name << " 登录！" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              1.添加学生用户账号             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              2.录入学生基本信息             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              3.统计所有学生信息             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  0.注销登录                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "请输入您的选择：";
}

//添加学生用户账号
void SystemOperator::addStudent()
{

}

//录入学生基本信息
void SystemOperator::addStudentInfo()
{

}

//统计排序学生信息
void SystemOperator::sortStudentInfo()
{

}


/*
* ========================
	学生类Student

* ========================
*/
Student::Student()
{
}
Student::Student(string name, string pwd)
{
	this->name = name;
	this->pwd = pwd;
}
//显示学生子菜单
void Student::showMenu()
{
	cout << endl;
	cout << "欢迎学生：" << this->name << "登录！" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              1.统计所有学生信息             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  0.注销登录                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "请输入您的选择：";
}

//统计排序学生信息
void Student::sortStudentInfo()
{

}