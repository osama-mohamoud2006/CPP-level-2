#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "enter A: "<<endl;
	double a;  // 80
	cin >> a;

	cout << "enter B: " << endl;
	double b;  //40
	cin >> b;

	const float pi = 3.14;
	float  area = pi *  b * b / 4 * ( (2*a - b) / (2*a + b) );
	cout << "\n";
	cout << "area= " << floor(area); // 753.6

}