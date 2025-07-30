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

//void print_end_to_start(int end = 0, int start = 0);

// p1
//void ilove(int n ) {
//    if (n < 1 || n < 100) {
//        if (n != 0) {
//            cout << "I love Recursion" << endl;
//            ilove(n - 1);
//        }
//    }
//    else {
//        cout << "cannot do!" << endl;
//    }
//}


// p2 
void print1ton(int n, int current=1 ) { 
    if (current > n) return; 
    // 5--> input 
    //1 2 3 4 5 
     // 1 to n 
    cout << current << endl;
   
        
       
        //5-(6) = 1
        // 4-(4+1) = 1
        print1ton(n, current+1);
        
      

    
}

int main(){
    /* sum(1,50000000000000);*/
    // print_end_to_start(5, 1);
    /*power(4, 4);*/
    //ilove(3);
    ;    print1ton(5);
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


   
