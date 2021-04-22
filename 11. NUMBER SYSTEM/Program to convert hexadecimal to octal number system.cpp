#include <iostream>

using namespace std;

int main()
{
    int hexaConst[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};
    int octConst[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long int bin, oct, tbin;
    int i, n, last, index;
    bool error = true;
    char hex[10];

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

    n = 1;
    oct = 0;
    tbin = bin;

    while(tbin != 0){
        last = tbin % 1000;
        error = true;
        for(i = 0; i < 8; i ++){
            if(octConst[i] == last){
                error = false;
                oct += n * i;
                break;
            }
        }
        if(error == true){
            cout << "Error!" << endl;
            return 0;
        }
        n *= 10;
        tbin /= 1000;
    }

    cout << "Octal Number: " << oct << endl;

    return 0;
}

