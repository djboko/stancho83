
#include "car.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

CCar::CCar()//конструктор по подразбиране
{
	m_name = "";  // марка на автомобил
	m_model = ""; // модел
	m_numberEngine = 0;    // номер на двигател
	m_year = 0;     /// година на производство
	m_kilometers=0;   //изминати километри
	m_price = 0;       // цена на автомобила
}
CCar::CCar(string n,string m, long long f,int s, int c, float p) //конструктор с параметри
{
	m_name = n;  // марка на автомобил
	m_model = m;  // модел
	m_numberEngine = f;  // номер на двигател
	m_year=s;          // година на производство
	m_kilometers=c;      // километри
	m_price = p;               // цена 
}

void CCar::OnRead()//въвежда данните на автомобила
{
	    cout << endl;
		cin.sync();
		cout << "Въведете марка на автомобила: " << endl;
		cin >> m_name;
		cout << "въведете модел на автомобила? : " << endl;
		cin >> m_model;
		cout << "Въведете номер на двигател (с цифри) : " << endl;
		cin >> m_numberEngine;
		cout << "Година на производство: " << endl;
		cin >> m_year;
		cout << "Изминати километри на автомобила:  " << endl;
		cin >> m_kilometers;
		cout << "Цена на автомобила: " << endl;
		cin >> m_price;
}
void CCar::OnPrint()//отпечатва данните на aвтомобилите
{
	cout << endl;
	cout <<"Mарка- "<< m_name <<" "<< m_model <<"  № на двигател: "<< m_numberEngine <<" "<< m_year <<"-а година "<< m_kilometers <<"км "<< m_price<<"лв";
}
