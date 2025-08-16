#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> x ;
    x.push_back(10); // front ( first )
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);  // back ( last )
   
    // will print the first element 
    printf("\nthis is the first element: %d\n",x.front());

    // will print the last element 
    printf("\nhis is the last element: %d\n",x.back());

      // will print the number of elements in the vector 
    printf("\nthe size of the vector: %d\n",x.size());

    // will print the actual capacity of the vector
    printf("\nthe capacity is: %d\n",x.capacity());

    // return true if the vector is empty otherwise return false;
    printf("\nis empty? %d\n",(x.empty()));

    x.clear(); // delete all elements
    printf("\nis empty? %d\n",(x.empty())); // will print true as it is empty now :)

    


}