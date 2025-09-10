#include<iostream>
using namespace std;
/// eneter grades for no.of students user input and calculate its su, and avg
void input(int arr[100], int& length) {
	cout << "enter the length of array ";
	cin >> length;
	for (int i = 0; i <= length - 1; i++) {
		cout << "enter the value of " << i + 1 << endl;
		cin>> arr[i];
	}
}
void  output(int arr[100], int length) {
	
	for (int i = 0; i <= length - 1; i++) {
		cout << "value " << "[" << i + 1 << "]: " << arr[i] << endl;
		
	}
	cout << "---------------------------------" << endl;
	
	
}
double sum(int arr[100], int length) {
	int sum = 0;
	for (int i = 0; i <= length - 1; i++) {
		sum += arr[i];

	}
	
	return sum;

}
int main() {
	int arr[100];
	int length = 0;
	input(arr, length);
	 output(arr, length) ;
	cout << "---------------------------------" << endl;
	cout << "the total of grades is: " << sum(arr, length)  << endl;
	cout << "the avg of grades is: " << sum(arr, length) / length << endl;
}