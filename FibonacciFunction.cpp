#include<iostream>
using namespace std;

void fibo(int a){
    int t1=0;
    int t2=1;
    int next;
     for(int i=1; i<=a; i++){
        cout<<t1<<" ";
        next=t1+t2;
        t1=t2;
        t2=next;

     }

}

int main(){
    int n;
    cout<<"Fibonacci till:  ";
    cin>>n;
    fibo(n);
    

    return 0;
}