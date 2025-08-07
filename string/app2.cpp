#include <iostream>
#include <string>
using namespace std;

string nchar(string word)
{ 
    // w --> x 
    string res= "";
    for(int i=0; i<word.length(); i++){
      //
       res += word[i]+'1'; 
    }
    return res; 

}

int main(){
    cout<<"enter: ";
    string word ; 
    cin>>word;
    cout<<nchar(word)<<endl;
}