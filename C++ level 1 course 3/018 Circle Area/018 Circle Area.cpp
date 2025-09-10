#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float r;
	cout << "enter \'r\': ";
	cin >> r;
	const float pi = 3.14;
	float area = pi * pow(r, 2);
	cout << " the area is: " << area;
}