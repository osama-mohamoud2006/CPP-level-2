#include<iostream>
using namespace std;
enum days{sat=1 , sun=2 , mon=3 , tues=4 ,wed=5 , thu=6 ,fri=7 };
struct day {
	int d;
};
void input(day& d) {
	cout << "enter the number of day you want : ";
	cin >> d.d;
}
void output(day d) {
	switch (d.d) {
	case days::sat:
		cout << "it is saturday " << endl;
		break;
	case days::sun:
		cout << "it is sunday! " << endl;
		break;
	case days::mon:
		cout << "it is monday! " << endl;
		break;
	case days::tues:
		cout << "it is tuesday! " << endl;
		break;
	case days::wed:
		cout << "it is wednesday! " << endl;
		break;
	case days::thu:
		cout << "it is thursday " << endl;
		break;
		case days::fri:
		cout << "it is friday! " << endl;
		break;
		default :
			cout << "wrong day !" << endl;
			break;
	}
}
int main() {
	day d;
	days days;
	input(d);
	output(d);
}