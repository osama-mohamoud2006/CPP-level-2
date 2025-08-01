#include <stdio.h>
using namespace std;
int main(){

float pi = 3.1424241241;
// %.*f
// print the float number , number is according the number of digits agter '.'
printf("the value is: %.*f",2,pi);
printf("the value: %.*f",3,pi);
printf("\nthe value: %.*f\n",5,pi);

float c= 8.0;
float x= 9.0;
// 3 is the number of digits after '.'
// if the number of digits less then 3 the ouput will be 9.000
printf("the div is: %.3f / %.3f = %.3f\n",c,x,(c/x));

double j=9.78;
// * means you should assign the number of digits after '.'
// %.3f means the digits after '.' will be 3
printf("the double value is: %.5f",j);
float m= 9.1;
printf("\nthe value is: %.1f\n",m);

}