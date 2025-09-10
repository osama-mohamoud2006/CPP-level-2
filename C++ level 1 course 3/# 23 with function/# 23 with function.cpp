#include <iostream>
#include <cmath>
using namespace std;

float p1(float a,float b, float  c) {
	float p = (a + b + c) / 2;
	return p;
};
float area(float a, float b, float c, float p) {
	float area = 3.14 * (pow(((a * b * c) / 4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2));
	return area;
};
int main() {
	float a, b, c;
	cout << "Enter the sides of the triangle: ";
	cin >> a >> b >> c;
	float p = p1(a, b, c);
	cout << "The area of the triangle is: " << area(a, b, c, p);
	return 0;
}