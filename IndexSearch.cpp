#include <iostream>

using namespace std;

int main()
{   
    int num;
    int n;
    int key=-1;
    cout<<"Length of array: ";
    cin>>n;
    cout<<"Number you want to find: ";
    cin>>num;
    int arr[n];
    cout<<"Input for array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==num){
            key=i;
            break;
        }
    }
    
    cout<<"Index= " <<key;
    

    return 0;
}
