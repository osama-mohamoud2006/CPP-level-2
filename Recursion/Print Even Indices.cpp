#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vector_fill(vector<int> & numbers,int &n ){

int n_to_push =0;
    cout<<"enter the number of elements you want: ";
    cin>>n;
   while(n>0){
    cout<<"enter the numbers you want: ";
    cin>>n_to_push;
      numbers.push_back(n_to_push);
      n--;
   }
   
}

void find_even_order(vector<int>  numbers , int index ){
  
   
    if(index < 0 ) return ;

    //7 -->input (n)
//1 5 8 2 3 9 11
      //   <-----       
//11 3 8 1 --> output
       
  //0 --> 1 p
if(index%2==0)
{
    cout<<numbers[index]<<" ";
} 

  find_even_order(numbers , index-1);


}



int main(){
    int n =0;
       vector<int> numbers;   
       
       vector_fill(  numbers ,n );
     find_even_order(  numbers ,n-1 );
     cout<<endl;
}
