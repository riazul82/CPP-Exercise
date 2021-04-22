#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int *ptr1 = ara;
    int *ptr2;
    int siz, temp;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(int i = 0; i < siz; i ++){
        cin >> *ptr1;
        ptr1 ++;
    }

    ptr1 = ara;
    ptr2 = &ara[siz - 1];

    while(ptr1 < ptr2){
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;

        ptr1 ++;
        ptr2 --;
    }

    cout << endl;

    cout << "Reversed array: ";
    for(int i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }
    cout << endl;

    return 0;
}
