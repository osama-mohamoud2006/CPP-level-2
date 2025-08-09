#include <fstream>
#include<iostream>
using namespace std ; 

int main(){

    fstream outputfile ; // create file stream object (not opened yet)

    // open file for writing (overwrite if exists)
    outputfile.open("output_text.text",ios::out); // write mode,
    if(outputfile.is_open()) // check if file opened successfully
    {
        
        for(int i=0; i<10; i++)
        outputfile<<"lol "<<i<<endl;

        outputfile.close(); // close the file
    }

}
