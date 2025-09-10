#include <iostream>
#include <cmath>
using namespace std;

float area(float a) {
	float area = 3.14 * pow( (a / 2), 2);
	return area;	

};
int main() {
	cout << " enter a: ";
	float a;
	cin >> a;

	cout << "Area of circle is: " << area(a) << endl;
}