#include <iostream>
#include <math.h>

using namespace std;

class Point {
private:
	// les coordonnees du points
	double x;
	double y;
	

public:
	// constructor
	Point(double xx = 0, double yy = 0) {
		x = xx;
		y = yy;
	}

	// destructor
	~Point() {};
	
	// Method Distance
	double distance(Point &to_another_point);
	
	// setters
	void SetX(double value) {
		x = value;
	}
	void SetY(double value) {
		y = value;
	}
	// getters
	double GetX() {
		return x;
	}
	double GetY() {
		return y;
	}
};

// WE RELOAD + OPERATION
Point operator+(Point &A, Point &B) {
	Point newPoint;
	newPoint.SetX(A.GetX() + B.GetX());
	newPoint.SetY(A.GetY() + B.GetY());
	return newPoint;
};

// WE RELOAD - OPERATION
Point operator-(Point &A, Point &B) {
	Point newPoint;
	newPoint.SetX(A.GetX() - B.GetX());
	newPoint.SetY(A.GetY() - B.GetY());
	return newPoint;
};

// WE DESCRIBE THE FUNCTION DISTANCE
double Point::distance(Point &to_another_point){
	double dx, dy;
	dx = GetX() - to_another_point.GetX();
	dy = GetY() - to_another_point.GetY();
	
	return sqrt(dx*dx + dy*dy);
}

int main()
{
	Point A(5, 6);
	Point B(-1, 3);
	
	// Operations 
	Point U = A + B;
	Point V = A - B;
	cout << "A(" << A.GetX() << "," << A.GetY() <<")"<<endl;
	cout << "B(" << B.GetX() << "," << B.GetY() <<")"<<endl;
	cout << "The coordinates of U (U=A+B) are (" << U.GetX() << "," << U.GetY() << ")." << endl;
	cout << "The coordinates of V (U=A-B) are (" << V.GetX() << "," << V.GetY() << ")." << endl;
	cout << "The distance from A to B is " << A.distance(B) << "." << endl;
	
	return 0;
}
