

#include <iostream>
using namespace std;

//    int a[3][3]={1,3,5,3,2,5,3,6,3};
//    int b[3][3]={{7,8,3},{4,5,2},{2,5,7}};


int main() {
    int a[3][3];
    int b[3][3];
    int c[3][3];

    cout << "Enter values for matrix A (3x3): " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter values for matrix B (3x3): " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> b[i][j];
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "A x B = " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
