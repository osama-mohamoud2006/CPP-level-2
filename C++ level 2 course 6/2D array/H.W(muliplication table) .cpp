#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

void header(){

    cout<<"\t"<<"Multplication Table"<<"\t"<<endl;
}

void ouput(int a[10][10]){
    cout<<endl;
    for(int r=0; r<10; r++){ // for rows
        cout<<"\t"<<r+1<<setw(5)<<"-->"<<setw(2);
       
        for(int c=0; c<10; c++) // for columns 
        {
            int res = a[r][c];
            cout<<(r+1)<<"*"<<(c+1)<<":"<<setw(5);
            printf("%0*d", 2,res);
         
           
        }
        
                cout<<endl;
    }
}

int main(){
// int multi [10][10];
 header();
int res[10][10];
  for(int r=0; r<10; r++){
     
    for(int c= 0; c<10; c++)
    {
       res[r][c]= (r+1)*(c+1);
    }
 }

  ouput(res);

}