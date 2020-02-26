
#pragma once
#include <string>
#include <iostream>
using namespace std;

class CCar
{
private:
	string m_name; //����� �� ���������
	string m_model; // �����
	long long m_numberEngine; //����� �� �������� 
	int m_year; //godina na ������ �� ������������
	int m_kilometers; //��������� �� ����������
	float m_price;     // ���� �� ����������
	int m_auto[128][6]; //����� � 5 ����������

public:
	CCar();
	CCar(string,string,long long,int,int,float); 

	void OnRead();//������� ������� �� ����������
	void OnPrint();//��������� ������� �� ����������
	string name_access() { return m_name; }//����� �� ������ �� �������
	string model_access() { return m_model; }// ����� �� ������ �� �����
	long long fn_access() { return m_numberEngine; }//����� �� ������ ����� �� �������� 
	int spec_access(){return m_year;} //����� �� ������ �� ������
	int course_access() { return m_kilometers; } //����� �� ������ �� ���������
	float price_access() { return m_price; }   // ������ �� ������
	
	bool operator <(const CCar& car)       // ������������ �������� <
	{
		return (m_kilometers < car.m_kilometers);
	}

	bool operator >(const CCar& car)       
	{
		return (m_price > car.m_price);
	}
};
