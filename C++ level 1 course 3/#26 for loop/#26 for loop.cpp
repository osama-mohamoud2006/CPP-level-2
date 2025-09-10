#include <iostream>
using namespace std;
int main() {
	//for(//intial value ; condition; update )
	cout << "enter n" << endl;
	int n;
	cin >> n;
	/*for (int i = 1; i <= n; i++) { // to increase by one 
		cout << i << endl;
	}*/
	/// problem #27
	for (int i = n; i >= 1; i--) {   /// to decrease by one
		cout << i << endl;
	}
}