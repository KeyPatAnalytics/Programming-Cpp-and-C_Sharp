#include<iostream>
#include<stack>


using namespace std;

void check_parenthese(const string text){
	stack <char> stack_box; // empty stack of char type
	int text_length = text.length();
	int i = 0; // index of chararcters
	
	bool correct_parenthese = true; //as default value
	while(i < text_length && correct_parenthese){
		char tmp = text.at(i);
		if(tmp=='\(' || tmp=='\{' || tmp=='\['){
			stack_box.push(tmp);
		}else if(tmp=='\)' || tmp=='\}' || tmp=='\]'){
			if(stack_box.empty()){
				correct_parenthese = false;
			}else{
				if( (tmp=='\)' && stack_box.top() != '\(' ) || 
					(tmp=='\}' && stack_box.top() != '\{' ) ||
					(tmp=='\]' && stack_box.top() != '\[' ) ){
					correct_parenthese = false; // there is no match
				}else{
					stack_box.pop(); // the pair is correct, we pop the last character
				}
			}
		}
		
		i++;
	};
	
	if(correct_parenthese && stack_box.empty()){
		cout << "yes" << endl;
	}else{
		cout << "no" << endl;
	}
	
}

int main(){
	
	string text = "absd(jki)io";
	check_parenthese(text);
	
	return 0;
}
