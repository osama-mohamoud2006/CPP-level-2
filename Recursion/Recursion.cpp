#include <iostream>
using namespace std;
//void sum(int s =0 , int end=0 ){
//    cout<<s<<endl;
//     if(s==end) return ;
//     else{
//        sum(s+1,end);
//     }
//
//}
//
// 
//void power(int number=0, int pow=0);


/*
* Given a number N. Print "I love Recursion" N

times.

Note: Solve this problem using recursion.
Input

Only one line containing a number N
(1?N?100)

.
Output

Print "I love Recursion" N

times.
Example
Input
Copy

3

Output
Copy

I love Recursion
I love Recursion
I love Recursion


*/



//void print_end_to_start(int end = 0, int start = 0);


void ilove(int n ) {
    if (n < 1 || n < 100) {
        if (n != 0) {
            cout << "I love Recursion" << endl;
            ilove(n - 1);
        }
    }
    else {
        cout << "cannot do!" << endl;
    }
}


int main(){
    /* sum(1,50000000000000);*/
    // print_end_to_start(5, 1);
    /*power(4, 4);*/
    ilove(300);
}

//void print_end_to_start(int end , int start ) {
//    if (end < start) {
//        cout << "go fuck yourself bitcccch!";
//        return; /// geeeeeeeet outttttttttttttttttttt!
//    }
//    
//    cout << end << endl;
//    if (end == start) return; // base
//    else print_end_to_start(end - 1, start);
//
//}


   
