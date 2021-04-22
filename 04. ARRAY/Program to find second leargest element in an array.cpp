#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int ara[100];

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    int max1 = ara[0];
    int max2 = ara[0];

    for(i = 1; i < siz; i ++){
        if(ara[i] > max1){
            max1 = ara[i];
        }
    }

    for(i = 1; i < siz; i ++){
        if(ara[i] > max2 && ara[i] < max1){
            max2 = ara[i];
        }
    }

    cout << endl;

    cout << "Max 1: " << max1 << endl;
    cout << "Max 2: " << max2 << endl;

    return 0;
}

