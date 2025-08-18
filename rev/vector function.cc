#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    
 v.push_back(10); //--> front == first element
    v.push_back(20);
    v.push_back(30);
       v.push_back(60); 
         v.push_back(70); 
           v.push_back(80); 
            v.push_back(90); 
            v.push_back(420); 
               v.push_back(1000); // alloacted x2 block of memory
    v.push_back(40); // --> back == last element
       

        (v.empty()) ? cout<<"\nempty!\n" : cout<<"\nNAH\n";

    cout << endl;
    for (int &i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "\nthis is the first element in the vector: " << v.front() << endl;
    cout << "\nthis is the last element in the vector: " << v.back() << endl;

    cout<<"\nthe number of elements in the vector is: "<<v.size()<<endl;
    cout<<"\nthe amount of memory allocated for the vector is: "<<v.capacity()<<endl;

    v.clear();
    (v.empty()) ? cout<<"\nempty!\n" : cout<<"\nNAH\n";

}