#include <iostream>

using namespace std;

int main()
{
    int bin[100];
    int dec, bit;
    int i, j, len;

    cout << "Enter a decimal number >>> ";
    cin >> dec;

    len = 0;

    while(dec != 0){
        bit = dec & 1;
        bin[len] = bit;
        dec >>= 1;
        len ++;
    }

    i = 0;
    j = len - 1;

    while(i < j){
        int temp = bin[i];
        bin[i] = bin[j];
        bin[j] = temp;
        i ++;
        j --;
    }

    cout << endl;
    cout << "Binary number: ";
    for(i = 0; i < len; i ++){
        cout << bin[i];
    }

    cout << endl;

    return 0;
}

