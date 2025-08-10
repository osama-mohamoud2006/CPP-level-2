#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void push_file_to_vector(string path , vector<string> &vfile)
{
    fstream tofile ; // read inside file then push to vector 
    tofile.open(path , ios::in); // read mode 
    if(tofile.is_open()){
            
        string str ="";
        while(getline(tofile , str)){
            vfile.push_back(str); // push each line in file to vector 
        }
        tofile.close();

    }
}

void push_vector_to_file(string path , vector<string> &vfile){
    fstream ffile;
    ffile.open(path , ios::out ); // write mode 
    
    for(string &str : vfile)
         ffile<<str<<endl;
    
ffile.close();        

}

void update_record(string path , string record ,string erecord ){
    vector<string> vedit ; 
    push_file_to_vector( path ,vedit ); // push file data to vector 

    for(string &line : vedit){ // walk through vector to make edit 
           if(line == record) line = erecord;
    }
     push_vector_to_file( path , vedit); // push edited vector to file 
}

void print_file(string path ){
    fstream read ; 
    read.open(path , ios::in); // read mode
    if(read.is_open()){
        string str = "";
        while(getline(read, str)){
            cout<<str<<endl;
        }
        read.close();
    }
}

int main(){
    
    cout<<"before edit: ";
    print_file("vector_output.text");
    cout<<"\n\nafter editing: ";
    update_record( "vector_output.text", "mena" ,"Mikasa" );
      print_file("vector_output.text");
}