#include <iostream>

using namespace std;

int *makeDouble(int *arr, int siz);

int main()
{
    int ara[100];
    int siz, i;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    makeDouble(ara, siz);

    cout << endl;

    cout << "New array elements: ";
    for(i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}

int *makeDouble(int *arr, int siz){
    for(int i = 0; i < siz; i ++){
        *(arr + i) = 2 * (*(arr + i));
    }
    return arr;
}
