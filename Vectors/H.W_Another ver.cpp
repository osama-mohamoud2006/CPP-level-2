#include <iostream>
#include <limits>
#include <vector>
#include <iomanip>
#include <stdio.h>
using namespace std;
 
void read_number(vector <int> & add ){
 
    char c = 'y';
    
    while(c=='y'||'Y'){
        int n =0 ;
        cout<<"enter number to add to vector: ";
        cin>>n;
        add.push_back(n);

        cout<<"\n you want to add another? ";
        cin>>c;
        if(c!='y'||c!='Y') break;
    }
    

}
 // use & is recommended here 
void print(vector <int> & add){
    cout<<"\nvector elements: ";
    for(int &i : add){
       printf("%0*d",2,i);
       cout<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int>  add ;
   read_number( add );
   print(add);

}