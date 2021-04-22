#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int i, siz;
    int *ptr = ara;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements: ";
    for(i = 0; i < siz; i ++){
        cin >> *ptr;
        ptr ++;
    }

    ptr = ara;

    cout << endl;

    cout << "Array elements: ";
    for(i = 0; i < siz; i ++){
        cout << *ptr << " ";
        ptr ++;
    }

    cout << endl;

    return 0;
}

