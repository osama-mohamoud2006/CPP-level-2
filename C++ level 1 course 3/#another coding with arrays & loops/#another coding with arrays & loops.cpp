//#include<iostream>
//using namespace std;
//
//
//void input(int arr[12] , int &length) {
//	cout << "enter the number of subjects you want: ";
//	
//	cin >> length;
//	for (int i = 0; i <= length-1; i++) {
//		cout << "enter subject " << "{" << i + 1 << "] " << "grade" << endl;
//		cin >> arr[i];
//	}
//}
//void ouput(int arr[12] , int length) {
//	int sum = 0;
//	for (int i = 0; i <= length-1; i++) {
//		cout << "subject " << "{" << i + 1 << "] " << arr[i] << endl;
//		
//		 
//	}
//	
//}
//int sum(int arr[12], int length) {
//	int sum = 0;
//	for (int i = 0; i <= length-1; i++) {
//		sum += arr[i];
//	}
//	return sum;
//}
//
//int main() {
//	int arr[12];
//	int length;
//	
//	input(arr, length);
//	ouput(arr, length);
//	cout<<sum(arr, length)<<endl;
//	cout << "the avg is: " << ( sum(arr, length) / length) << endl;
//	return 0;
//}
#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};


void ReadInfo(strInfo& Info)
{

    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;

}

void PrintInfo(strInfo Info)
{

    cout << "\n**********************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "\n**********************************\n";


}



void ReadPersonsInfo(strInfo Persons[20], int &length)
{
	cout << "enter the number of persons you want to enter: ";
    cin >> length;
    for (int i = 0; i <= length - 1; i++) {
        ReadInfo(Persons[i]);
    }
}


void PrintPersonsInfo(strInfo Persons[20] , int length )
{
    cout << "\n**********************************\n";
   
    for (int i = 0; i <= length - 1; i++) {
         PrintInfo(Persons[i]);
    }
  
   

}



int main()
{

    strInfo Persons[20];
    int length = 0;
    ReadPersonsInfo(Persons, length);
    PrintPersonsInfo(Persons, length);

    return 0;
}
