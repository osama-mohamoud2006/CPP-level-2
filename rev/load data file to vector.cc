#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

vector<string> push_dataFromFile_to_vector(string path)
{
    vector<string> vdata;
    fstream push_data;
    push_data.open(path, ios::in); // read mode
    if (push_data.is_open())
    {
        string to_push = " ";
        while (getline(push_data, to_push))
        {
            vdata.push_back(to_push);
        }

        push_data.close();
    }

    return vdata;
}

int main()
{
    
      //vector to store the result 
    vector<string> print_data_from_file_to_screen;

    print_data_from_file_to_screen = push_dataFromFile_to_vector("randomdatatoread.text");
    
    //iterator to print the content of the vector 
    vector<string>::iterator vp;
    for (vp=print_data_from_file_to_screen.begin();vp!=print_data_from_file_to_screen.end(); vp++ ){
        cout<<*(vp)<<endl;
    }
}