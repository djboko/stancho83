
#pragma once
#include <iostream>
#include "car.h"
#include <string>
using namespace std;

class carShop
{
private:
	string m_name; //име на автомобил 
	int m_br; //брой автомобили 
	CCar *m; //указател за динамичния масив със автомобили
	

public:
	carShop();//конструктор по подразбиране
	carShop(string, int); //конструктор с параметри
	~carShop() { delete []m; }//деструктор

	void OnAdd();//добавя нов автомобил в масива        /////////////////
	void OnDel();//изтрива автомобил по номер на двигател        /////////
	void OnPrint();//отпечатва данните на всички автомобили  в масива ////////////
	int ifShop(int); //по въведен номер на двигател отпечатва данните на кола      ///////
	int br_access() { return m_br; }//метод за достъп до броя на автомобилите
	void PrintAutoEngine();            /// принтира автомобилите по номер на двигател 
	void min_km();                    /// кола с минимум пробег
	void max_price();                    // най-скъпата кола 

};
