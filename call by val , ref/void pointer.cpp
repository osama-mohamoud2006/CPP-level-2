#include <iostream>
using namespace std; 
struct stdata{
    string name = " ";
    short age = 0 ; 
};
int main()
{
   int x= 10;
   float y = 20.32; 

   int  *ptr = &x; // ptr points to x 
   cout<<ptr<<endl; // address
   cout<<*ptr<<endl; // value 

   // you should make the pointer points to the same data type of the var he points at
   // ptr = &y ;  syntax error

   void *ptr2 ;
   ptr2 = &x ; 
   cout<<ptr2<<endl; // the address of x 
   // error you cann't deferencing void pointer 
   // cout<<*ptr2<<endl; --> syntax error 
  
   cout<< *(static_cast<int*>(ptr2))<<endl; // converted  void to int  to deferencing correctly 

   ptr2 = &y;
     cout<<ptr2<<endl; // the address of y
     cout<<*(static_cast<float*>(ptr2))<<endl;   // converted  void to float to deferencing correctly 


 stdata data ; 

data.name ="osama";
data.age = 19 ; 
 
ptr2 = &data ; // pointer points to var(data)
 cout<<ptr2<<endl; // the address of data (var)
 cout<<static_cast<stdata*>(ptr2)->name<<endl; // to covert void --> struct data type 


}