#include <iostream>
#include <iomanip>
using namespace std;
/*
Num   Square   Cube
  1        1      1
  2        4      8
  3        9     27
  4       16     64
  5       25    125
*/

int main(){

             cout<<"____________________________"<<endl;

          cout<<"\n"<<setw(5)<<"Num"<<setw(9)<<"Square"<<setw(8)<<"cube"<<endl;
                 for(int i=1; i<=5; i++){
                  cout<<setw(5)<<i<<setw(9)<<i*i<<setw(8)<<i*i*i<<endl;
              }

              cout<<"____________________________"<<endl;



}