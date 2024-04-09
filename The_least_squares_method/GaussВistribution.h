#pragma once
#include <random>
#include <iostream>
using namespace std;
class Gauss�istribution
{
public:
	/// <summary>
	
	/// </summary>
	double vectorRandY[100]; 
	double vectorRandX[100];
	Gauss�istribution(double mean, double sttdv, mt19937 h){
		std::normal_distribution<> distr(mean, sttdv); /// ������� ������� � ����������� ���������� �������������
		for (int i = 0; i < 100; i++) {
			vectorRandY[i] = distr(h); /// ������ �������� ��������� ���������, ����� ���������� ���������� ����������� �������������, ����������� ��������
			vectorRandX[i] = i+1;
		}
	}

};

