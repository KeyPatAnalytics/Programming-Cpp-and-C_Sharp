// Volume parallelepipede.cpp : 
#include <iostream>

using namespace std;

class Para
{
	public:
		float Length, Width, Height;

		Para(float length = 0, float width = 0, float height = 0) {
			Length = length;
			Width = width;
			Height = height;
		};

		float Volume() {
			return Length * Width * Height;
		};

		~Para() {};
};


int main()
{
	Para para1 = Para(4, 5, 8);
	cout << para1.Volume() << endl;
}
