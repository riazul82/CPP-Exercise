#include <iostream>

using namespace std;

int main()
{
    int MAT_A[100][100];
    int MAT_B[100][100];
    int row, col;
    int i, j;

    cout << "Enter row size >>> ";
    cin >> row;

    cout << "Enter column size >>> ";
    cin >> col;

    cout << endl;

    cout << "Enter elements of your first matrix: ";
    cout << endl << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << "MAT A[" << i << "][" << j << "] = ";
            cin >> *(*(MAT_A + i) + j);
        }
        cout << endl;
    }

    cout << "Enter elements of your second matrix: ";
    cout << endl << endl;
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << "MAT B[" << i << "][" << j << "] = ";
            cin >> *(*(MAT_B + i) + j);
        }
        cout << endl;
    }

    cout << endl;

    cout << "MAT A + MAT B" << endl;
    cout << endl;
    cout << "MAT C = ";
    for(i = 0; i < row; i ++){
        for(j = 0; j < col; j ++){
            cout << *(*(MAT_A + i) + j) + *(*(MAT_B + i) + j) << " ";
        }
        cout << endl;
        cout << "        ";
    }

    return 0;

}
