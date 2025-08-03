#include <iostream>
#include <vector>
using namespace std;

int input_number(){
    printf("enter number: ");
    int n =0;
    
    cin>>n;
    while(cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        system("color 4f");
        cout<<"\a";

        printf("\n enter again: ");
        cin>>n;
    }
    system("color 0f");
    return n ;
}

int main(){
   cout<< input_number();
}