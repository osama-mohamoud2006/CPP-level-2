#include<iostream>
using namespace std;
int main() {
	cout << "enter number: ";
	int n;
	cin >> n;
	int sum = 0;
	int s = 1; // n =10
	while (s <= n) {
		// body 
		if (s % 2 != 0) {
          sum += s;
		}
		s++;
	}
	cout << "the total " << sum << endl;
	//for (int i = 1; i <= n; i++) {
	//	if (i % 2 != 0) {
	//	         sum += i;
	//		  	}
	//}
	//cout << "the total " << sum << endl;
}