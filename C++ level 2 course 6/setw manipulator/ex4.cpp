#include <iostream>
#include <iomanip>
using namespace std;

/*

***1
**12
*123
1234
 
*/

int main(){
     
                 for(int i =1; i<=4; ++i)
                 {
                 
                            cout<<setfill('*')<<setw(5);
                            for(int j=1; j<=i; ++j){
                                cout<<j;
                            }
                            cout<<endl;

                 }



}