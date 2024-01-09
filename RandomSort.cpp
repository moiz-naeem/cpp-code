#include <bits/stdc++.h>
using namespace std;

 int bubbleSort(int b[], int c){

 for(int i=0; i<c; i++){
        for(int j=i+1; j<c; j++){
            
            if(b[j]<b[i]){
                int temp =b[i];
                b[i]=b[j];
                b[j]=temp;


            }
        }
    }
 }

int main(){
   int n;
   cout<<"Length of array: ";
   cin>>n;

   int a[n];
   for(int i=0; i<n; i++){
     cin>>a[i];
   }
   bubbleSort(a, n);
   for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
   }
   return 0;
}
