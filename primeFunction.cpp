#include <iostream>
#include<cmath>
using namespace std;

bool prime(int a){
   
           for(int j=2; j<=sqrt(a); j++){
            if(a%j==0){
                return false; 
            }
           }
        
           return true;

      }



int main(){
    int x,y;
    cout<<" From: ";
    cin>>x;
    cout<<"to: ";
    cin>>y;
    for(int i=x; i<=y;i++){
        if(prime(i)) {
            cout<<i<<" ";
        }
    }
    return 0;
}