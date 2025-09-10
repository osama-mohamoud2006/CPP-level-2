#include <iostream>
#include <cmath>
using namespace std;
float area(float a, float b) {
	float area = 3.14 * ( pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return area;
}

int main() {
	float a, b;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << " the area is: " << area(a, b) << endl;
}