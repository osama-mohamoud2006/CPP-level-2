#include <iostream>
#include <cctype>
using namespace std;
int main(){
    // converts char to upercase
  cout<< (toupper('r') ) <<endl; // note if you didnot cast to char  it it will return ascii value not char --> 82  
   cout<< char (toupper('r') ) <<endl; // R 

   // converts char to lowercase 
   cout<<char(tolower('R'))<<endl; // r 

/// return true or false 

   // ask if it is upper or not 
    if(isupper('a')) cout<<"it is upper!"<<endl;
    else cout<<"it isnot upper!"<<endl;

      if(isupper('W')) cout<<"it is upper!"<<endl;
    else cout<<"it isnot upper!"<<endl;
  
    // ask it is lower or not
    if(islower('A')) cout<<"\nit is lower! "<<endl; 
    else cout<<"it isnot lower! "; 

     if(islower('a')) cout<<"\nit is lower! "<<endl; 
    else cout<<"it isnot lower! "; 
     
    /// is it number or not 
    //you should pass the number itself as char not its ascii value 
     if(isdigit('w')) cout<<"it is digit!"<<endl;
     else cout<<"it isn't digit! "<<endl;

     /// 1 --> 49 In ascii
     // number should be 0-9
      if(isdigit('49')) cout<<"it is digit!"<<endl;
     else cout<<"it isn't digit! "<<endl;

       if(isdigit('1')) cout<<"it is digit!"<<endl;
     else cout<<"it isn't digit! "<<endl;

   ///check if it is special char or not 
     if(ispunct('&')) cout<<"it is punction! "<<endl;
     else cout<<"it isn't punct! "<<endl;
      
     if(ispunct('y'))  cout<<"it is punction! "<<endl;
       else cout<<"it isn't punct! "<<endl;
 cout<<"\n___________________________________________________________\n";

       // to check if string is lower or upper or etc you should use for loop 
    string text = "Hello world!";
    for(char c : text)
        if(isupper(c)) cout<<c<<" isupper! "<<endl; // H isupper!

    for(char c: text)
    if(islower(c)) cout<<c; //elloworld

cout<<endl; 
    string text2 = "2497829045yeas";
    for(char c: text2 )
    if(isdigit(c)) cout<<c; //2497829045

cout<<endl; 

    string text3 = "*34**()*ERU%^&#@(#)(*!#_()!#$_!#$*(!$*()!$@#$&*@$&$!@*()))";
    for(char& c: text3)
    if(ispunct(c)) cout<<c; //***()*%^&#@(#)(*!#_()!#$_!#$*(!$*()!$@#$&*@$&$!@*()))
    
cout<<endl;


}