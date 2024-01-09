#include <bits/stdc++.h>
using namespace std;
 
 int BinaryAddition(int a, int b){
        int base=1;
        int carry=0;
        int temp1=0;
        int temp2=0;
        int add=0;
        
        while(a>0 || b>0 || carry>0){
            temp1=a%10; temp2=b%10;
            int ans = temp1+temp2+carry;

            int bit=ans%2;
            carry=ans/2;
            
             add+= bit*base;
             base*=10;
              a /=10; b /=10;
        }
        return add;

 }

int main(){
   int b1;
   int b2;
   cout<<"Give two binary numbers: ";
   cin>>b1>>b2;

    int addition= BinaryAddition(b1,b2);
    cout<<addition;


    return 0;
}