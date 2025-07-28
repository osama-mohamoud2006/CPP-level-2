#include<iostream>
using namespace std;

// function defination 
         // default parameter
int add(int a , int b=0){
    return a+b;
}

int main(){
    cout<<"the result is: "<<add(1)<<endl;
    return 0; 
}