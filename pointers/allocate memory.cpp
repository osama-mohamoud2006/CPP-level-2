#include <iostream>
using namespace std;

int main()
{
    int * ptr1 ;
    float  * ptr2 ; 

    // dynamically allocate memory
    ptr1 = new int ; 
    ptr2 = new float ; 
    
   // assign values 
    *ptr1 = 24; 
    *ptr2 = 90.2f; 

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;

    // deallocate the memory
    delete ptr1 ;
    delete ptr2 ;
}