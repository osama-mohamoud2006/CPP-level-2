#include <iostream>
using namespace std;
 
int sum(){  
   //  int n = 0; 
     // the value will be 1 as the the var life time ends when funtion call end , so it will be intialized 
     // every time i call the function 

    // static int n =1;
     // the var wonot intilize again as it is "static variable" the value will be the same on the entire
     // program life time 
      const int n =1;
     // it is const wonot change anyways 
    // n++;
    return n;
}

int main(){
    cout<<sum()<<endl;
   cout<<sum()<<endl;
    cout<<sum()<<endl;
}