
#include "car.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

CCar::CCar()//����������� �� ������������
{
	m_name = "";  // ����� �� ���������
	m_model = ""; // �����
	m_numberEngine = 0;    // ����� �� ��������
	m_year = 0;     /// ������ �� ������������
	m_kilometers=0;   //�������� ���������
	m_price = 0;       // ���� �� ����������
}
CCar::CCar(string n,string m, long long f,int s, int c, float p) //����������� � ���������
{
	m_name = n;  // ����� �� ���������
	m_model = m;  // �����
	m_numberEngine = f;  // ����� �� ��������
	m_year=s;          // ������ �� ������������
	m_kilometers=c;      // ���������
	m_price = p;               // ���� 
}

void CCar::OnRead()//������� ������� �� ����������
{
	    cout << endl;
		cin.sync();
		cout << "�������� ����� �� ����������: " << endl;
		cin >> m_name;
		cout << "�������� ����� �� ����������? : " << endl;
		cin >> m_model;
		cout << "�������� ����� �� �������� (� �����) : " << endl;
		cin >> m_numberEngine;
		cout << "������ �� ������������: " << endl;
		cin >> m_year;
		cout << "�������� ��������� �� ����������:  " << endl;
		cin >> m_kilometers;
		cout << "���� �� ����������: " << endl;
		cin >> m_price;
}
void CCar::OnPrint()//��������� ������� �� a�����������
{
	cout << endl;
	cout <<"M����- "<< m_name <<" "<< m_model <<"  � �� ��������: "<< m_numberEngine <<" "<< m_year <<"-� ������ "<< m_kilometers <<"�� "<< m_price<<"��";
}
