#include <iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "enter number of days: ";
	float days;
	cin >> days;

	cout << "enter number of hours: ";
		float hours;
	cin >> hours;
	 
	cout << "enter number of minutes: ";
	float minutes;
	cin >> minutes;

	cout << "enter number of seconds: ";
	float seconds;
	cin >> seconds;

	float total_seconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
	cout << "Total seconds: " << round(total_seconds) << endl;



}