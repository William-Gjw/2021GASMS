
#include "classPeople.h"

/*
* ========================
	ϵͳ����Ա��SystemAdministrator

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
//��ʾ����Ա�Ӳ˵�
void SystemAdministrator::showMenu()
{
	cout << endl;
	cout << "��ӭ����Ա��" << this->name << " ��¼��" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|             1.���ϵͳ����Ա�˺�            |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              2.���ѧ���û��˺�             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              3.¼��ѧ��������Ϣ             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              4.�޸�ѧ��������Ϣ             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              5.ɾ��ѧ��������Ϣ             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              6.ͳ������ѧ����Ϣ             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  0.ע����¼                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "����������ѡ��";
}

//���ϵͳ����Ա�˺�
void SystemAdministrator::addOperator()
{

}

//���ѧ���û��˺�
void SystemAdministrator::addStudent()
{

}

//¼��ѧ��������Ϣ
void SystemAdministrator::addStudentInfo()
{
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
}

//�޸�ѧ��������Ϣ
void SystemAdministrator::modifyStudentInfo()
{

}

//ɾ��ѧ��������Ϣ
void SystemAdministrator::deleteStudentInfo()
{

}

//ͳ������ѧ����Ϣ
void SystemAdministrator::sortStudentInfo()
{

}


/*
* ========================
	ϵͳ����Ա��SystemOperator

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
//��ʾ����Ա�Ӳ˵�
void SystemOperator::showMenu()
{
	cout << endl;
	cout << "��ӭ����Ա��" << this->name << " ��¼��" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              1.���ѧ���û��˺�             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              2.¼��ѧ��������Ϣ             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              3.ͳ������ѧ����Ϣ             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  0.ע����¼                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "����������ѡ��";
}

//���ѧ���û��˺�
void SystemOperator::addStudent()
{

}

//¼��ѧ��������Ϣ
void SystemOperator::addStudentInfo()
{

}

//ͳ������ѧ����Ϣ
void SystemOperator::sortStudentInfo()
{

}


/*
* ========================
	ѧ����Student

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
//��ʾѧ���Ӳ˵�
void Student::showMenu()
{
	cout << endl;
	cout << "��ӭѧ����" << this->name << "��¼��" << endl;
	cout << "\t\t ---------------------------------------------\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|              1.ͳ������ѧ����Ϣ             |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t|                  0.ע����¼                 |\n";
	cout << "\t\t|                                             |\n";
	cout << "\t\t ---------------------------------------------\n";
	cout << "����������ѡ��";
}

//ͳ������ѧ����Ϣ
void Student::sortStudentInfo()
{

}