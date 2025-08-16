#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
string print(){
  return "Go from here!";
}

int main(){
/// rev 

// // int
// int x= 10;
// printf("Hi iam int %d",x);
 
// int y =1000;
// printf("\nHi iam y %0*d",4,y);

// // float
// float pi = 3.1424534;
// printf("\nhi iam float %.*f",2,pi);
// printf("\nHi iam also float %.3f ;)",pi);

//  String and Char Format (printf)

//  you cann't use printf with string(i mean here var which its data type is string )


// C-style strings (char[]) are arrays of chars
// std::string is a C++ object that manages its own memory
char myname[] ="osama mohamoud";
char myage[]="19";

// print array of chars
printf("\nHi %s,how are you\n",myname);
printf("\nMy Age is %s\n",myage);

// will output garbage as printf doesn't support string data type 
//printf("\nthis is string function %s \n",print());

// incorrect way also ////
// char print_string[] = print();
// printf("\nthis array of chars iconverted string function to array of chars %s\n",print_string);


// here i converted string to array of chars bcz printf doesnot support string var 
// string print_f = print();
// char print_string[100] ;
// for(int i =0; i<print_f.length(); i++){
//    print_string[i]=print_f[i];
// }
// printf("\nthis is string converted to array of chars:  %s",print_string);

// another way to make printf accept string and print it
string str = print();
printf("\n\nhi iam string lol :%s\n",str.c_str());

// time for chars 
char c = 'L';
// n--> numbers is indicating the the number of spaces between the sentence and var(c)
printf("\nsetting width of c: %*c",1,c);//l
printf("\nanother one: %*c",2,c);//  l
printf("\nanother one: %*c",4,c);//    l

// you can also put the n you want like that without using '*' 
printf("\ni tried to put the no.of spaces without * :%12c",c);
// print char normally 
printf("\ni tried to put the c without any space :%c",c);


}