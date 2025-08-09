#include <iostream>
#include <cctype>
using namespace std;
int main(){
    // converts char to upercase
  cout<< (toupper('r') ) <<endl; // note if you didnot cast to char  it it will return ascii value not char --> 82  
   cout<< char (toupper('r') ) <<endl; // R 

   // converts char to lowercase 
   cout<<char(tolower('R'))<<endl; // r 

   // ask if it is upper or not 
    if(isupper('a')) cout<<"it is upper!"<<endl;
    else cout<<"it isnot upper!"<<endl;

      if(isupper('W')) cout<<"it is upper!"<<endl;
    else cout<<"it isnot upper!"<<endl;
  
    // ask it is lower or not
    if(islower('A')) cout<<"\nit is lower! "<<endl; 
    else cout<<"it isnot lower! "; 

    
    string text = "Hello world!";
}