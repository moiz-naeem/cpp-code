#include <iostream>
using namespace std;
int main()
{ 
  bool check = true;
  int n;
  cout<<"Enter the length of the number: ";
  cin>>n;
  int a[n];
 cout<<" Enter the number one by one: ";

 for(int i=0; i<n; i++){
  cin>>a[i];
 
  }
 

  for(int i=0; i<n/2; i++){

  if(a[i] != a[n-i-1]){
    check=false;
    break;
  }
 
 }
 
  if(check==true){
    cout<<"Given number is palindrome"<<endl;
  }
  else if(check==false){
    cout<<"Given number is not a palindrome"<<endl;
  }
  return 0;
}