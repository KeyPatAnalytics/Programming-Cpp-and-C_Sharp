#include <iostream>

using namespace std;

class Box {
public:
	static int objectCount;

	// Definition du constructeur
	Box(double l = 2.0, double b = 2.0, double h = 2.0) {
		cout << "Un nouveau parallelepipede est cree ." << endl;
		length = l;
		breadth = b;
		height = h;

		// Le nombre de paral. augmente a chaque fois nous creons un nouveau
		objectCount++;
	}

	double Volume() {
		return length * breadth * height;
	}
	
	// Le Destructeur
	~Box(){};

private:
	double length;     // Longueur de la boite
	double breadth;    // Sa largeur
	double height;     // Sa hauteur
};

// TRES IMPORTANT, ICI NOUS INITIALISONS LE COMPTEUR DE BOITES A ZERO
int Box::objectCount = 0;

int main(void) {
	Box Box1(3.3, 1.2, 1.5);    // NOUS DECLARONS LA 1ERE BOITE
	Box Box2(8.5, 6.0, 2.0);    // ET LA 2EME BOITE

	// Print total number of objects.
	cout << "Nombre total de boites: " << Box::objectCount << endl;
	cout << "Voluve de la 1ere boite: " << Box1.Volume() << endl;
	cout << "Volume de la 2eme boite: " << Box2.Volume() << endl;

	return 0;
}