#include <iostream>
using namespace std;
 int calc(int a, int b){
    return a+b;
 }

 float calc(float a, float b){
    return a+b;
 }

 int calc(double a, double b=1){
    return a/b;
 }

 int main(){
    cout<<calc(10.2, 2.2)<<endl;
 }
 
