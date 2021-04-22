#include <iostream>

#define SIZE 100

using namespace std;

int main()
{
    int i, j;
    int row1, col1;
    int row2, col2;
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int S[SIZE][SIZE];

    cout << "Enter row1 size >>> ";
    cin >> row1;

    cout << "Enter column1 size >>> ";
    cin >> col1;

    cout << endl;

    cout << "Enter row2 size >>> ";
    cin >> row2;

    cout << "Enter column2 size >>> ";
    cin >> col2;

    cout << endl;

    cout << "Enter first array elements: ";
    cout << endl << endl;
    for(i = 0; i < row1; i ++){
        for(j = 0; j < col1; j ++){
            cout << "A [" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "Enter second array elements: ";
    cout << endl << endl;
    for(i = 0; i < row2; i ++){
        for(j = 0; j < col2; j ++){
            cout << "B [" << i << "][" << j << "] = ";
            cin >> B[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "A = ";
    for(i = 0; i < row1; i ++){
        for(j = 0; j < col1; j ++){
            cout << A[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }

    cout << endl;

    cout << "B = ";
    for(i = 0; i < row2; i ++){
        for(j = 0; j < col2; j ++){
            cout << B[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }

    cout << endl;

    if(row1 != row2 || col1 != col2){
        cout << "Summation is not possible!" << endl;
        return 0;
    }

    cout << "A + B = ";
    for(i = 0; i < row1; i ++){
        for(j = 0; j < col1; j ++){
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
        cout << "        ";
    }

    cout << endl;

    return 0;
}
