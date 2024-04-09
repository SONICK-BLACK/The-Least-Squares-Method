#include <iostream>
#include <random>
#include "GaussВistribution.h"
#include "MeanSquares.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    mt19937 gen(1701);////Инцилизируем источник генерации
    //Если диссперсию поставить давольно большую, то  будет разброс по рандому намного больше
    GaussВistribution Gauss(5.0, 100.0, gen);// Создаем класс Гауссового нормального распределения вводим мат ожидание и среднеквадратичное отклонение
   
    int Ger = 0;
    bool F = true;


    MeanSquares Mean(Gauss.vectorRandY, Gauss.vectorRandX);// Создаем класс для усреднения значения и создания функции предсказания (вводим параметры полученные после Гауссовкого распределения)
    double k = Mean.NewK(); // Находим   k (f(x)=kx+b)
    double b = Mean.Newb(k); // Находим   b 
    cout << "Function" << endl; /// Прогоняем значения функции
    for (int j = 0; j < 100; j++) {

        cout << k * (j + 1) + b << endl;
        if ((k * (j + 1) + b) < 5 && F) {
            Ger = j;
            cout << "---------------------" << endl;
            F = false;
        }

    }
    F = true;
    cout << "GaussNormalBistr" << endl; /// Прогоняем Гауссовое распределение
    for (int i = 0; i < 100; i++) {

        cout << Gauss.vectorRandY[i] << endl;
        if (Ger == i&&F) {
            cout << "---------------------" << endl;
            F = false;
        }


    }
}
