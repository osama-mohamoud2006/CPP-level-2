#include <iostream>
#include< cmath>
using namespace std;

float dimater(float d) {
	float area = (3.14 * pow(d, 2)) / 4;
	return area;
}

int main() {
	float d; 
	cout << "Enter the diameter of the circle: ";
	cin >> d;
	cout << " the diamater is: " << dimater(d) << endl;
}