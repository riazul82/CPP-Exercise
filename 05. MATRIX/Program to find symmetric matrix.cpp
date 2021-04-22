#include <iostream>
#include <iomanip>

#define SIZE 100

using namespace std;

int main()
{
    int i, j;
    int row, col;
    int A[SIZE][SIZE];
    int T[SIZE][SIZE];
    bool isSymmetric = true;

    cout << "Enter row size >>> ";
    cin >> row;

    cout << "Enter column size >>> ";
    cin >> col;

    cout << endl;

    // INPUT + TRANSPOSE
    cout << "Enter array elements >>> " << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << "A [" << i << "][" << j << "] = ";
            cin >> A[i][j];
            T[j][i] = A[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "MATRIX A: " << endl << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << setw(5) << A[i][j]  << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "TRANSPOSE A: " << endl << endl;
    for(i = 0; i < col; i ++){
        for(j = 0; j < row; j ++){
            cout << setw(5) << T[i][j]  << " ";
        }
        cout << endl;
    }

    cout << endl;

    if(row == col){
        for(i = 0; i < row; i ++){
            for(j = 0; j < col; j ++){
                if(A[i][j] != T[i][j]){
                    isSymmetric = false;
                }
            }
        }
    }else{
        isSymmetric = false;
    }

    if(isSymmetric == true){
        cout << "The matrix is symmetric matrix!" << endl;
    }else{
        cout << "The matrix is not symmetric matrix!" << endl;
    }

    return 0;

}



