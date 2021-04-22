#include <iostream>
#define SIZE 100

using namespace std;

int main()
{
    int A[SIZE][SIZE];
    int row, col;
    int i, j;
    int sum;

    label:

    cout << "Enter row size >>> ";
    cin >> row;

    cout << "Enter column size >>> ";
    cin >> col;

    cout << endl;

    if(row != col){
        cout << "Sum is not possible! Please input row & column same for scalar matrix!";
        cout << endl << endl;
        goto label;
    }

    sum = 0;

    cout << "Enter array elements >>> " << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << "A [" << i << "][" << j << "] = ";
            cin >> A[i][j];
            if(i == row - i - 1){
                sum += A[i][j];
            }
        }
        cout << endl;
    }

    cout << endl;

    cout << "A = ";
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << A[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }

    cout << endl;

    cout << "Sum is: " << sum << endl;

    return 0;

}
