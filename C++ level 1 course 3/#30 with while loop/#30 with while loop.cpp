#include <iostream>
using namespace std;
int main() {
	cout << "enter NUM: ";
	int n;
	cin >> n;
	int factorial = 1;
	
	while (n >= 1) {
		factorial *= n;
		n--;
	}
	cout << factorial << endl;
	/*for (int i = n; i >= 1; i--) {
		factorial *= i;
	}
	cout << factorial << endl;*/
}