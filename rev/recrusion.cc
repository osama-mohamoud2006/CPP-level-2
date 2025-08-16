#include <iostream>
using namespace std;

int one_to_n(int n)
{
// n to 1 

    cout << n << endl;
    if (n == 0)
        return 0;
    else
        return one_to_n(n - 1);
}

void n_to_1(int to){
    static int n =1 ;
  // 1 to n 
  cout<<n<<endl;
  if(to!=1) 
  {
    n+=1;
    n_to_1( to-1);
  }
else return ;
}

int main()
{
   n_to_1(5) ;
}