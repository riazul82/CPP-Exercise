#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int i, j, n, len, index;
    long long int bin, dec;
    char hex[10];

    cout << "Enter a hexadecimal number >>> ";
    cin.getline(hex, 10);

    cout << endl;

    len = strlen(hex);
    j = len - 1;
    dec = 0;
    i = 0;

    while(hex[i] != '\0'){
        if(hex[i] >= 'A' && hex[i] <= 'F'){
            index = (int)(hex[i] - 55);
        }else if(hex[i] >= 'a' && hex[i] <= 'f'){
            index = (int)(hex[i] - 87);
        }else if(hex[i] >= '1' && hex[i] <= '9'){
            index = (int)(hex[i] - 48);
        }

        dec += (int)round(pow(16, j)) * index;
        j --;
        i ++;

    }

    cout << "Decimal Number: " << dec << endl;

    return 0;
}

