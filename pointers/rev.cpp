#include <iostream>
using namespace std;
int main()
{
   int *ptr = new int ; // pointer to store var in heap (dynamic memory allocation )
   *ptr = 900; 
   cout<<*ptr<<endl;
   cout<<ptr<<endl;
   delete ptr ; // deallocation 
    
   int * ptr2 = new int ;
   *ptr2 = 100;
   cout<<*ptr2<<endl; 
   delete ptr2 ;  // deallocation 
   

  

}