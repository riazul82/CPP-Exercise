#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int hexConst[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    int octConst[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long int bin, oct, toct, tbin;
    int i, j, n, last;
    char hexa[100];

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

    j = 0;
    tbin = bin;

    while(tbin != 0){
        last = tbin % 10000;
        for(i = 0; i < 16; i ++){
            if(hexConst[i] == last){
                if(i < 10){
                    hexa[j] = (char)(i + 48);
                }
                if(i >= 10){
                    hexa[j] = (char)(i + 55);
                }
                j ++;
            }
        }
        tbin /= 10000;
    }

    hexa[j] = '\0';
    strrev(hexa);

    cout << "Hexadecimal Number: " << hexa << endl;

    return 0;
}

