#include <vector> // to use vectors
#include <iostream>
using namespace std;

int main(){
    // vector <data type> Var_name 
    vector<int> vNums= {10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800,900,1000,2000,};

    // use ranged loop as it container or use normal loop 
    cout<<"\n the output using ranged loop = ";
    for(int n: vNums){ // bad practise, every time 'n' copies the vector element and cout it 
        cout<<n<<" ";
    }
    cout<<endl;
}
