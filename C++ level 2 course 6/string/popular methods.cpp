#include <iostream>
#include <string>
using namespace std;

int main(){
    string text1 = "Hello world";
    cout<<text1.length()<<endl; // the number of characters 
    cout<<text1.size()<<endl; // the number of characters 
   cout<<text1.at(0)<<endl;  // return the char according to the index 
cout<<"\n____________________________________________________________________\n";
    string text2 = "my name is: ";
    cout<<"\n"<<text2.size()<<endl;
    cout<<"index 11 char is "<<text2.at(10)<<endl;
    text2.insert(11," osama"); // added (inserted)  string at specific index 
    cout<<"\n"<<text2<<endl;
    
    cout<<"the substr string is: "<<text2.substr(11,6)<<endl; // 11 is the start index, 6 is number of chars i want after the start index

    cout<<"\n____________________________________________________________________\n";

    string text3 = "H";
    cout<<"\nbefore using push_back('char'): "<<text3<<endl; 
    text3.push_back('i'); // added char to the end of string 
    cout<<text3<<endl;
    text3.push_back('!');
     cout<<text3<<endl; // Hi!
     text3.pop_back(); // will remove  the last char 
     cout<<text3<<endl; // Hi

    cout<<"\n____________________________________________________________________\n";

    string text4 = "find me!";
   cout<<"\n"<<"The first occurence of word \"me\": "<< text4.find("me")<<endl; // will return the index of the first occurence of string
   
   if(text4.find("hwl")==text4.npos){ //npos to handel exception of !find() 
     cout<<"\nthe string you asked to find isn't exit! "<<endl;
   }
   
   text4.clear(); // will clear the whole string 
   cout<<"\nHI iam empty fr: "<<text4<<endl; 

  



}