#include <vector>
#include <iostream>
using namespace std;
struct stdata
{
    string name = "";
    short age = 0;
};
int main()
{
    stdata data;
    vector<stdata> vdata;

    data.name="ahmed";
    data.age = 10;
    vdata.push_back(data);

    for(stdata print : vdata ){
        cout<<print.name<<endl;
        cout<<print.age<<endl;
    }
    cout<<endl;

    data.name="mai";
    data.age=12;
    vdata.push_back(data);
      for(stdata print : vdata ){
        cout<<print.name<<endl;
        cout<<print.age<<endl;
    }
    cout<<endl;

}