#include <iostream>
#include<cmath>
using namespace std;

float def(float r ) {
	
	return r  ;
};
float P( float pi) {
	 pi = 3.14;
	return pi;
};

float area(float r,  float pi) {
	float r2 = pi *pow(r, 2);
		
	 return r2;
};

int main() {
	cout << "enter the radius of the circle: ";
float r;
	cin >> r;
	float pi = 3.14;

	cout << "the area of cricle is: " << area( r, pi) << endl;

}