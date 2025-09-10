#include <iostream>
using namespace std;
void print(int &x) {
	x = 12;
}
	
int main() {
	int x = 5;
	print(x);

	cout << "x is " << x << endl;	
	
	
}