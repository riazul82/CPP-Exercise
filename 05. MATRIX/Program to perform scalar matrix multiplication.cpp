#include <iostream>
#include <iomanip>

#define SIZE 100

using namespace std;

int main()
{
    int a, i, j;
    int row, col;
    int A[SIZE][SIZE];

    cout << "Enter row size >>> ";
    cin >> row;

    cout << "Enter column size >>> ";
    cin >> col;

    cout << endl;

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

    cout << "Enter number for multiplication >>> ";
    cin >> a;

    cout << endl << "A = ";
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << A[i][j] << " ";
        }
        cout << endl;
        cout << "    ";
    }

    cout << endl << "a.A = ";
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << a * A[i][j] << " ";
        }
        cout << endl;
        cout << "      ";
    }

    cout << endl;

    return 0;

}
