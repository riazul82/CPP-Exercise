#include <iostream>
#include <iomanip>

#define SIZE 100

using namespace std;

int main()
{
    int i, j;
    int row, col;
    int A[SIZE][SIZE];
    bool isIdentity = true;

    label:
    cout << "Enter row size >>> ";
    cin >> row;

    cout << "Enter column size >>> ";
    cin >> col;

    cout << endl;

    if(row != col || row <= 1){
        cout << "Invalid input! Row & Column must be equal and greater than 1.";
        cout << endl << endl;
        goto label;
    }

    cout << "Enter array elements >>> " << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << "A [" << i << "][" << j << "] = ";
            cin >> A[i][j];
            if(i != j && A[i][j] != 0){
                isIdentity = false;
            }
            if(i == j && A[i][j] != 1){
                isIdentity = false;
            }
        }
        cout << endl;
    }

    cout << endl;

    cout << "MATRIX: " << endl << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << setw(5) << A[i][j]  << " ";
        }
        cout << endl;
    }

    cout << endl;

    if(isIdentity == true){
        cout << "The matrix is Identity matrix!" << endl;
    }else{
        cout << "The matrix is not Identity matrix!" << endl;
    }

    return 0;

}



