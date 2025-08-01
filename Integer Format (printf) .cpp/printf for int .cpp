#include <stdio.h>
#include <cstdio>
using namespace std;

int main(){
    /// print string with int variables
    int x = 56;
     int y= 90; 
     
    printf("this is int number: %d\n",y); // printing single number
    printf("the number %d is smaller than %d\n",x,y); // printing 2 numbers
     

    int s = 1;
// width specification 
     printf("the number is: %0*d\n",2,s);

}