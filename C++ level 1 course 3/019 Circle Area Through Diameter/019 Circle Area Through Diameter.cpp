#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "enter D" << endl;
	int d; //50
	cin >> d;

	const float pi = 3.14;
	float area = (pi * (d * d)) / 4;
	cout << "\n";
	cout << "area is: " << ceil(area); //1962.5

}