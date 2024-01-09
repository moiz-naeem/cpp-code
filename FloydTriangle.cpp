#include <iostream>
using namespace std;
int main(){
    int pat;
cout<<"Pattern lines: ";
cin>>pat;
int b=1;

for (int i=1; i<pat; i++){
for(int j=1; j<=i; j++){
    cout<<b<<" ";
    b++;
}
cout<<endl;


}
    return 0;
}