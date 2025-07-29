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

void print_end_to_start(int end = 0, int start = 0);


int main(){
    /* sum(1,50000000000000);*/
     print_end_to_start(5, 1);

}

void print_end_to_start(int end , int start ) {
    if (end < start) {
        cout << "go fuck yourself bitcccch!";
        return; /// geeeeeeeet outttttttttttttttttttt!
    }
    
    cout << end << endl;
    if (end == start) return; // base
    else print_end_to_start(end - 1, start);

}