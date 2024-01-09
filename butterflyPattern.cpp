#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Butterfly width: ";
    cin >> n;

   
    for (int i = 1; i <= n/2; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= i || j >= n - i + 1) {
                cout << "* ";
            }
           else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    
    for (int i = (n/2) ; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (j <= i || j >= n - i + 1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
