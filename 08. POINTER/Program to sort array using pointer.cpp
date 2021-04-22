#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int i, j, siz;
    int *ptr = ara;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> *ptr;
        ptr ++;
    }

    cout << endl;

    ptr = ara;

    for(i = 0; i < siz; i ++){
        for(j = i; j < siz; j ++){
            if(*(ptr + i) > *(ptr + j)){
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for(i = 0; i < siz; i ++){
        cout << *ptr << " ";
        ptr ++;
    }

    cout << endl;

    return 0;

}
