#include <iostream> 
using namespace std;

void input(int arr[100], int length){
    for(int i=0; i<length; i++){
        cout<<"enter "<<i+1<<" ";
        cin>>arr[i];
    }

}

void sum(int arr[100] , int length , int  index=0){
   static int res_sum = 0;
   
 if((length-1)< index){
    cout<<"the sum is: "<<res_sum<<endl;
    return ;
   }

    else{ 
        res_sum += arr[index];
    sum( arr ,  length ,  index+1);
    }
   
}

// another method
int sum2(int arr[100],int length , int index=0 ){

   if(length==index) return 0 ;
  return arr[index]+sum2( arr, length ,  index+1 );

}

int main(){
    int arr[100];
    cout<<"Enter N: ";
    int length;
    cin>>length;
    input(arr,length);
     sum( arr ,  length );
     cout<<"\n the another method: "<<sum2(arr,length);
}