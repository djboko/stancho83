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
		cout << "1. ����������� �� ������ ����������" << endl;
		cout << "2. �������� �� ��������� � ������ �����" << endl;
		cout << "3. ��������� �� ��������� �� ����� �� ��������" << endl;
		cout << "4. ����������� �� ��������� �� ����� �� ��������" << endl;
		cout << "5. ������ ����� �� ������������ � �����������" << endl;
		cout << "6. ������ ������ � ���-����� �������� ��������� " << endl;
		cout << "7. ������ ���-������� ���������" << endl;
		cout << "0. ����� " << endl;

		cin >> w;
		switch(w)
		{
		    case 1: r.OnPrint(); break;
			case 2: r.OnAdd(); break;
			case 3: r.OnDel(); break;
			case 4: r.PrintAutoEngine(); break;
			case 5: cout <<"� ������ ����� ��� "<< r.br_access()<<" ����������" << endl; break;
			case 6: r.min_km() ;  break;
			case 7:r.max_price(); break;
			case 0: break;
			default: cout << "������ �����!" << endl; break;
		}
	}while(w);
	return 0;
}
