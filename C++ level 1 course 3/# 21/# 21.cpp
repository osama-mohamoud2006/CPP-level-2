#include <iostream>
#include <cmath>
using namespace std;
float  area(float l) {
	float area = (pow(l, 2)) / (4 * 3.14);
	return area;
}
int main() {
	cout << "enter L: " << endl;
	float l;
	cin >> l;
	cout << "area: " << area(l) << endl;
}