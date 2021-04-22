#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int i, j, siz;
    int evCount = 0;
    int counter = 0;


    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
        if(ara[i] % 2 == 0){
            evCount ++;
        }
    }

    cout << endl;

    // First sort full array

    for(i = 0; i < siz; i ++){
        for(j = i + 1; j < siz; j ++){
            if(ara[i] > ara[j]){
                ara[i] = ara[i] + ara[j];
                ara[j] = ara[i] - ara[j];
                ara[i] = ara[i] - ara[j];
            }
        }
    }

    cout << endl;

    // Then separate even and odd elements

    for(i = 0; i < siz; i ++){
        if(counter == evCount){
            break;
        }
        if(ara[i] % 2 == 0){
            int temp = ara[i];
            for(j = i; j < siz; j ++){
                ara[j] = ara[j + 1];
            }
            i --;
            counter ++;
            ara[j - 1] = temp;
        }
    }

    cout << "Sorted array: ";
    for(i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}

