#include<iostream>
using namespace std;

enum enmonth { jan = 1, feb = 2, mar = 3, apr = 4, may = 5, june = 6, july = 7, aug = 8, sep = 9, oct = 10, nov = 11, dec = 12 };

struct stmonth {
    int m;
};
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
    cout << "12 for december" << endl;
}
int input(stmonth& month) {
    cout << "enter the number of month you wish: " << endl;
    cin >> month.m;
    return month.m;
}

void output(stmonth month) {
    switch (month.m) {
    case enmonth::jan:
        cout << "it is january! " << endl;
        break;
    case enmonth::feb:
        cout << "it is february! " << endl;
        break;
    case enmonth::mar:
        cout << "it is march! " << endl;
        break;
    case enmonth::apr:
        cout << "it is april! " << endl;
        break;
    case enmonth::may:
        cout << "it is may! " << endl;
        break;
    case enmonth::june:
        cout << "it is june! " << endl;
        break;
    case enmonth::july:
        cout << "it is july! " << endl;
        break;
    case enmonth::aug:
        cout << "it is august! " << endl;
        break;
    case enmonth::sep:
        cout << "it is september! " << endl;
        break;
    case enmonth::oct:
        cout << "it is october! " << endl;
        break;
    case enmonth::nov:
        cout << "it is november! " << endl;
        break;
    case enmonth::dec:
        cout << "it is december! " << endl;
        break;
    default:
        cout << "invalid month! " << endl;
        break;
    }
}

int main() {
    stmonth month;
	print();
    input(month);
    output(month);
    return 0;
}