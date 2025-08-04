#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vector_fill(vector<int> & numbers){
int n =0;
int n_to_push =0;
    cout<<"enter the number of elements you want: ";
    cin>>n;
   while(n>0){
    cout<<"enter the numbers you want: ";
    cin>>n_to_push;
      numbers.push_back(n_to_push);
      n--;
   }
   reverse(numbers.begin(),numbers.end());
}

void find_even_order(vector<int>  numbers , int index=0 ){
    
    if(index == numbers.size() ) return ;

    //7 -->input (n)
//1 5 8 2 3 9 11
      //   <-----       
//11 3 8 1 --> output
       
  //0 --> 1 p
if(index%2!=0)
{
    cout<<numbers[index]<<" ";
} 

  find_even_order(numbers , index+1);


}



int main(){
       vector<int> numbers;   
       
       vector_fill(  numbers);
     find_even_order(  numbers);
     cout<<endl;
}
