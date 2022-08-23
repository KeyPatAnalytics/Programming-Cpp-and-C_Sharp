// Complex.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


class complex {
public:
	float real, imag;

	// Le constructeur
	complex(float r = 0, float i = 0)
	{
		real = r;
		imag = i;
	}
	// le destructeur 
	~complex(){}

	// les differentes operations
	complex operator + (complex const &obj)
	{
		complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	complex operator - (complex const &obj)
	{
		complex res;
		res.real = real - obj.real;
		res.imag = imag - obj.imag;
		return res;
	}
	complex operator * (complex const &obj)
	{
		complex res;
		res.real = real * obj.real - imag * obj.imag;
		res.imag = real * obj.imag + imag * obj.real;
		return res;
	}


	friend complex operator * (int const k, complex const &obj);
	friend complex operator * (complex const &obj, int const k);
	friend void Print(const complex &obj);
};

complex operator * (int const k, complex const &obj)
{
	complex res;
	res.real = k * obj.real;
	res.imag = k * obj.imag;
	return res;
}
complex operator * (complex const &obj, int const k)
{
	return k * obj;
}
// fonction qui affiche le nombre complex
void Print(const complex &obj) {
	if (obj.imag > 0) {
		cout << obj.real << " + " << obj.imag << "i " << endl;
	}
	else if(obj.imag < 0) //lorsque imag < 0
	{
		cout << obj.real << " - " << (-1) * obj.imag << "i " << endl;
	}
	else { // lorsque imag = 0
		cout << obj.real << endl;
	}
	
}



int main()
{
	complex z1(5, -4); 
	complex z2 = 2 * z1;
	complex z3 = z1 * z2;
	complex z4 = z3 + z1;
	Print(z1);
	Print(z2);
	Print(z3);
	Print(z4);

	return 0;
}

