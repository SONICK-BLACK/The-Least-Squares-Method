#pragma once
class MeanSquares
{
public:
	double Y[100];
	double X[100];
	double MeanX=0;
	double MeanY = 0;
	double MeanSqrX = 0;
	double XY = 0;
	//////Здесь высчитываем по формуле. Её можно вывести. Экстремум  функции нескольких переменных.
	MeanSquares(double y[],double x[]) {
		for (int i = 0; i < 100; i++) {
			Y[i] = y[i];
			X[i] = x[i];
			MeanX += x[i];
			MeanY += y[i];
			MeanSqrX += x[i] * x[i];
			XY += x[i] * y[i];

		}
		MeanX = MeanX / 100;
		MeanY = MeanY / 100;
		MeanSqrX = MeanSqrX / 100; 
		XY = XY / 100;

	}
	double NewK() {
		double k = (XY - MeanX * MeanY) / (MeanSqrX - MeanX * MeanX);
		return k;
	}
	double Newb(double k) {
		double b = MeanY-k* MeanX;
		return b;
	}

};

