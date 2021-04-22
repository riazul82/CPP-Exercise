#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int bin, dec, tbin;
    int i, last;

    cout << "Enter a binary number >>> ";
    cin >> bin;

    cout << endl;

    i = 0;
    dec = 0;
    tbin = bin;

    while(tbin != 0){
        last = tbin % 10;
        if(last != 0 || last != 1){
            cout << "Error!" << endl;
            return 0;
        }
        dec += (int)round(pow(2, i)) * last;
        tbin /= 10;
        i ++;
    }

    cout << "Decimal Number: " << dec << endl;

    return 0;
}
