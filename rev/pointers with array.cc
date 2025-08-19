#include <iostream>
using namespace std;

int main(){

    int arr[]={10,20,40,60};
    cout<<arr<<endl; // the address of the first element in array 
    cout<<*arr<<endl; // the value of the first element in array 
    
    int arr2[]={90,80,70,60};
    int *ptr = arr2; // ptr = the address of array 
    cout<<arr2<<endl; // the address of 1st element
    cout<<ptr<<endl; // the address of 1st element
    cout<<*arr2<<endl;// the value of the first element in array 
    cout<<*ptr<<endl;// the value of the first element in array 

    cout<<ptr<<endl; // 1 first element (address)
    cout<<ptr+1<<endl;// 2 second element (address)
    cout<<ptr+2<<endl;// 3 third element (address)
}