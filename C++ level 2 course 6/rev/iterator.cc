#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    // define vector 
    vector<int>v{1,3,4,5,6,67};

    // define iterator 
    vector<int> ::iterator vit;//iterator acts like pointer
    
    for(vit = v.begin(); vit!=v.end(); vit++){printf("%d ",(*vit));}

}