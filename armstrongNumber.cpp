#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number: ";
    cin>>n;
    m=n;
    int rem;
    int arm=0;
       
    
    while(n>0){
     
      rem=n%10;
      arm=arm+(rem*rem*rem);
       n=n/10;

    }
    cout<<endl; 
     if(arm==m){
        cout<<"Given number is an Armstrong number";
    }
    else{
        cout<<"Given number is not an armstrong number";
    }
    
    return 0;
}