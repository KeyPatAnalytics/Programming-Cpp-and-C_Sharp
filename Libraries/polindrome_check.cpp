#include<iostream>
#include <string>
#include <cstring>

using namespace std;

bool polindrome_check(const string text){
// This function checks is a text is a polindrome	
	int len = text.length();

// This variable is changed to false as soon as 
//	the rule of polindrome is broken
	bool is_polindrome = true;
	char temp_i, temp_j ;
	for(int i=0, j=len-1; i<j; i++, j--){
//		I use "while" insead of "if" to overcome
//		the case of  multiple spaces in the text
		while(text[i]==' ') i++;
		while(text[j]==' ') j--;
		temp_i = text[i];
		temp_j = text[j];
		if (temp_i>='A' && temp_i<='Z') temp_i = tolower(temp_i);
		if (temp_j>='A' && temp_j<='Z') temp_j = tolower(temp_j);
		
		if (temp_i != temp_j){
			is_polindrome = false;
			break;
		}
	}
	return is_polindrome;
}

// This function returns whether index of the first occurence
// of a substring or a string::npros object if the substring is not found
int find_substring1(const char * str_for_search_in, const char * substring, int start_position){
	return string(str_for_search_in).find(substring,start_position);
}

int* find_substring2(const char * str_for_search_in, const char * substring){
	// This function searches and returns the indexes substring
	
	int len_str = strlen(str_for_search_in);
	int len_substr = strlen(substring);
	
	// this is the maximal times we can find substring in str_for_search_in
	int size = len_str - len_substr + 1;
	
	int* arr = new int[size]; // we create the array
	int i = 0;
	
	int index = string(str_for_search_in).find(substring,0);
	
	while(index != string::npos && index < len_str){
		arr[i] = index;
		cout<<index<<" ";
		index = string(str_for_search_in).find(substring,index+1);
		i++;
		
	}
	
	cout << endl;
	return arr;
}

// This function encode a given text using Ceasar principe
// We give the key, that we use
void encrypt( char* str_for_encrypt, int key){
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int str_len = strlen(str_for_encrypt);
	char tmp;
	int index;
	for(int i=0; i<str_len; i++){
		tmp = str_for_encrypt[i];
		if(tmp >='a' && tmp <='z'){
			index = alphabet.find(tmp);
			// we change every character with the encoded one
			str_for_encrypt[i]=alphabet[(index+key)%26]; 
		}
		else if(tmp >='A' && tmp <='Z'){
			tmp = tolower(tmp); // if it is a capital letter, we convert it to lower case
			index = alphabet.find(tmp);
			str_for_encrypt[i]=toupper(alphabet[(index+key)%26]);
		}
	}
}

// This function returns the names (text in quotations)
string get_names(const string text){
	string names = "";
	
	int start, end, len_text = text.length();
	
	start = text.find_first_of("\"<");
	
	while(start != string::npos){
		end = text.find_first_of("\">", start+1);
		if(end != string::npos){
			char tmp = text[start];
			if(tmp=='<'){
				for(int i=start+2; i<end; i++)
					names += text[i];
			}else
				for(int i=start+1; i<end; i++)
					names += text[i];
			if(end+1<len_text){
				start = text.find_first_of("\"<",end+1);
			}else{
				break;
			}
		}else{
			break;
		}
	}
		
	return names;
}


// This function proposes the menu to the user
// It returns the chosen key 
// Every key corresponds to a specific function to be executed
char menu(){
	char key;
	cout<<"\n\nPress any of the following keys to make the corresponding operation:\n";
	cout<<"1. Check polindrome\n";
	cout<<"2. Substring search\n";
	cout<<"3. Encrypt a text\n";
	cout<<"4. Get text in quotations\n";
	cout<<"Any other key to quit.\n";
	
	cin >> key;
	return key; 
}

int main(){
	char key;
	bool restart ; // If true the do-while loop below will keep up running
	char yes_or_no;
	
	const string all_keys = "1234q";
	do{
		key = menu();
		
		while(all_keys.find(key) == string::npos){ 
			cout << "You didn't input the right key. Please repeat again: ";
			cin >> key;
		};
		
		switch (key){
			case '1':
			{
				string text="";
				cout << "Enter a text to run polindrome test: ";
				cin >> text;
				if(polindrome_check(text)){
					cout << "Your text is a polindrome!";
				}else{
					cout << "Your text is not a polindrome!";
				}
			}
			break;
			
			case '2':
			{
				cout << "Substring searching \n";
				char long_string[] = "abcghds\\frghd okughn_jyghde";
				char substring[] = "ghd";
				 cout << "Long string: " << long_string << endl;
				 cout << "Substring: " << substring << endl;
				 
				if(find_substring1(long_string,substring,0)!=string::npos){
					cout << "The index of the first occurence of the substring is ";
					cout << find_substring1(long_string,substring,0) << endl;
				}
				
				int length = strlen(long_string);
				
				int* array = find_substring2(long_string,substring);
				
				// to print the array of indexes
				for(int i=0; i<3; i++)
					cout << array[i] <<" ";
			}
			break;
							
			case '3':
			{
				char text[] = "abcdefgh ijk";
				int key;
				cout << "Enter a text to be encrypted: " << text << endl;
				encrypt(text,2);
				cout << "Encrypted text: " << text;
			}
			break;
			
			case '4':
			{
				cout << "Test quotations:";
				string text = "<<ghtyue jdhd\" jkjk\" jkidh\"nmj<<";
				cout << text << "\nThe names in quotations: " << get_names(text);
			}
			break;
			
			default:
				cout << "Successfull exit.";
		}
		
		restart = false;
		cout << "\n\nWould you like to do make another operation? (y/n) ";
		cin >> yes_or_no;
		if(yes_or_no == 'y'){
			restart = true; 
		}
		
	}while(restart);
	
	return 0;
}

