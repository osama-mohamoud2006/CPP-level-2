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
	int sum = 0; 
	string str = "32u112";
	for (char loopthroughstr : str) 
		(isdigit(loopthroughstr))? sum += char_to_int(loopthroughstr) : sum+=0 ;
	
	cout << "the sum= " << sum << endl;

}