#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
//read file and make the data stores in vector 
void file_to_vector(string path , vector<string> & vf)
{
    fstream file ;
    file.open(path , ios::in); // read mode (ios::in reads file content)
    if(file.is_open()){
        string line = " "; 
        while(getline(file , line))
            vf.push_back(line); // push each line to vector 
           // cout<<line<<endl; // normal print file content on console screen 
        

    file.close();
    }
}

int main(){

    vector<string>  vf;
  file_to_vector("id.text" ,  vf);

    for(string &line: vf)
        cout<<line<<endl;
    
}