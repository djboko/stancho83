#pragma once
#include "car.h"
#include "carShop.h"
#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");

	carShop r;
	int w;
	string s;
	do{
		cout << endl << endl;
		cout << "1. Отпечатване на всички автомобили" << endl;
		cout << "2. Добавяне на автомобил в базата данни" << endl;
		cout << "3. Изтриване на автомобил по номер на двигател" << endl;
		cout << "4. Отпечатване на автомобил по номер на двигател" << endl;
		cout << "5. Покажи броят на автомобилите в автоборсата" << endl;
		cout << "6. Покажи колата с най-малко изминати километри " << endl;
		cout << "7. Покажи най-скъпият автомобил" << endl;
		cout << "0. Изход " << endl;

		cin >> w;
		switch(w)
		{
		    case 1: r.OnPrint(); break;
			case 2: r.OnAdd(); break;
			case 3: r.OnDel(); break;
			case 4: r.PrintAutoEngine(); break;
			case 5: cout <<"В базата данни има "<< r.br_access()<<" автомобила" << endl; break;
			case 6: r.min_km() ;  break;
			case 7:r.max_price(); break;
			case 0: break;
			default: cout << "Грешен избор!" << endl; break;
		}
	}while(w);
	return 0;
}
