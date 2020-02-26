
#pragma once
#include <iostream>
#include "carShop.h"
#include "car.h"
using namespace std;
int m_br = 0;

carShop::carShop()//конструктор по подразбиране
{

	cout << "Въведете броя на автомобилите за добавяне " << endl;
	cin >> m_br;
	cout << "                                   Въвеждане на  данни за новите автомобили.....   " << endl;
	cout<<endl;
	m = new CCar[m_br];

	for (int i = 0; i < m_br; i++)
		m[i].OnRead();
}
carShop::carShop(string n, int b)//конструктор но с параметри
{
	m_name = n;
	m_br = b;
	cout << "Въвеждане на  данни за новите автомобили.....  " << endl;
	cout << endl;
	m = new CCar[m_br];
	for (int i = 0; i < m_br; i++)
		m[i].OnRead();
}

void carShop::OnAdd()//добавя нов автомобил в масива
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
		cout << "Въведи данни за новият автомобил: " << endl;
		m[m_br -1].OnRead();
	}
	else
	{
		m_br++;
		m = new CCar;
		cout << "Въведи данни за новия автомобил: " << endl;
		m[0].OnRead();
	}
}
int carShop::ifShop(int m_fnom) //търси автомобил по номер на двигател и връща индекса
{
	for (int i = 0; i < m_br; i++)
		if (m_fnom == m[i].fn_access()) return i;
	return -1;
}

void carShop::OnDel()//изтрива автомобил по номер на двигател
{
	int m_fnom, i, j;
	cout << "Въведи автомобил за изтриване по номер на двигател" << endl;
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

		cout << "Автомобилът е изтрит от паметта" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << "Няма такъв автомобил!!!\n";
	}
	cout << endl;
}
void carShop::OnPrint()//отпечатва данните на всички автомобили
{
	cout << "Автомобили: " << m_name << endl;
	for (int i = 0; i < m_br; i++)
	{
		m[i].OnPrint();
		cout << endl;
	}
}

void carShop::PrintAutoEngine()//по номер на двигател  извежда списък с намерените автомобили
{
	int s;
	cout << "Въведи nomeр на двигател " << endl;
	cin >> s;

	for (int i = 0; i <= m_br; i++)
	{
		if (m[i].fn_access() == s)
		{
			m[i].OnPrint(); break;
		}	
		 if (m[i].fn_access() != s && i == m_br)
		{
			cout << "Няма автомобил с такъв номер на двигател :) ";
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
		cout << "Марка "<< '\t' << '\t' << min_km.name_access() << endl;
		cout << "Модел "<< '\t' << '\t' << min_km.model_access() << endl;
		cout << "№ на двигател "<< '\t' << min_km.fn_access() << endl;
		cout << "Година  "<<'\t'  << min_km.spec_access() << endl;
		cout << "Kилометри "<< '\t' << min_km.course_access() << endl;
		cout << "Цена " << '\t' << '\t' << min_km.price_access() << endl;
	
}

void carShop::max_price()   
{
	CCar min_price = m[0];
	for (int i = 0; i < m_br; i++)
	{
		if (m[i] > min_price)
			min_price = m[i];
	}


	cout << "Марка " << '\t' << '\t' << min_price.name_access() << endl;
	cout << "Модел " << '\t' << '\t' << min_price.model_access() << endl;
	cout << "№ на двигател " << '\t' << min_price.fn_access() << endl;
	cout << "Година  " << '\t' << min_price.spec_access() << endl;
	cout << "Kилометри " << '\t' << min_price.course_access() << endl;
	cout << "Цена " << '\t' << '\t' << min_price.price_access() << endl;


}