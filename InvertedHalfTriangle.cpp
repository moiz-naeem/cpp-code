//only works on square (rows=columns)
// #include<iostream>
// using namespace std;
// int main(){
// int row;
// cout<<"Rows:    ";
// cin>>row;
// int col;
// cout<<"Columns: ";
// cin>>col;
// cout<<endl;


// for(int n=row; n>=1; n--){
//     for(int j=1; j<=col; j++){
//         if(j>=n){
//             cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
int n;
cout<<" Pattern lines: ";
cin>>n;

for(int i=1; i<=n; i++){
    for(int j=1; j<=n ; j++){
        if(j<=n-i){
            cout<<"  ";
        }
        else{
            cout<<"* ";
        }

    }
     cout<<endl;
}

return 0;}