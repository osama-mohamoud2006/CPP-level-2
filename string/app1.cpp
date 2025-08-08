#include<iostream>
#include"E:\projects\my library\AllStuff.h"  
#include <string>
using namespace std; 
using namespace AllStuff;

string reverse(string word){
  char * rev ; 
  rev = new char[word.size()];

  for(int i=0; i<word.length(); i++){
      rev[i]= word[word.length()-1-i]; 
  }

  for(int i2=0; i2<word.size(); i2++){
    word[i2]=rev[i2];
  }
  delete [] rev;
  return word; 

}

int main(){
   
  
}