#include<iostream>
#include <string>
#include <fstream>

using namespace std;

string file_format(const string file_path_full){
	// This function takes as parameters the path to a file on the computer
	// The parameters is not modified during the execution
	// From the it gets and returns the extension (format) of the given file
	
	int path_len = file_path_full.length(); //Length of the full path
	int pos = file_path_full.rfind("."); // The position of the last dot
	string format = ""; //Variable to store the extension
	
	// The format is always indicated at the end, 
	for(int index=pos+1; index<path_len; index++){
		format += file_path_full[index];
	}
	
	return format; // returns the format of the file
}


string file_name(const string file_path_full){
	// The function takes a file's full path as argument
	// The argument does not change during the execution of the program
	// It returns the name of the file, as it looks in the directory
	
	int path_len = file_path_full.length(); //Length of the full path
	int dot_pos = file_path_full.find_last_of("."); // The position of the last dot
	int slash_pos = file_path_full.find_last_of("\\/"); // The position of the last slash (or antislash)
	
	string file_name = "";
	
	// The file name is always between the last slah and the last dot (before the extension)
	for(int index=slash_pos+1; index<dot_pos; index++){
		file_name += file_path_full[index];
	}
	
	return file_name;
}


string file_path (const string file_path_full){
	//This function returns the path of the directory where the file is saved
	// As argument it takes the full path of the file
	int slash_pos = file_path_full.find_last_of("\\/"); // The position of the last slash
	string path = "";
	
	// It is everything that is before the name of the file
	for(int index=0; index<slash_pos+1; index++){
		path += file_path_full[index];
	}
	
	return path;
}

string file_disk (const string file_path_full){
	// In this function we find the disk of the compter where
	// the file whose full path is given as parameter
	int colon_pos = file_path_full.find_first_of(":"); // The position of the colon
	string disk = "";
	
	// We take everything that comes before the first colon in the given full path
	for(int index=0; index<colon_pos+1; index++){
		disk += file_path_full[index];
	}
	return disk;
}

bool file_rename(string * file_path_full){
	// We take take as argument the full path to a file on our computer
	// The job of this function is to rename that very file
	// by enquiring from the user the new name to give
	// Here we use the above functions
	bool renaming_success; // will be true if true if the renaming process was successful
	string new_file_path;
	string new_file_name;
	
	string old_file_name = *file_path_full; // We read the value at the given pointer
	
	string format = file_format(old_file_name); // We find the extension(format) of the file
	string path = file_path(old_file_name); // We get the directory where it is saved
	
	cout << "\nEnter the new file name: ";
	cin >> new_file_name;
	
	//cout<<"\n Directory Path: "<<path<<endl;
	//cout<<"\nNew file name: "<<new_file_name<<endl;
	//cout<<"\nFormat: "<<format;
	
  	new_file_path = (path + new_file_name + "." + format);
  	
  	//cout<<"\nNew Full path: "<<new_file_path<<endl;
 	
  	int result = rename( old_file_name.c_str() , new_file_path.c_str() );
  	
  	if ( result == 0 ){
  		renaming_success = true;
  		puts ( "\nFile successfully renamed" );
	  }
  	else{
  		renaming_success = false;
  		perror( "\nError renaming file" );
	  }
	  
  return renaming_success;
}

bool file_copy(const string file_path_full){
	// By this function we create a copy of any file
	// whose path is given as argument
	bool copy_success; // Will be true if the copy was successfully created
	string line; // will be used when reading the content of the file
    
    // file streams object
    ifstream infile; // used to read from a file
    ofstream outfile; // used to write in a file
    
    string file_copy_path;
    
    string path = file_path(file_path_full);
	string name = file_name(file_path_full);
	string format = file_format(file_path_full);
	
	// We create the path of the copy file
  	file_copy_path = (path + name + "_copy." + format); 
    
    infile.open(file_path_full.c_str());
    outfile.open(file_copy_path.c_str());
 
    if(infile && outfile){
        while(getline(infile,line)){
            outfile << line << "\n";
        }
 		copy_success = true;
    } else {
        copy_success = false;
        printf("Cannot read File");
    }
 
    //Closing the files
    infile.close();
    outfile.close();
    
    return copy_success;
}


// This function proposes the menu to the user
// It returns the chosen key 
// Every key corresponds to a specific function to be executed
char menu(){
	char key;
	cout<<"\n\nPress any of the following keys to make the corresponding operation:\n";
	cout<<"1. Get the file format.\n";
	cout<<"2. Get the file name.\n";
	cout<<"3. Get only the path to the file.\n";
	cout<<"4. The name of the disk where the file is saved.\n";
	cout<<"5. Rename your file.\n";
	cout<<"6. Create a copy of a file.\n";
	cout<<"Any other key to quit.\n";
	
	cin >> key;
	return key; 
}


int main(){
	char key;
	
	// We receive from the user the full path of a file
	string file_path_full;
	cout<<"\nEnter the full path to any file on your disk:\n";
	getline(cin,file_path_full);
	
	bool restart ; // If true the do-while loop below will keep up running
	char yes_or_no;
	const string all_keys = "123456";
	
	do{
		key = menu();
		
		if(all_keys.find(key) == string::npos){ // If the key entered by the user is not in {123456}
											// We directly finish the loop
			break;
		};
		
		switch (key){
			case '1':
				
				cout << "\nFile extension: " << file_format(file_path_full.c_str());
				break;
			
			case '2':
				cout << "\nFile name: " << file_name(file_path_full.c_str());
				break;
			
			case '3':
				cout << "\nPath to the file: " << file_path(file_path_full.c_str());
				break;
			
			case '4':
				cout << "\nName of the disk: " << file_disk(file_path_full.c_str());
				break;
			
			case '5':
				cout << file_rename(&file_path_full);
				break;
			
			case '6':
				cout << file_copy(file_path_full.c_str());
				break;
			default:
				cout<<"Nothing to do here.";
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
