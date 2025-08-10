#include <iostream> // --> for ios::
#include <fstream> // --> to use files 
#include <string> // --> to use getline()
#include <vector> // --> to use vector
#include <iomanip>
using namespace std;
// store vector data to file 
void load_vector_to_file(string path , vector <string> v){

    fstream file ; 
    file.open(path , ios::out); // write mode 
    if(file.is_open()){
        cout<<"\a";
         for(string &t : v)
         file<<t<<setw(3)<<" ";

    file.close();
    }
}

int main(){
     vector <string> v{"mena","salma","alaa","hadua"};
     load_vector_to_file("vector_output.text" ,   v);
}