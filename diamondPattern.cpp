#include <iostream>
using namespace std;
int main(){
 int row;
  cout<<"Number of rows: ";
  cin>>row; cout<<endl;
 
 for(int i=1; i<=row; i++){
    for(int j=1; j<=row-i; j++){
        cout<<" ";
    }
    for(int k=1; k<=i; k++){
        cout<<"* ";
    } 
    cout<<endl;
    }
    
    
    for(int i=row-1; i>=1; i--){
        for(int k=i; k<row; k++){
            cout<<" ";
        }
        for(int l=1; l<=i; l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0; }
