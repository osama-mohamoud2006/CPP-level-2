#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "enter L: ";
	int l;
	cin >> l;
	float area = (l * l) / (4 * 3.14);
	cout << "\n";
	cout << "area: "<< floor(area);
}