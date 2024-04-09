#pragma once
#include <random>
#include <iostream>
using namespace std;
class GaussВistribution
{
public:
	/// <summary>
	
	/// </summary>
	double vectorRandY[100]; 
	double vectorRandX[100];
	GaussВistribution(double mean, double sttdv, mt19937 h){
		std::normal_distribution<> distr(mean, sttdv); /// Создаем функцию с параметрами Гауссового распределения
		for (int i = 0; i < 100; i++) {
			vectorRandY[i] = distr(h); /// Вводим источник случайной генерации, чтобы потчинялся Гауссовому нормальному распределению, присваиваем значения
			vectorRandX[i] = i+1;
		}
	}

};

