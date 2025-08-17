#include <stdio.h>

int sum (int a , int b){
    return a+b;
}

int main(){
    int x =10;
    int y=20;
    printf("the is single number %d",10);
    printf("\nthis is x value %d",x);
    printf("\nx and y are %d %d",x,y);

    int w =100;
    printf("\n%0*d",2,w);//--> %0*d , no.of digits
    printf("\n %04d",w); // -> %0no.of digits d

    printf("\nthe sum of %d + %d = %d",x,y,x+y);
        printf("\nthe sum of %03d + %03d = %03d",x,y,x+y);
        
        printf("\nthe value from functiuon is %0*d",3,sum(x,y));

}