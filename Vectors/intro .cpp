#include <vector> // to use vectors
#include <iostream>
using namespace std;

int main(){
    // vector <data type> Var_name 
    vector<int> vNums= {10,20,30,40,50,60,70,80,90,100,200,300,400,500,600,700,800,900,1000,2000,};

    // use ranged loop as it container or use normal loop 
    cout<<"\n the output using ranged loop = ";
    for(int n: vNums){ // bad practice , every time 'n' copies the vector element and cout it 
        cout<<n<<" ";
    }
    cout<<endl;


    // you can access vector elements like array with index
    cout<<"\n ouput using for loop with index= ";
    for(int o=0; o<vNums.size(); o++){ 
         cout<<vNums[o]<<" ";
    }
    cout<<endl; 

//"Using & can avoid unnecessary copies, which is more efficient when working with large objects like struct, class, or even string ."

    // beter use & to access vector elements it is faster and doesn't waste memory 
      cout<<"\n the output using ranged loop& = ";
    for(int &n: vNums){ 
        cout<<n<<" ";
    }
    cout<<endl;

    vector<string>VText ;
    VText.push_back("hi");
     VText.push_back("hi2");
      VText.push_back("hi3");
       VText.push_back("hi4");
    cout<<"\nstring ouput: ";
    for(string &v: VText){
       cout<<v<<" ";
    }
  cout<<endl;


vector<int>any;
   for(int i=0; i<any.size(); i++){
    cout<<"enter element: ";
    int n;
    cin>>n;
       any.push_back(n);
   }
   cout<<"\n \n output: ";
     for(auto out : any){
    cout<<out;
     }
     cout<<endl;

}
