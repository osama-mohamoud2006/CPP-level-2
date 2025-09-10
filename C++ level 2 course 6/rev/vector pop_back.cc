#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(23);
    v.push_back(223);
    v.push_back(221);
    v.push_back(321);
    v.push_back(323);
    v.push_back(2424);
    cout << "\nbefore using pop_back()\n";
    for (int &o : v)
    {
        cout << o << " ";
    }
    cout << endl;
    /// last in first out ///////////
    v.pop_back(); // remove 2424
    v.pop_back(); // remove 323
    for (int &o : v)
    {
        cout << o << " ";
    }
    v.pop_back(); // remove 321
    v.pop_back(); // remove 221
    v.pop_back(); // remove 223
    cout << "\n";
    for (int &o : v)
    {
        cout << o << " ";
    }
    cout << "\n";
    (v.empty() == true) ? cout << "\niam empty" : cout << "NAH"; // check if the vector is empty
    cout << "\nsize1:"<<v.size() << endl;


    v.clear(); // to remove all elements
    cout << "size2:"<<v.size() << endl;
    (v.empty() == true) ? cout << "\niam empty" : cout << "NAH";
    cout << "\n";
    for (int &o : v)
    {
        cout << o << " ";
    }
    cout << "\n";
}