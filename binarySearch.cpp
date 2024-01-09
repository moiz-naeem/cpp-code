#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int k[], int key, int n)
{
    int x = 0;
    int y = n;

    while (x <= y)
    {
        int mid = (x + y) / 2;
        if (key == k[mid])
        { return mid;
        }
        else if(key>k[mid]){
            x=mid+1;
        }
        else{
            y=mid-1;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout << "Array length: ";
    cin >> n;
    int a[n];
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout<<"Key number: ";
    cin>>key;
    sort(a, a + n);
    cout<<"Sorted array: ";
     for (int i = 0; i < n; i++)
    {
        cout<<a[i] <<" ";
    }
    cout<<endl;

    int index = BinarySearch(a, key, n);
    cout << "Index of Key number: " <<index;
}