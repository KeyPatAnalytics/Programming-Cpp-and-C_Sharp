
#include <iostream>
#include <math.h>

using namespace std;

class Point {
private:
	double x;
	double y;
	friend void Print(Point A); // Declaration de notre fonction amie Print
	friend double distance(Point A, Point B); // Declaration de notre fonction amie distance


public:
	Point(double xx = 0, double yy = 0) {
		x = xx;
		y = yy;
	}

	~Point() {};
};

//DESCRIPTION DE PRINT
void Print(Point A) {
	cout << "(" << A.x << "," << A.y << ")" << endl;
}

//DESCRIPTION DE DISTANCE
double distance(Point A, Point B) {
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}
int main()
{
	Point A(5, 6);
	Point B(-1, 3);
	cout << "Le point A a pour coordonnes ";
	Print(A);
	cout << "La distance entre les points A et B est " << distance(A, B);
}
