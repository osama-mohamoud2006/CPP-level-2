//#include <iostream>
//using namespace std;
////void sum(int s =0 , int end=0 ){
////    cout<<s<<endl;
////     if(s==end) return ;
////     else{
////        sum(s+1,end);
////     }
////
////}
////
//// 
////void power(int number=0, int pow=0);
//
////void print_end_to_start(int end = 0, int start = 0);
//
//// p1
////void ilove(int n ) {
////    if (n < 1 || n < 100) {
////        if (n != 0) {
////            cout << "I love Recursion" << endl;
////            ilove(n - 1);
////        }
////    }
////    else {
////        cout << "cannot do!" << endl;
////    }
////}
//
//
//// p2 
//void print1ton(int n, int current=1 ) { 
//    if (current > n) return; 
//    // 5--> input 
//    //1 2 3 4 5 
//     // 1 to n 
//    cout << current << endl;
//   
//        
//       
//        //5-(6) = 1
//        // 4-(4+1) = 1
//        print1ton(n, current+1);
//        
//      
//
//    
//}
//
//int main(){
//    /* sum(1,50000000000000);*/
//    // print_end_to_start(5, 1);
//    /*power(4, 4);*/
//    //ilove(3);
//        print1ton(5);
//}
//
////void print_end_to_start(int end , int start ) {
////    if (end < start) {
////        cout << "go fuck yourself bitcccch!";
////        return; /// geeeeeeeet outttttttttttttttttttt!
////    }
////    
////    cout << end << endl;
////    if (end == start) return; // base
////    else print_end_to_start(end - 1, start);
////
////}
//
//
//   



#include <iostream>
using namespace std;
//vowels are "a", "e", "i", "o", "u"

string remove_vowel(string str = "", int c = 0);

int main() {
    cout << "\n" << remove_vowel("drake") << "\n";
}

//  string remove_vowel(string str){
//  string without = "";
//  for(char c : str){
//     if(c!='a' &&c!='e' &&c!='i'&&c!='o' && c!='u') without+=c;
//  }
//   return without ; 

//  }

string remove_vowel(string str, int c) {

    static string without = ""; // to store the res and not intilize each time 
    if (c == str.length()) return without; // base case
    else {

        if (str[c] != 'a' && str[c] != 'e' && str[c] != 'i' && str[c] != 'o' && str[c] != 'u') without += str[c];


        return remove_vowel(str, c + 1);
    }


}
