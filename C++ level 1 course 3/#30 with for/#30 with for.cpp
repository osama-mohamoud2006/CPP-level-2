#include <iostream>
using namespace std;
int main() {
	cout << "enter N " << endl;
	int n;
	cin >> n;
	int f = 1;
	for (int i = n; 1<=i; i--) {
		f *= i;
	}
	cout << f << endl;
}