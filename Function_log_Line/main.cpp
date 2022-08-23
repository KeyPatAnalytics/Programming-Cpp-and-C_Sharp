#include<iostream>
#include "MyLibFile.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int first = 3;
    int second =6;
    int third = mini(first,second)+2;
    cout << third << endl;

    return 0;
}
