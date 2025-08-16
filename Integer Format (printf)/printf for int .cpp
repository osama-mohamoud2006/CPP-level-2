#include <stdio.h>
#include <cstdio>
using namespace std;

int sum(int x , int y){
    return x+y;
}
int main(){
    /// print string with int variables
    int x = 56;
     int y= 90; 
     
    printf("this is int number: %d\n",y); // printing single number
    printf("the number %d is smaller than %d\n",x,y); // printing 2 numbers
     

    int s = 1; 
    int v= 10;
// width specification 
     printf("\nthe number is: %0*d\n",2,s); // 0%d tells the compiler(according to the number of fills you assigned) the number has one digit or 2 or whatever 
    printf("\nthe number is: %0*d\n",3,s); // this number has 3 digits
    printf("the number is: %0*d",3,v);
    printf("\nthe number is: %0*d\n",2,v);

    // you can print 2 var in the same sentense
    printf("\nthe sub of 2 numbers %d - %d = %d\n",v,s,v-s);
    printf("\nthe sum of 2 numbers  %d + %d = %d\n",s,v,sum(s,v));
}