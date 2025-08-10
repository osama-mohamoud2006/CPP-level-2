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
    string line ;
    while(getline(copy, line)){
         
            copy_to_vec.push_back(line);
         
    }
    copy.close();
  }
}

void push_vector_to_file(string path , vector<string> &copy_to_file)
{
     fstream tofile;
     tofile.open(path , ios::out); // write mode 

     if(tofile.is_open()){
        
        for(string &line : copy_to_file ){
            if(line!="") tofile<<line<<endl;
        }
        tofile.close();
     }
}


void delete_record(string path ,string record)
{
     vector<string> edited_file;
    push_file_to_vector( path , edited_file); // push data to vector first
    for(string &line : edited_file){ // make the desired record empty 
           if(line == record) line="";
    }
       push_vector_to_file(path ,edited_file );


}

void print_file_content(string path){
    fstream file;
    file.open(path , ios::in) ;//read mode
    if(file.is_open()){
        string str ;
        while(getline(file , str )){
            cout<<str<<endl;
        }
    }
}
int main(){
cout<<"before delete: ";
 print_file_content( "vector_output.text");
delete_record("vector_output.text" ,"alaa" );
cout<<"After delete: ";
 print_file_content( "vector_output.text");

}