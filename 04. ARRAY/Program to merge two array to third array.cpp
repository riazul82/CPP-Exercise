#include <iostream>

using namespace std;

int main()
{
    int arr[200];
    int ara1[100];
    int ara2[100];
    int siz1, siz2;
    int i, j, siz3;

    cout << "Enter first array size >>> ";
    cin >> siz1;

    cout << "Enter first array element >>> ";
    for(i = 0; i < siz1; i ++){
        cin >> ara1[i];
    }

    cout << endl;

    cout << "Enter second array size >>> ";
    cin >> siz2;

    cout << "Enter second array element >>> ";
    for(i = 0; i < siz2; i ++){
        cin >> ara2[i];
    }

    siz3 = siz1 + siz2;

    for(i = 0; i < siz1; i ++){
        arr[i] = ara1[i];
    }

    for(j = i; j < siz3; j ++){
        arr[j] = ara2[j - siz1];
    }

    cout << endl << "Merged array: ";
    for(i = 0; i < siz3; i ++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
