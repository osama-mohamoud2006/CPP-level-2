#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void read_data_and_output_it_toScreen(string filepath)
{
    fstream out ;
    out.open(filepath , ios::in); // read mode
    if(out.is_open()){
        string currenLine =" ";
        while(getline(out,currenLine )){
            cout<<currenLine<<endl;
        }
       out.close();
    }
}

int main(){
    // random data to read.text
    read_data_and_output_it_toScreen("randomdatatoread.text");


}