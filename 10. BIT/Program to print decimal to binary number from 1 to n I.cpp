#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int bin[100];
    int bit, dec, ldec;
    int i, j, k, len;

    cout << "Enter last decimal number >>> ";
    cin >> ldec;

    cout << endl;

    cout << "      DEC -------> BIN" << endl;

    for(i = 1; i <= ldec; i ++){

        cout << setw(8) << i << "    --->    ";
        len = 0;
        dec = i;

        while(dec != 0){
            bit = dec & 1;
            bin[len] = bit;
            dec >>= 1;
            len ++;
        }

        j = 0;
        k = len - 1;

        while(j < k){
            int temp = bin[j];
            bin[j] = bin[k];
            bin[k] = temp;
            j ++;
            k --;
        }

        for(j = 0; j < len; j ++){
            cout << bin[j];
        }

        cout << endl;
    }

    return 0;
}
