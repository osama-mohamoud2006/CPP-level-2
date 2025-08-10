/*
----------|     _______________
file      | --> _______vector___ ---> |||file||
----------|

*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void push_file_to_vector(string path , vector<string> &copy_to_vec)
{
  fstream copy;
  copy.open(path , ios::in); // read mode
  if(copy.is_open()){
    string line =" ";
    while(getline(copy, line)){
         if(line!=""){
            copy_to_vec.push_back(line);
         }
    }
    copy.close();
  }
}

void push 



int main(){
vector<string> copy_to_vec ;
 //push_file_to_vector("vector_output.text" ,copy_to_vec );


}