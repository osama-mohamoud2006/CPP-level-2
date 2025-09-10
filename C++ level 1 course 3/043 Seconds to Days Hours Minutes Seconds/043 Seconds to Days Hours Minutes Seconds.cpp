#include <iostream>
#include <cmath>
using namespace std;
int main() {

	double seconds;
	cout << "Enter the number of seconds: ";
	cin >> seconds;

	double days = (seconds / 86400);
	float hours = ( fmod(seconds , 86400 ) ) / 3600;
	double minutes = ( fmod(seconds , 3600 ) ) / 60;
	double sec = ( fmod(seconds , 60) );
	cout << "Days: " <<	round(days) << endl;
	cout << "Hours: " << round(hours) << endl;
	cout << "Minutes: " << round(minutes) << endl;
	cout << "Seconds: " << round(sec) << endl;
	/////
	////////////////////////
	cout << fmod(10.23, 3.2) << endl;
}