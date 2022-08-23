#include <iostream>
#include <stdlib.h> /* srand , rand */
#include <time.h> /* time */

using namespace std;

int main()
{
	int iSecret, iGuess;
	/*Initializing random seed*/
	srand(time(NULL));
	
	/*Generate random number between 0 and 10*/
	iSecret = rand()%10 + 1;
	
	do
	{
		cout<<"Guess the number from 1 to 10"<<endl;
		cin>>iGuess;
		
		if(iSecret < iGuess)
			cout<<"The secret number is lower"<<endl;
		else if(iSecret > iGuess)
			cout<<"The secret number is bigger"<<endl;
	}while(iSecret != iGuess);
	
	cout<<"Congratulations"<<endl;
	
	return 0;
	
}
