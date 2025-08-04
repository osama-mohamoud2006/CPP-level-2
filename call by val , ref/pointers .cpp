#include <iostream>
using namespace std;

int main(){
 int x = 20 ;
  int z =23; 
 int &y = x ; // takes the address of x 
cout<<x<<" "<<y<<endl;

 int * X_p ;
 X_p = &x ; // pointer points at x (has the address of x )
 X_p = &z ; 
 cout<<X_p<<endl; // will print address  

 
 


}