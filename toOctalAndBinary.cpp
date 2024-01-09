#include <bits/stdc++.h>
using namespace std;

// int DecimalToBinary(int n){
//       int temp;
//       int d=0;
//       int p=0;
//       int A[p];
    
//       while(n>0){
//               temp=n%2;
//      p=p+1;
//      A[p]=temp;
//       n=n/2;
//       }
//        for(int i=p; p>0; p--){
//         cout<<A[p]<<" ";
//     }

// }

int decimalToBinary(int n){
    int b=0;
    int p=1;
    int temp;
    while(n>0){
       temp=n%2;
       b += (temp*p);
       n /=2;
       p*=10;
    }
    return b;
}

int decimalToOctal(int n){
    int b=0;
    int p=1;
    int temp;
    while(n>0){
       temp=n%8;
       b += (temp*p);
       n /=8;
       p*=10;
    }
    return b;
}



int main(){
   int n;
   cout<<"Decimal number: ";
   cin>>n;

//    int binary= DecimalToBinary(n);
//    cout<<binary;

int num1 = decimalToOctal(n);
int num2 = decimalToBinary(n);
   cout<<n<< " in octal is: "<<num1<<endl;
   cout<<n<<" in binary is: "<<num2<<endl;



    return 0;
}