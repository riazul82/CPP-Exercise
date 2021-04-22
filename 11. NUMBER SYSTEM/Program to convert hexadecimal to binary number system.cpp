#include <iostream>

using namespace std;

int main()
{
    int hexaConst[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    long long int bin;
    char hex[10];
    int i, n, index;

    cout << "Enter a hexadecimal number >>> ";
    cin.getline(hex, 10);

    cout << endl;

    i = 0;
    bin = 0;
    n = 10000;

    while(hex[i] != '\0'){
        if(hex[i] >= 'A' && hex[i] <= 'F'){
            index = (int)(hex[i] - 55);
        }else if(hex[i] >= 'a' && hex[i] <= 'f'){
            index = (int)(hex[i] - 87);
        }else if(hex[i] >= '1' && hex[i] <= '9'){
            index = (int)(hex[i] - 48);
        }

        bin = (bin * n) + hexaConst[index];
        i ++;
    }

    cout << "Binary Number: " << bin << endl;

    return 0;
}
