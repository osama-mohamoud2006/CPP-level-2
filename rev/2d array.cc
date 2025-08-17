#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
int main(){

    int arr[10][10];

    for(int i =0 ; i<10; i++) // for rows
    {
         for(int c=0; c<10; c++){
            printf("%d*%d =",i,c);
           cout<<setw(3)<<i*c<<setw(6)<<" ";
         }
         cout<<endl;
    }
}