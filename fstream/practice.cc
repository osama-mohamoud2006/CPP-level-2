#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

void write_mode(string path)
{
    // write to file 
    fstream wfile;
    wfile.open(path , ios::out );
    if(wfile.is_open()){

        wfile<<"All my friends tell me I should move on"<<endl;
      wfile<<"I'm lying in the ocean, singing your song"<<endl;
    wfile<<"Ahh"<<endl; 
   wfile<<"That's how you sang it"<<endl;
   wfile<<"Loving you forever can't be wrong"<<endl;
  wfile<<"Even though you're not here, won't move on Ahh"<<endl;
   wfile<<"That's how we played it"<<endl;
   cout<<"Done!"<<endl; 
   cout<<"\a";
    wfile.close();
    }
}
void read_mode(string path)
{
  // ouput in console 
  // read mode
  fstream rfile;
  rfile.open(path , ios::in);
  if(rfile.is_open()){
    string line = "";
    while(getline(rfile,line)){
          cout<<line<<endl;
    }
    rfile.close();
  }
}
void copy_to_another_file(string path , string to="")
{
    fstream wfile;// for writing to second file
    fstream rfile ; // for reading (from first file)

  rfile.open(path , ios::in);// read mode
    wfile.open(to , ios::out | ios::app);//write mode
  

    if( rfile.is_open()){
     
        string str =" ";
        while(getline(rfile,str)){
        wfile<<str<<endl;
        }
        
rfile.close();
wfile.close();
        
    }
    
}
int main()
{
    write_mode("dark paradise.text");
    read_mode("dark paradise.text");
    copy_to_another_file("dark paradise.text" , "Copy-dark paradise.text");
}