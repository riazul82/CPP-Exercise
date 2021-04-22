#include <iostream>

using namespace std;

int main()
{
    int octConst[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long int bin, oct, toct;
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

    cout << "Binary number: " << bin << endl;

    return 0;
}
