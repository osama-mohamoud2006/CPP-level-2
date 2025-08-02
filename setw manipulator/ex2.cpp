#include <iostream>
#include <iomanip>
using namespace std;

/*
from 1 to 20 
0001 0002 0003 ... 0020
*/
int main(){

for(int i=1; i<=20; i++){
    cout<<setfill('0')<<setw(4)<<i<<" ";
}

}