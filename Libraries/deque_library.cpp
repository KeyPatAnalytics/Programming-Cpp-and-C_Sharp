#include<iostream>
#include<deque>

using namespace std;


bool palindrome_check(const string text){
	bool isPalindrome = true;
	
	deque<char> char_que;
	int text_length = text.length();
	
	for (int i=0;i<text_length;i++){
		if(text[i] != ' ')
			char_que.push_back(text[i]);
	}
	
	char front, back;
	while(isPalindrome && char_que.size() > 1){
		front = char_que.front();
		back = char_que.back();
		
		char_que.pop_front();
		char_que.pop_back();
		
		if(front != back){
			isPalindrome = false;
		}
	};
	
	return isPalindrome;
}


 
int main()
{
    string text = "aaoaoaa";
    
    bool isPalindrome = palindrome_check(text);
    
    if (isPalindrome){
		cout << "The text is a palindrome!" << endl;
	}else{
		cout << "The text is not a palindrome!" << endl;
	}
	return 0;
	
}
