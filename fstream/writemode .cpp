#include <fstream>
#include<iostream>
using namespace std ; 

int main(){

    fstream outputfile ; 
    outputfile.open("outputex.text",ios::out); // write mode
    if(outputfile.is_open())
    {
        outputfile<<"hello write mode! "<<endl;
        outputfile<<"i love sisi!"<<endl;

        outputfile.close();
    }

    

}
