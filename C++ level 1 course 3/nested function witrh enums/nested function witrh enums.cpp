#include <iostream>
using namespace std;
enum enmonth { jan=1, feb=2, mar=3, apr=4, may=5, jun=6, jul=7, aug=8, sep=9, oct=10, nov=11, dec=12 }; // enum declaration
void print() {
	cout << "please enter the month number: ";
	cout << "1 for january" << endl;
		cout << "2 for february" << endl;
		cout << "3 for march" << endl;
		cout << "4 for april" << endl;
		cout << "5 for may" << endl;
		cout << "6 for june" << endl;
		cout << "7 for july" << endl;
		cout << "8 for august" << endl;
		cout << "9 for september" << endl;
		cout << "10 for october" << endl;
		cout << "11 for november" << endl;
		cout<<"12 for december" << endl;
}
enmonth input() {
	int m;
	cin >> m;
	return (enmonth)m;  // castring int to enum
}

string monthoutput(enmonth months) {
	switch (months) {
	case enmonth::jan:	
		return "this month is jan";
		// i think return is necessary here
	
	case enmonth::feb:
		return "this month is feb " ;
	;
	case enmonth::mar:
		 return "this month is mar " ;
		break;
	case enmonth::apr:
		return  "this month is apr " ;
		
	case enmonth::may:
		return  "this month is may " ;
	
	case enmonth::jun:	
		return  "this month is jun " ;
	
	case enmonth::jul:
		return "this month is jul " ;
	
	case enmonth::aug:
		return "this month is aug " ;
		
	case enmonth::sep:
	return  "this month is sep " ;
	
	case enmonth::oct:
		return  "this month is oct " ;
		
	case enmonth::nov:
		return "this month is nov " ;
		
	case enmonth::dec:
		return  "this month is dec ";
		
	default:
		return "invalid month" ;
	}
	
}
int main() {
	print();
	cout << "enter month number: " << endl;
	cout << monthoutput(input());
	return 0;
}

