# include <iostream>
using namespace std;
int main()
{

   int arr2[]= {23,24,24};
   cout<<arr2<<endl;// will print the address of first index in array 
 cout<<*arr2<<endl; // will print the value of first index in array 


   int arr[]= {1,2,3,4,5,6,7,8,9,10};
   int *Ap = arr ; // make pointer points at array

    cout<<arr<<endl; // will print the address of first index in array 
   cout<<*arr<<endl; // will print the value of first index in array 
  
   cout<<Ap<<" "<<*Ap<<endl;  // pointer will print the first index value and address 




}