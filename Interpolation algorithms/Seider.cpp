// Seider.cpp : Этот файл содержит функцию "main". 
// Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
const int lim = 5;

bool converge(double xk[lim], double xkp[lim], double eps, int n)
{
	double norm = 0;
	for (int i = 0; i < n; i++)
		norm += (xk[i] - xkp[i])*(xk[i] - xkp[i]);
	return (sqrt(norm) < eps);
}


void Seider_method(const int dim, double eps) {

	if (dim <= lim) {
		double a[lim][lim]; double b[lim];

		cout << " Enter the matrix A" << endl;
		for (int i = 0; i < dim; i++)
			for (int j = 0; j < dim; j++) {
				cout << "A[" << i + 1 << j + 1 << "] = "; cin >> a[i][j];
			}
		cout << "Enter the vector B" << endl;
		for (int i = 0; i < dim; i++) {
			cout << "B[" << i + 1 << "] = "; cin >> b[i];
		}

		double p[lim], x[lim];
		for (int i = 0; i < dim; i++) {
			x[i] = 0; p[i] = 0;
		}

		int flag = 0;
		do
		{
			cout << flag; flag++; // to check the looping
			for (int i = 0; i < dim; i++)
				p[i] = x[i];

			for (int i = 0; i < dim; i++)
			{
				double var = 0;
				for (int j = 0; j < i; j++)
					var += (a[i][j] * x[j]);
				for (int j = i + 1; j < dim; j++)
					var += (a[i][j] * p[j]);

				x[i] = (b[i] - var) / a[i][i];
			}
		} while (!converge(x, p, eps, dim));

		for (int i = 0; i < dim; i++) {
			cout << "x[" << i + 1 << "] = " << x[i] << endl;
		}
	}
	else {
		cout << "Dimension error!";
	}
	
}

int main() {

	double eps = 0.01;
	int dim = 3;

	/*
		double A[3][3], B[3], eps = 0.00000001;
		A[0][0] = 1; A[0][1] = -2; A[0][2] = -3;
		A[1][0] = 2; A[1][1] = 1; A[1][2] = 3;
		A[2][0] = 3; A[2][1] = -1; A[2][2] = -2;
		B[0] = 0; B[1] = 1; B[2] = 3;
	*/
	

	Seider_method(dim,eps);

	return 0;
}

