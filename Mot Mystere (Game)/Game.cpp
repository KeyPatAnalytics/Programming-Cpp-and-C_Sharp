#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include "Game.h"

using namespace std;


int random(int max){
	return (rand()%max);
}

void game(string const &myWord){
	
	string word = myWord,answerWord;
	int Size = myWord.size();
	
	/**reverse the letters of the word**/
	for(int i(0); i<Size; ++i){
		int k = random(Size);
		int j = random(Size);
		char tempo;
		tempo = word[k];
		word[k] = word[j];
		word[j] = tempo;
	}
	
	cout<<"Trouve le mot mystere: ";
	cout<<word<<endl;
	cin>>answerWord;

	if(answerWord != myWord){
	do{
		cout<<"Ce n'est pas ce mot. Esssayez encore: ";
		cin>>answerWord;
	}while(answerWord != myWord);
	}
	
	cout<<"Bravo vous avez gagne!"<<endl;
}
