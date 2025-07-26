#include <iostream>
#include "E:\projects\my library\array_stuff.h"
#include <E:\projects\my library\inputs.h>
using namespace std;
using namespace inputs;

string trueorfalse(int i ) {
	string arr[2] = { "true","false" };
	return arr[i - 1];
}

int main() {
	//srand((unsigned)time(NULL));
	//int arr[100];
	//int arr2[100];
	//int arr3[1000];
	//int length = 5; 
	//int length2 = 0;
	/*array_input(arr, 5);*/
	//array_output(arr, length,"\narray1");
	//array_output_reverse(arr2, length2,"\narray2 reversed");
	/*array_filled_with_random_numbers(1, 100, arr3, "\narray filled with random ", 100);*/
	/*array_output(arr, 5, "\narray's output ");
	array_output(arr2, 5, "\narray's output reversed ");*/
/*	cout << "the max number in array is: " << max_number_in_array(arr, 5) << endl;
	cout << "the min number in array is: " << min_number_in_array(arr, 5) << endl;
	


	cout << "is 1 in array? " << is_number_in_array(1, arr, 5) << endl;
	cout << "\nthe avg of array elements is: ";
	cout << avg_of_array(arr, 5)<<endl;*/

	/*float number = enter_postive_number("enter postive number: ");
	cout << "\nthe number is " << number << endl;*/

	cout << read_full_line("enter word: ") << endl;
}