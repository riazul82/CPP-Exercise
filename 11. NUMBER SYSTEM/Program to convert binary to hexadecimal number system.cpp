#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int hexaConst[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    long long int bin, tbin;
    bool isError = true;
    int i, j, last;
    char hexa[100];

    cout << "Enter a binary number >>> ";
    cin >> bin;

    cout << endl;

    j = 0;
    tbin = bin;

    while(tbin != 0){
        isError = true;
        last = tbin % 10000;
        for(i = 0; i < 16; i ++){
            if(hexaConst[i] == last){
                isError = false;
                if(i < 10){
                    hexa[j] = (char)(i + 48);
                }
                if(i >= 10){
                    hexa[j] = (char)(i + 55);
                }
                j ++;
            }
        }
        if(isError == true){
            cout << "Error!" << endl;
            return 0;
        }
        tbin /= 10000;
    }

    hexa[j] = '\0';
    strrev(hexa);

    cout << "Hexadecimal Number: " << hexa << endl;

    return 0;
}
