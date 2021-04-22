#include <iostream>

using namespace std;

int main()
{
    int MAT[100][100];
    int row, col;
    int i, j;

    cout << "Enter row size >>> ";
    cin >> row;

    cout << "Enter column size >>> ";
    cin >> col;

    cout << endl;

    cout << "Enter matrix elements: " << endl << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << "MAT A[" << i << "][" << j << "] = ";
            cin >> *(*(MAT + i) + j);
        }
        cout << endl;
    }

    cout << endl;

    cout << "MAT A = ";
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << *(*(MAT + i) + j) << " ";
        }
        cout << endl;
        cout << "        ";
    }

    return 0;
}
