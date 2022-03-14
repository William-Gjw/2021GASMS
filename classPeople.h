#pragma once
#include <iostream>
using namespace std;




//系统管理员类
class SystemAdministrator
{
public:
	SystemAdministrator();
	SystemAdministrator(string name, string pwd);
	//显示管理员子菜单
	void showMenu();

	//添加系统操作员账号
	void addOperator();

	//添加学生用户账号
	void addStudent();

	//录入学生基本信息
	void addStudentInfo();

	//修改学生基本信息
	void modifyStudentInfo();

	//删除学生基本信息
	void deleteStudentInfo();

	//统计排序学生信息
	void sortStudentInfo();

	//管理员用户名密码
	string name;
	string pwd;

};

//系统操作员类
class SystemOperator
{
public:
	SystemOperator();
	SystemOperator(string name, string pwd);
	//显示操作员子菜单
	void showMenu();

	//添加学生用户账号
	void addStudent();

	//录入学生基本信息
	void addStudentInfo();

	//统计排序学生信息
	void sortStudentInfo();

	//操作员用户名密码
	string name;
	string pwd;
};

//学生类
class Student
{
public:
	Student();
	Student(string name, string pwd);
	//显示学生子菜单
	void showMenu();

	//统计排序学生信息
	void sortStudentInfo();

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

	//学生用户名密码
	string name;
	string pwd;
};

