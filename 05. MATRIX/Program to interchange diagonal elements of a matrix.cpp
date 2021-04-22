#include <iostream>

#define SIZE 100

using namespace std;

int main()
{
    int i, j;
    int row, col;
    int A[SIZE][SIZE];

    lebel:
    cout << "Enter row size >>> ";
    cin >> row;

    cout << "Enter column size >>> ";
    cin >> col;

    cout << endl;

    if(row != col){
        cout << "Interchange can't possible!" << endl;
        cout << "Row and Column size must be equal!" << endl;
        cout << "Enter row and column again..." << endl << endl;
        goto lebel;
    }

    cout << "Enter array elements: ";
    cout << endl << endl;

    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << "A [" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matrix before interchange: " << endl;
    cout << "A = ";
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << A[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }

    cout << endl;


    // Interchanging...

    for(i = 0; i < row; i ++){
        int temp = A[i][row - i - 1];
        A[i][row - i - 1] = A[i][i];
        A[i][i] = temp;
    }

    cout << endl;

    cout << "Matrix after interchange: " << endl;
    cout << "A = ";
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << A[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }

    return 0;
}


