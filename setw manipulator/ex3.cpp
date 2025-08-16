#include <iostream>
#include <iomanip>
using namespace std;

/*
Name        Score
Osama         95
Ali           88
Mona         100

*/

int main(){

    
    string names[]= {"osama","Aya","Mona","Eman","Asia","Menna"};
    string grades[]={"95","100","90","80","76","90"};

                  cout<<setw(10)<<"______________________________\n";
                cout<<setw(10)<<"Name"<<setw(14)<<"Score"<<endl;
                cout<<setw(10)<<"______________________________"<<setw(8)<<"|"<<endl;

                   for(int i=0; i<6; i++)
                   {
                      cout<<setw(10)<<names[i]<<setw(12)<<grades[i]<<setw(8)<<"|"<<endl;

                   }

                 cout<<setw(10)<<"_____________________________"<<setw(8)<<"|"<<endl;



}