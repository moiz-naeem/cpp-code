#include<iostream>
using namespace std;
int main(){

int row;
cout<<"Number of rows: ";
cin>>row; cout<<endl;
int col=(2*row)-1;
 for(int i=0; i<row; i++){
    for(int j=1; j<=col; j++){
        if(j>=row-i && j<=col-i){
            cout<<"* ";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
 }



    return 0;
}