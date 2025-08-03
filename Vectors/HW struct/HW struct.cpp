#include <iostream>
#include <vector>
#include <limits>
using namespace std;


int enter_numbre(){
	short number=0 ;
	do {
		cout << "enter number: ";
		cin >> number;
		if (cin.fail() || number < 0) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "\n enter number: ";
			cout << "\a";
			cin >> number;
		}
	} while (cin.fail() || 0 > number);
	return number;
}



int main() {
	cout<< enter_numbre()<<endl;
}