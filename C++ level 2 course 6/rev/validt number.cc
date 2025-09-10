#include <iostream>
#include <limits>
using namespace std;
int main(){
    cout<<"enter number: ";
    int n =0;
    cin>>n;
    while(cin.fail()){
        cout<<"\nerror!\n";
        cin.clear();// to reuse cin>> 
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); // to flush the buffer ,remove incorrect input 
        cout<<"\nenter  agian\n";
        cin>>n;
    }
    cout<<"you entered: "<<n<<endl;
}