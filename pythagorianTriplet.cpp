#include <iostream>
using namespace std;

bool pyth(int x, int y, int z){
      int a=max(x, max(y,z));
      int b, c;
      if(a==x){
        b=y;
        c=z;
      }
      else if(a==y){
            b=x;
            c=z;
      }
      else{
        b=x;
        c=y;
      }
      return (a * a) == (b * b) + (c * c);
}

int main(){
    int max;
    int a,b,c;
    cout<<"Pythagorian triplet numbers: ";
    cin>>a>>b>>c;
   

    if(pyth(a, b, c)){
      cout<<a<<" "<<b<<" "<<c <<" is a pythagorian triplet \n";
    }
    else{
      cout<<"Given triplet is not a pythagorian triplet";
    }

    

    return 0;
}