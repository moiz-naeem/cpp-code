#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n){
    int d=0;
    int p=0;
    int temp;

    while(n>0){
        temp = n%10;
        d += (temp*(pow(2,p)));
        p += 1;
        n /=10;
    }
   return d;
}

int OctalToDecimal(int n){
    int d=0;
    int p=0;
    int temp;
    while(n>0){
      temp = n%10;
      d += (temp*(pow(8,p)));
      p += 1;
      n /= 10;
    }
    return d;



}


int main(){
 int num1, num2;
 cout<<"Enter OCtal number: \n";
 cin>>num1;
 cout<<"Enter Binary number: \n";
 cin>>num2;
 int bDecimal=BinaryToDecimal(num2);
 int oDecimal = OctalToDecimal(num1);
 cout<<num2<<" into Decimal: "<<bDecimal<<endl;
 cout<<num1<<" into Decimal: "<<oDecimal<<endl;


    return 0;
}