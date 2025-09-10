#include <iostream>
using namespace std;
void input(float x[3]) {
	cout << "enter value 1: " << endl;
	cin >> x[0];
	cout << "enter value 2: " << endl;
	cin >> x[1];
	cout << "enter value 3: " << endl;
	cin >> x[2];
}
float avg(float x[3]) {
	float avg = (x[0] + x[1] + x[2]) / 3;
	return avg;
}
void print(float x[3]) {
	cout << "-----------------------" << endl;
	cout << "the avg is " << avg(x) << endl;
}
	
		
int main() {
	float x[3];
	input(x);
	print(x);
}