#include <iomanip>
#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
      cout<<setfill('-')<<setw(5)<<"name"<<setw(5)<<" age"<<endl;
      cout<<setw(5)<<"osama"<<setfill('-')<<setw(5)<<"19"<<endl;
int x =1 ;
      printf("%3d",x); // 3 spaces before number
       printf("\n%03d\n",x); // zero padding 

       cout<<setfill('0')<<setw(3)<<x<<endl;// zero padding 
       auto t = 10; 
       cout<<setw(3)<<t<<endl;// zero padding 

}