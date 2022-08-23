
#include <iostream>
using namespace std;

class Arrays
{
	
public:
	// Le constructeur
	Arrays(int len, double elt[]) {
		length = len;
		ar = new double[len];
		for (int i = 0; i < len; i++) {
			ar[i] = elt[i];
		}
	}

	Arrays(){}

	// Le destructeur 
	~Arrays() {
		
		//delete [] ar;
	}

	Arrays operator*(const Arrays &A) {
		int resLength = length;
		if (length > A.length) {
			resLength = A.length;
		}

		Arrays result;
		result.length = resLength;
		result.ar = new double[resLength];
		for (int i = 0; i < resLength; i++) {
			result.ar[i] = ar[i] * A.ar[i];
		}

		return result;
	}
	Arrays operator+(const Arrays &A) {
		int resLength = length;
		if (length > A.length) {
			resLength = A.length;
		}

		Arrays result;
		result.length = resLength;
		result.ar = new double[resLength];
		for (int i = 0; i < resLength; i++) {
			result.ar[i] = ar[i] + A.ar[i];
		}
		return result;
	}
	Arrays operator-(const Arrays &A) {
		int resLength = length;
		if (length > A.length) {
			resLength = A.length;
		}

		Arrays result;
		result.length = resLength;
		result.ar = new double[resLength];
		for (int i = 0; i < resLength; i++) {
			result.ar[i] = ar[i] - A.ar[i];
		}
		return result;
	}
	Arrays operator=(const Arrays &A) {
		Arrays result;
		result.length = length;
		result.ar = new double[length];

		for (int i = 0; i < length; i++) {
			result.ar[i] = ar[i];
		}
		return result;
	}

private:
	int length;
	double *ar;
	friend void PrintARRAY(Arrays arr);
};

void PrintARRAY(Arrays arr) {
	for (int i = 0; i < arr.length; i++) {
		cout << arr.ar[i] << " ";
	}
	cout << endl;
}

int main()
{
	double A[5] = {10,2.5,7,8,13};
	int len = 5;
	Arrays arr1(len, A);
	Arrays arr2 = arr1;
	Arrays arr3 = arr1 + arr2;
	Arrays arr4 = arr1 - arr2;

	cout << "Arrays 1" << endl;
	PrintARRAY(arr1);
	cout << "Arrays 2" << endl;
	PrintARRAY(arr2);
	cout << "Arrays 3" << endl;
	PrintARRAY(arr3);
	cout << "Arrays 4" << endl;
	PrintARRAY(arr4);
	
	return 0;
}
