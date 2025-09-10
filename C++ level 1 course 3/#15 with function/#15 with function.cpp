#include <iostream>
using namespace std;
 
int num1(int x) {
	return x;
};
int num2(int y) {
	return y;
};
double area(int x, int y) {
	return x * y;
};

int main() {
	cout << "enter x: "<<endl;
	int x;
	cin >> x;
	cout << "enter y: " << endl;
	int y;
	cin >> y;

	cout << "the area is :" << area(x, y) << endl;

}