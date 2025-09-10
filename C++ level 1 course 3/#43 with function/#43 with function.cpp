#include <iostream>
#include <cmath>

using namespace std;

double seconds(double totalsec) {
    return totalsec;
}

double days(double d, double totalsec) {
    double days = floor(totalsec / 86400);
    double remindar = fmod(totalsec, 86400);
    return days;
}

double hours(double h, double totalsec, double remindar) {
    double hours = floor(remindar / (60 * 60));
    remindar = fmod(remindar, 3600); // Use the existing remindar parameter
    return hours;
}

double minutes(double remindar) {
    double m = floor(remindar / 60);
    remindar = fmod(remindar, 60); // Use the existing remindar parameter
    return m;
}

int main() {
    double totalsec, d, h, remindar;
    cout << "Enter the number of seconds: ";
    cin >> totalsec;
    cout << " the number of days is: " << days(d, totalsec) << endl;
    cout << "the number of hours is: " << hours(h, totalsec, remindar) << endl;
    cout << "the number of minutes is: " << minutes(remindar) << endl;

    return 0;
}