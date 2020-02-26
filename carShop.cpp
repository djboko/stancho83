
#pragma once
#include <iostream>
#include "carShop.h"
#include "car.h"
using namespace std;
int m_br = 0;

carShop::carShop()//����������� �� ������������
{

	cout << "�������� ���� �� ������������ �� �������� " << endl;
	cin >> m_br;
	cout << "                                   ��������� ��  ����� �� ������ ����������.....   " << endl;
	cout<<endl;
	m = new CCar[m_br];

	for (int i = 0; i < m_br; i++)
		m[i].OnRead();
}
carShop::carShop(string n, int b)//����������� �� � ���������
{
	m_name = n;
	m_br = b;
	cout << "��������� ��  ����� �� ������ ����������.....  " << endl;
	cout << endl;
	m = new CCar[m_br];
	for (int i = 0; i < m_br; i++)
		m[i].OnRead();
}

void carShop::OnAdd()//������ ��� ��������� � ������
{
	int i;
	if (m_br)
	{
		m_br++;
		CCar* p = m;
		m = new CCar[m_br];
		for (i = 0; i < m_br - 1; i++)
			m[i] = p[i];
		delete[]p;
		cout << "������ ����� �� ������ ���������: " << endl;
		m[m_br -1].OnRead();
	}
	else
	{
		m_br++;
		m = new CCar;
		cout << "������ ����� �� ����� ���������: " << endl;
		m[0].OnRead();
	}
}
int carShop::ifShop(int m_fnom) //����� ��������� �� ����� �� �������� � ����� �������
{
	for (int i = 0; i < m_br; i++)
		if (m_fnom == m[i].fn_access()) return i;
	return -1;
}

void carShop::OnDel()//������� ��������� �� ����� �� ��������
{
	int m_fnom, i, j;
	cout << "������ ��������� �� ��������� �� ����� �� ��������" << endl;
	cin >> m_fnom;
	if (ifShop(m_fnom) != -1)
	{
		m_br--;
		CCar* p = m;
		m = new CCar[m_br];
		for (j = 0, i = 0; i <= m_br; i++)
			if (p[i].fn_access() != m_fnom)
				m[j++] = p[i];
		delete[]p;

		cout << "����������� � ������ �� �������" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "���� ����� ���������!!!\n";
	}
	cout << endl;
}
void carShop::OnPrint()//��������� ������� �� ������ ����������
{
	cout << "����������: " << m_name << endl;
	for (int i = 0; i < m_br; i++)
	{
		m[i].OnPrint();
		cout << endl;
	}
}

void carShop::PrintAutoEngine()//�� ����� �� ��������  ������� ������ � ���������� ����������
{
	int s;
	cout << "������ nome� �� �������� " << endl;
	cin >> s;

	for (int i = 0; i <= m_br; i++)
	{
		if (m[i].fn_access() == s)
		{
			m[i].OnPrint(); break;
		}	
		 if (m[i].fn_access() != s && i == m_br)
		{
			cout << "���� ��������� � ����� ����� �� �������� :) ";
		}

	}
	cout << endl;
}
void carShop::min_km()
{
	
		CCar min_km = m[0];
		for (int i = 0; i < m_br; i++)
		{
			if (m[i] < min_km)
				min_km = m[i];
		}
		cout << "����� "<< '\t' << '\t' << min_km.name_access() << endl;
		cout << "����� "<< '\t' << '\t' << min_km.model_access() << endl;
		cout << "� �� �������� "<< '\t' << min_km.fn_access() << endl;
		cout << "������  "<<'\t'  << min_km.spec_access() << endl;
		cout << "K�������� "<< '\t' << min_km.course_access() << endl;
		cout << "���� " << '\t' << '\t' << min_km.price_access() << endl;
	
}

void carShop::max_price()   
{
	CCar min_price = m[0];
	for (int i = 0; i < m_br; i++)
	{
		if (m[i] > min_price)
			min_price = m[i];
	}


	cout << "����� " << '\t' << '\t' << min_price.name_access() << endl;
	cout << "����� " << '\t' << '\t' << min_price.model_access() << endl;
	cout << "� �� �������� " << '\t' << min_price.fn_access() << endl;
	cout << "������  " << '\t' << min_price.spec_access() << endl;
	cout << "K�������� " << '\t' << min_price.course_access() << endl;
	cout << "���� " << '\t' << '\t' << min_price.price_access() << endl;


}