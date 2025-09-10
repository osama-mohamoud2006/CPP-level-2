#include<iostream>
using namespace std;

// function declaration
         // default parameter
int add(int a=0+10 , int b=0+12 ,int c=0+213 , int d=0+32  ); // right to left 



int main(){
                // no error will happen bcz  compiler used default parameter instead of b 
    cout<<"the result is: "<<add(1)<<endl;
  
    
    return 0; 
}
 //def
int add(int a , int b , int c ,int d){
   return a-b-c+d;
 }