#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  int check = 1;
  while (check == 1)
  {
    
    int n;
    cout<<"Number you want to check: ";
    cin>>n;
    bool x = true;
    for(int i = 2; i <= sqrt(n); i++){
         
        if(n%i==0){
         x = false;
            break;
        }
    }
    if(x == true){
        cout<<n<< " is a prime number"<<endl;
        cout<<"1- Continue "<<endl;
        cout<<"0- Exit" << endl;
        cin>>check;

    }
    else if (x == false){
        cout<<n<<" is not a prime number" <<endl;
        cout<<"1- Continue "<<endl;
        cout<<"0- Exit" << endl;
        cin>>check;
    }
  }
    return 0;
}
    