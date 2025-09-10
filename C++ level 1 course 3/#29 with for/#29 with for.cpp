#include<iostream>
using namespace std;
int main() {
	cout << "enter N " << endl;
	int n;
	cin >> n;
	int total = 0;
	for (int x = 0; x <= n; x++) {
		if (x % 2 == 0) {
			total += x;
			
		}
	
	}
	cout << total;
}