#include <iostream>
#include <vector>
using namespace std;

void output_even( vector<int> &numbers , int index){
    //Print numbers in even indices
 // index will start from vector size -1 
    if(0>index) return ; // base case 
    if(index%2==0) cout<<numbers[index]<<" ";

    output_even(numbers , index -1);
}

int main(){
    vector<int>numbers;
    cout<<"enter the number of numbers you need: ";
    int n =0 ;
    cin>>n; // length 
int number =0;
    for(int i =0; i<n; i++){
        cout<<"\nenter number ";
        cin>>number;
        numbers.push_back(number);
    }
     output_even( numbers ,  n-1);

}