#include <iostream>
using namespace std;
int main()
{
    int a =10 ;
    int &a_a =a; // created  ref  of a (the same address , value )
    cout<<a<<endl; // will print 10
    cout<<a_a<<endl; // will print 10
    cout<<&a<<endl; // will print the address of a 
    cout<<&a_a<<endl;// will print the address of a 
    
    int *p_a = &a ; // pointer only store  ref 
    
    cout<<p_a<<endl; // will print the address of a 
    cout<<*p_a<<endl; // will print the value of a 
    *p_a = 30 ;
    cout<<*p_a<<endl; // will print the  new  value of a =30

    int y = 90 ;
    int &ry = y ; //the ref of a , alies
    cout<<ry<<endl; // will print the value of y = 90
    cout<<&ry<<endl; // will print the address of y 
    ry = 100; // changes will be applied to y also as its ref 
    cout<<y<<endl; // will print 100 
    cout<<ry<<endl; // will print 100 
    cout<<&y<<endl;  // will print the address of y 
    cout<<&ry<<endl; // will print the address of y 


     p_a = &ry ; // make the pointer points at y ( ref ry ) instead of a 
      cout<<p_a<<endl; // will print the address of y ( ref ry )
      cout<<*p_a<<endl; // will print the y value 


}