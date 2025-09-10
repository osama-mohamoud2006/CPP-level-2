#include <iostream>
using namespace std;
int main(){
    // + or - 
    int x =1;
    (x>0)? cout<<"\npostive!\n" : cout<<"\nnegative\n" ; 

    // nested ternary operator 
    int y =10;
    (y>0) ? cout<<"\n+\n": (y==0)? cout<<"\n0\n":cout<<"\n-\n";
 
}