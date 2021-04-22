#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int arr[100];
    int i, temp;
    int siz1, siz2;
    int *ptr1 = ara;
    int *ptr2 = arr;

    cout << "Enter first array size >>> ";
    cin >> siz1;

    cout << "Enter second array size >>> ";
    cin >> siz2;

    cout << endl;

    cout << "Enter first array elements: ";
    for(i = 0; i < siz1; i ++){
        cin >> *ptr1;
        ptr1 ++;
    }

    cout << "Enter second array elements: ";
    for(i = 0; i < siz2; i ++){
        cin >> *ptr2;
        ptr2 ++;
    }

    cout << endl;

    ptr1 = ara;
    ptr2 = arr;

    i = 0;

    if(siz1 > siz2){
        while(i < siz2){
            temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;
            ptr1 ++;
            ptr2 ++;
            i ++;
        }
        while(i < siz1){
            *ptr2 = *ptr1;
            ptr1 ++;
            ptr2 ++;
            i ++;
        }
    }else if(siz1 < siz2){
        while(i < siz1){
            temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;
            ptr1 ++;
            ptr2 ++;
            i ++;
        }
        while(i < siz2){
            *ptr1 = *ptr2;
            ptr1 ++;
            ptr2 ++;
            i ++;
        }
    }else{
        while(i < siz1){
            temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;
            ptr1 ++;
            ptr2 ++;
            i ++;
        }
    }

    ptr1 = ara;
    ptr2 = arr;

    cout << "After swapping: " << endl;
    cout << "First array: ";
    for(i = 0; i < siz2; i ++){
        cout << *ptr1 << " ";
        ptr1 ++;
    }

    cout << endl;

    cout << "Second array: ";
    for(i = 0; i < siz1; i ++){
        cout << *ptr2 << " ";
        ptr2 ++;
    }

    cout << endl;

    return 0;
}
