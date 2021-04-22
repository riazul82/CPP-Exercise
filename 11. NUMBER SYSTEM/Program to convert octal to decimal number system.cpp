#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int octConst[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long int bin, oct, dec, toct, tbin;
    int i, n, last;

    cout << "Enter an octal number >>> ";
    cin >> oct;

    cout << endl;

    n = 1;
    bin = 0;
    toct = oct;

    while(toct != 0){
        last = toct % 10;
        if(last > 7){
            cout << "Error!" << endl;
            return 0;
        }
        bin += n * octConst[last];
        n *= 1000;
        toct /= 10;
    }

    i = 0;
    dec = 0;
    tbin = bin;

    while(tbin != 0){
        last = tbin % 10;
        dec += (int)round(pow(2, i)) * last;
        tbin /= 10;
        i ++;
    }

    cout << "Decimal number: " << dec << endl;

    return 0;
}

