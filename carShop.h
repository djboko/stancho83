
#pragma once
#include <iostream>
#include "car.h"
#include <string>
using namespace std;

class carShop
{
private:
	string m_name; //��� �� ��������� 
	int m_br; //���� ���������� 
	CCar *m; //�������� �� ���������� ����� ��� ����������
	

public:
	carShop();//����������� �� ������������
	carShop(string, int); //����������� � ���������
	~carShop() { delete []m; }//����������

	void OnAdd();//������ ��� ��������� � ������        /////////////////
	void OnDel();//������� ��������� �� ����� �� ��������        /////////
	void OnPrint();//��������� ������� �� ������ ����������  � ������ ////////////
	int ifShop(int); //�� ������� ����� �� �������� ��������� ������� �� ����      ///////
	int br_access() { return m_br; }//����� �� ������ �� ���� �� ������������
	void PrintAutoEngine();            /// �������� ������������ �� ����� �� �������� 
	void min_km();                    /// ���� � ������� ������
	void max_price();                    // ���-������� ���� 

};
