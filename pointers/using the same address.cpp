#include <iostream>
using namespace std;

int main(){
// then x,a have the same address 
int a =10;  
int &x=a ; 
cout<<x<<" "<<a<<endl; // will print 10 10 as x==a(in the address , in the value )
 x = 30 ;
 cout<<x<<" "<<a<<endl; // will print 30 30 as x==a(in the address , in the value )
 a= 50 ; 
 cout<<x<<" "<<a<<endl; // will print 50 50 as x==a(in the address , in the value )
}