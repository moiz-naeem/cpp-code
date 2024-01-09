#include <iostream>
using namespace std;

int fact(int a){
   int factorial=1;
   for(int i=2; i<=a; i++){
      factorial=factorial*i;
 }
   return factorial;
}

int main(){
    int n,r;
    cout<<"n: ";
    cin>>n;
    cout<<"r:";
    cin>>r;
    int ans=fact(n)/((fact(r)*fact(n-r)));
    cout<<ans;

    return 0;
}