// Temperature.cpp 

#include <iostream>
using namespace std;


// Cette classe donne la temp en Fahrenheit
class Temperature {
private:
	double tempFarhrenheit;

	// c'est la declaration de notre fonction amie
	friend double ToCelcuisTemparature(Temperature FahrenTemp);

public:
	// Ici creons le  constructeur
	Temperature(double temperature = 0) {
		tempFarhrenheit = temperature;
	};

	~Temperature() {};// Ici cest le destructeur

	// Cette fonction nous permet d'avoir la valeur de la temp. en Fahrenheit
	double getFarhTemp() {
		return tempFarhrenheit;
	}
};
 // La description de notre fonction de conversion
double ToCelcuisTemparature(Temperature FahrenTemp) {
	return (FahrenTemp.tempFarhrenheit - 32) * 5/9; // C'est la formule de conversion: (Celsuis * 9/5) + 32 = Farhrenheit 
}

int main()
{
	Temperature temper1(50);
	cout << temper1.getFarhTemp() << " degres Farhrenheit = " << ToCelcuisTemparature(temper1) << " degres celcuis!" << endl;

}

