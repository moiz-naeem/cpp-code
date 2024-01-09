#include <iostream>
using namespace std;
int main(){
   int min;
   int max;
   cout<<"From  ";
   cin>>min;
   cout<<"  to ";
   cin>>max;

   for(int min=2; min<max; min++){
    bool x=true;
    for(int i=2; i<min; i++){
        if(min%i==0){
            x=false;
            break;
        }
    }
    if(x==true){
        cout<<min <<" ";
    }
   }

    return 0;
}