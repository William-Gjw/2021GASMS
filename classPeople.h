#pragma once
#include <iostream>
using namespace std;




//ϵͳ����Ա��
class SystemAdministrator
{
public:
	SystemAdministrator();
	SystemAdministrator(string name, string pwd);
	//��ʾ����Ա�Ӳ˵�
	void showMenu();

	//���ϵͳ����Ա�˺�
	void addOperator();

	//���ѧ���û��˺�
	void addStudent();

	//¼��ѧ��������Ϣ
	void addStudentInfo();

	//�޸�ѧ��������Ϣ
	void modifyStudentInfo();

	//ɾ��ѧ��������Ϣ
	void deleteStudentInfo();

	//ͳ������ѧ����Ϣ
	void sortStudentInfo();

	//����Ա�û�������
	string name;
	string pwd;

};

//ϵͳ����Ա��
class SystemOperator
{
public:
	SystemOperator();
	SystemOperator(string name, string pwd);
	//��ʾ����Ա�Ӳ˵�
	void showMenu();

	//���ѧ���û��˺�
	void addStudent();

	//¼��ѧ��������Ϣ
	void addStudentInfo();

	//ͳ������ѧ����Ϣ
	void sortStudentInfo();

	//����Ա�û�������
	string name;
	string pwd;
};

//ѧ����
class Student
{
public:
	Student();
	Student(string name, string pwd);
	//��ʾѧ���Ӳ˵�
	void showMenu();

	//ͳ������ѧ����Ϣ
	void sortStudentInfo();

	string sId;//���Կ���
	string sName; //����
	string instituteName; //����ѧԺ
	int type; //������� 1-ѧ˶ 2-ר˶ 3-��ȫ
	double common1; //������1�ɼ�
	double common2; //������2�ɼ�
	double profess1; //רҵ��1�ɼ�
	double profess2; //רҵ��2�ɼ�
	double firstScore; //�����ܷ�
	double secondScore; //���Գɼ�
	double spokenScore; //����ɼ�
	double TotalScore; //�ۺϳɼ�

	//ѧ���û�������
	string name;
	string pwd;
};

