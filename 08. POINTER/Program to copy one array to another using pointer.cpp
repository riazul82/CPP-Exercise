#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int arr[100];
    int i, siz;
    int *ptr1 = ara;
    int *ptr2 = arr;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements: ";
    for(i = 0; i < siz; i ++){
        cin >> *ptr1;
        ptr1 ++;
    }

    ptr1 = ara;

    for(i = 0; i < siz; i ++){
        *ptr2 = *ptr1;
        ptr1 ++;
        ptr2 ++;
    }

    ptr1 = ara;
    ptr2 = arr;

    cout << endl;

    cout << "Copied array elements: ";
    for(i = 0; i < siz; i ++){
        cout << *ptr2 << " ";
        ptr2 ++;
    }

    cout << endl;

    return 0;
}
