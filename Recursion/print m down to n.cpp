// print m to n

#include <iostream>
using namespace std;

void print(int m , int n){
   cout<<m<<endl;
   if(m>n){
    print(m-1,n);
   }
   else{
    return ; 
   }
}

void reverse_print(int m , int c=1){
    //1,2,3,4,5 
    cout<<c<<endl;
    if(m>c) reverse_print(m,c+1);
    else return ; 
}
int main(){
    print(5,1);
}