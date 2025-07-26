#include <iostream>
#include"E:\projects\my library\AllStuff.h" 
using namespace AllStuff;
using namespace std;
int main()
{
	//int arr[10];
	//array_input(arr, 10); // array_stuff library 
	//cout << endl;
	// output
	// you cann't use ranged loop to fill array elements or fill any container it is using only for loop through the elements of an array or a container
	/*for (int &output : arr) {
		cout << output * 10 << endl;
	}*/
	//int sum = 0; 
	//string str = "32u112";
	// walkthrough (loop through ) elements of str
	//for (char loopthroughstr : str) 
	//	// trenaray if (short hand if)   if true      char_to_int--> in logic lib converts num which is char here to int  // else       
	//	(isdigit(loopthroughstr))? sum += char_to_int(loopthroughstr) : sum+=0 ;
	//
	//cout << "the sum = " << sum << endl;


	int arr[10];
	array_input(arr, 10);
	cout << endl;
	/*array_output(arr, 10, "output the array elements using traditional way: ");*/
	cout << "\n==============================================================\n";
	// output array 1 using ranged loop
	for (int output1 : arr) 
		/*cout << "array 1's ouput using ranged loop: " << output1 << endl;*/
	
cout << endl;

	int arr2[] = { 10,20,30,40,50 };
	// output using ranged loop
	for (int output2 : arr2)
		cout << "array2's ouput using ranged loop: " << output2 << endl;
	cout << endl;
}