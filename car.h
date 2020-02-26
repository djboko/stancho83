
#pragma once
#include <string>
#include <iostream>
using namespace std;

class CCar
{
private:
	string m_name; //марка на автомобил
	string m_model; // модел
	long long m_numberEngine; //номер на двигател 
	int m_year; //godina na година на производство
	int m_kilometers; //километри на автомобила
	float m_price;     // цена на автомобила
	int m_auto[128][6]; //масив с 5 параметъра

public:
	CCar();
	CCar(string,string,long long,int,int,float); 

	void OnRead();//въвежда данните за автомобила
	void OnPrint();//отпечатва данните за автомобила
	string name_access() { return m_name; }//метод за достъп на марката
	string model_access() { return m_model; }// метод за достъп на модел
	long long fn_access() { return m_numberEngine; }//метод за достъп номер на двигател 
	int spec_access(){return m_year;} //метод за достъп до година
	int course_access() { return m_kilometers; } //метод за достъп до километри
	float price_access() { return m_price; }   // достъп до цената
	
	bool operator <(const CCar& car)       // предефиниран оператор <
	{
		return (m_kilometers < car.m_kilometers);
	}

	bool operator >(const CCar& car)       
	{
		return (m_price > car.m_price);
	}
};
