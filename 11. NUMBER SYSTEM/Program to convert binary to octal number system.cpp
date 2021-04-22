#include <iostream>

using namespace std;

int main()
{
    int octConst[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long int bin, oct, tbin;
    bool error = true;
    int i, n, last;

    cout << "Enter a binary number >>> ";
    cin >> bin;

    cout << endl;

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
