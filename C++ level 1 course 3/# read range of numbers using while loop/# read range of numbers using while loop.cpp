#include <iostream>
using namespace std;
struct str {
	int n;
	int s;
	int e;
};
void input(str& data) {
	cout << "Enter the start of range: ";

	cin >> data.s;
	cout << "enter the end of the range: ";

	cin >> data.e;


}
void output(str data) {
	do {
		cout << "enter number: ";
		cin >> data.n;

	} while (data.n <= data.s || data.e <= data.n);
	cout << "bro entred number in the range " << endl;
}

int main() {
	str data;
	input(data);
	output(data);


}