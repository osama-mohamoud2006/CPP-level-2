#include <iostream>
#include "E:\projects\my library\AllStuff.h"
using namespace std;
using namespace AllStuff;



int main() {
	srand((unsigned)time(NULL));
	int arr[100];
	int arr2[100];
	int arr3[1000];
	int length = 5; 
	int length2 = 0;
	array_input(arr, 5);
	array_output(arr, length,"\narray1");
	array_output_reverse(arr2, length2,"\narray2 reversed");
	array_filled_with_random_numbers(1, 100, arr3, "\narray filled with random ", 100);
	array_output(arr, 5, "\narray's output ");
	array_output(arr2, 5, "\narray's output reversed ");
	cout << "the max number in array is: " << max_number_in_array(arr, 5) << endl;
	cout << "the min number in array is: " << min_number_in_array(arr, 5) << endl;
	


	cout << "is 1 in array? " << is_number_in_array(1, arr, 5) << endl;
	cout << "\nthe avg of array elements is: ";
	cout << avg_of_array(arr, 5)<<endl;

	float number21 = enter_postive_number("enter postive number: ");
	cout << "\nthe number is " << number21 << endl;

	float number2 = enter_number_from_to(1, 10.0, "enter from 1 to 100 ");
	cout << "\n" << number2 << endl;
	cout<<"mod is "<<calculator(4, 0, divison)<<endl;
	string num = "12345";
	int sum = 0; 
	for (int i = 0; i < num.length(); i++) {
		sum += char_to_int(num[i]);
	}
	cout << "the sum is: " << sum << endl;

	string random = "123ds";
	for (int j = 0; j < random.length(); j++) {
		if (is_it_number(random[j]) == true) cout << "\nit is number! " << random[j] << endl;
		else  cout << "\nit isn't number! " << random[j] << endl;
	}
}