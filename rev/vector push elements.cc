#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector push elements
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(8);
    for (int &c: v){
        cout<<c<<" ";
    }

    char c = 'y';
    while(c=='y'||c=='Y'){
    cout<<"\nenter element: ";
    int x =0;
    cin>>x;
     v.push_back(x);
     cout<<"\nyou want to add more? ";
     cin>>c;
    }
cout<<endl<<endl;
    for(int &o:v){cout<<o<<" ";}
}
