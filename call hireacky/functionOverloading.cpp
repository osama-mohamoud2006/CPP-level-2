#include<iostream>
using namespace std;

int sum( int a, int b){
return (a+b);
}
int sum(float l , int n){
return(l+n);
}
int sum(int a,int b, int c){
return a+b+c;
}
int sum(int a, int b , int c , int d){
return a+b+c+d;
}
int main(){
   cout<<sum(1,4)<<endl; 
}