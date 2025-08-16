#include <iostream>
#include <vector>
using namespace std;

int main()
{
 vector<int>x;
 x.push_back(10);
 x.push_back(11);
 x.push_back(12);

 // before using pop_back();
 for(auto c : x){
    cout<<c<<" ";
 }
cout<<endl;
 // remove the last element using pop_back()
 x.pop_back();

 // after using pop_back()--> removed the last element 
 for(auto c : x){
    cout<<c<<" ";
 }
cout<<endl;

// remove the remaining values 
  x.pop_back();
   x.pop_back();
   cout<<"Empty! ";
    for(auto c : x){
    cout<<c<<" ";
 }
cout<<endl;
 vector<int> x2;
 x2.push_back(90);
 x2.push_back(100);
  x2.push_back(200);
 x2.push_back(300);
// try to remove the entire vector using for loop 


/*
✅ First iteration:
i = 0, x2.size() = 4 → ✅ condition is true

pop_back() → removes the last element → x2.size() becomes 3

✅ Second iteration:
i = 1, x2.size() = 3 → ✅ still true

pop_back() → removes another → x2.size() becomes 2

❌ Third iteration:
i = 2, x2.size() = 2 → ❌ condition is now false, loop exits

➡️ So the loop stops early — only two elements are removed.
*/

 for(int i=0; i<x2.size(); i++){ // donot use this way to remove all vector elements as it won't remove all elements 
    x2.pop_back();
 }
cout<<endl;
 // to remove all elements safely
   x2.clear(); 
cout<<"Empty x2! ";
   for(auto c: x2){
    cout<<c<<" ";
   }
// check if it is empty
   if(x2.empty() ) printf("\nempty x2 using empty() ");

}