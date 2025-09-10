#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << "enter number: ";
	float x; // 10.23
	cin >> x ;

	float power2 =pow(x,2);
	float power3 = pow(x, 3);
	float power4 = pow(x, 4);
	cout << "power2: " << round(power2) << endl; /// 104.6529
	cout << "power3:  " << round(power3) << "\n";  /// 1070.599167
	cout << "power4:  " << round(power4) << endl; /// 10952.22948
}