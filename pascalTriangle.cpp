#include<iostream>
using namespace std;

int fact(int x){
      int factorial=1;
      for(int i=2; i<=x; i++){
        factorial*=i;
      }
     return factorial;

}
int pascal(int a){
    for(int i=0; i<a; i++){
        for(int j=0; j<=i; j++){
        cout<<fact(i)/((fact(j)*fact(i-j)))<<"   ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Pascal triangle length :";
    cin>>n;
    pascal(n);

    return 0;
}
