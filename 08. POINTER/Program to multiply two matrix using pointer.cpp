#include <iostream>

using namespace std;

int main()
{
    int MAT_A[100][100];
    int MAT_B[100][100];
    int MAT_C[100][100];
    int row1, col1;
    int row2, col2;
    int i, j, k;

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

    cout << endl;

    cout << "Enter elements of your first matrix: ";
    cout << endl << endl;
    for(i = 0; i < row1; i ++){
        for(j = 0; j < col1; j ++){
            cout << "MAT A[" << i << "][" << j << "] = ";
            cin >> *(*(MAT_A + i) + j);
        }
        cout << endl;
    }

    cout << "Enter elements of your second matrix: ";
    cout << endl << endl;
    for(i = 0; i < row2; i ++){
        for(j = 0; j < col2; j ++){
            cout << "MAT B[" << i << "][" << j << "] = ";
            cin >> *(*(MAT_B + i) + j);
        }
        cout << endl;
    }

    cout << endl;


    // MULTIPLYING...

    for(i = 0; i < row1; i ++){
        for(j = 0; j < col2; j ++){
            int sum = 0;
            for(k = 0; k < col1; k ++){
                sum += (*(*(MAT_A + i) + k)) * (*(*(MAT_B + k) + j));
            }
            *(*(MAT_C + i) + j) = sum;
        }
    }

    cout << "MAT A * MAT B" << endl;
    cout << endl;
    cout << "MAT C = ";
    for(i = 0; i < row1; i ++){
        for(j = 0; j < col1; j ++){
            cout << *(*(MAT_C + i) + j) << " ";
        }
        cout << endl;
        cout << "        ";
    }

    return 0;

}

