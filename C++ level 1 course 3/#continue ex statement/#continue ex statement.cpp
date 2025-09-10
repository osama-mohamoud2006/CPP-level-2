#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int n;
	for (int i = 1; i <= 5; i++) {
		cout << "Enter num: " << endl;
		cin >> n;
		if (n >= 50) {
			cout << "numbr is greater than 50 or equal fuck you " << endl;
			continue; // won't add number=50 or greater to sum if user entered 
			// according to n
		}
		sum += n;
	}
	cout << "the sum: " << sum << endl;
}