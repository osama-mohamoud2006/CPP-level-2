#include <iostream>
using namespace std;
int input(int &s , int &e , int &n) {
	cout << "enter the first of range numbers: ";
	cin >> s;
	cout << "enter then end of the range numbers: ";
	cin >> e;
	cout << "---------------------------------------" << endl;
	cout << "enter the number: ";
	cin >> n;
	/*for (int i = s; n >= e || n<=s; i++) {  v // the same result like while loop 
		cout << "you entered wrong number! " << endl;
		cin >> n;
	}*/

	while (n >= e || n <= s) {
		cout << "you entered wrong number! " << endl;
		cin >> n;
	}



	cout << "you entered number in the range " << n << endl;
	return n;
}

int main() {
	int s = 0; 
	int n = 0;
	int e = 0; 
	input( s,  e,  n);
}