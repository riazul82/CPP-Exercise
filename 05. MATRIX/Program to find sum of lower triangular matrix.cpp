#include <iostream>
#include <iomanip>

#define SIZE 100

using namespace std;

int main()
{
    int sum;
    int i, j;
    int row, col;
    int A[SIZE][SIZE];
    bool isLower = true;

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

    sum = 0;

    cout << "Enter array elements >>> " << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << "A [" << i << "][" << j << "] = ";
            cin >> A[i][j];
            sum += A[i][j];
            if(i < j && A[i][j] != 0){
                isLower = false;
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

    if(isLower == true){
        cout << "SUM IS: " << sum << endl;
    }else{
        cout << "The matrix is not lower triangular!" << endl;
    }

    return 0;

}



