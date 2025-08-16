#include <iostream>
using namespace std;
int main(){
    
   int  x[3][4]={
         {1,2,3,4}
        ,{5,6,7,8}
        ,{9,10,11,12}
    };

    for(int i=0; i<3; i++){//for Rows
cout<<"\n hi iam Row "<<i<<endl;
        for(int j=0; j<4; j++){ //for Columns
            cout<<x[i][j]<<" ";
        }
          cout<<endl;
    }
}