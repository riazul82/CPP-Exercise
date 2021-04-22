#include <iostream>

#define SIZE 100

using namespace std;

int main()
{
    int i, j, k;
    int row1, col1;
    int row2, col2;
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int M[SIZE][SIZE];

    lebel:
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

    if(col1 != row2){
        cout << "Multiplication can't possible! " << endl;
        cout << "Column of first matrix must be equal to the row of second matrix." << endl;
        cout << "Please enter row and column again..." << endl << endl;
        goto lebel;
    }

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

    // Multiplying...

    for(i = 0; i < row1; i ++){
        for(j = 0; j < col2; j ++){
            int sum = 0;
            for(k = 0; k < col1; k ++){
                sum += (A[i][k] * B[k][j]);
            }
            M[i][j] = sum;
        }
    }

    cout << endl;

    cout << "A * B = ";
    for(i = 0; i < row1; i ++){
        for(j = 0; j < col2; j ++){
            cout << M[i][j] << " ";
        }
        cout << endl;
        cout << "        ";
    }

    return 0;
}



