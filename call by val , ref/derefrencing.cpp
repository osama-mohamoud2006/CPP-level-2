#include <iostream>
using namespace std;

int main(){
    int a =10 ;
    int &z = a ; // same address , value  (create reference )
    cout<<z<<" "<<a <<endl;

/////////////////////////////////////
  int *ptr_x = &a; // pointer stores only address of variable 
  cout<<"\nso the address of a is: "<<ptr_x<<endl;

  // ' * ' is the key to get the value of the var from the value that the pointer pointed at it 
  cout<<"\nSO THE VALUE OF THE VARIABLE FROM THE O.VAR IS: "<<*ptr_x<<endl;

   // ' * ' is the key to get the value 
  *ptr_x = 20; // i changed the value of the var that pointer points at it 
  cout<<"\n\nAfter Changing: "<<endl;
  cout<<a<<endl;
  cout<<*ptr_x<<endl;

  a=50;
  cout<<"\n\nchanging the original var: "<<endl;
  cout<<"so the value of pointer is: " <<*ptr_x<<endl;

}