#include <iostream>

using namespace std;

int main(){
	int const N = 15;
	
	int massiv[N];
	
	int number_negative = 0;
	int number_zeros = 0;
	int product_positive = 1;
	
	cout << "Enter 15 numbers in the array:"<<endl;
	
	for (int i=0; i<N; i++){
		cout <<"a"<<i<<" = ";
		cin >> massiv[i];
		
		if(massiv[i] < 0){
			number_negative ++;
		}else if(massiv[i] == 0){
			number_zeros ++;
		}else{
			product_positive *= massiv[i];
		}
	}
	
	cout << "In the array there are " << number_negative << " negative numbers."<<endl;
	cout << "In the array there are " << number_negative << " zeros."<<endl;
	cout << "The product of positive numbers of the array is  " << product_positive << "."<<endl;
	
	return 0;
}
