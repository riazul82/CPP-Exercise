#include <iostream>

using namespace std;

int main()
{
    long long int dec, bin, tdec;
    int n, rem;

    cout << "Enter decimal number >>> ";
    cin >> dec;

    cout << endl;

    n = 1;
    bin = 0;
    tdec = dec;

    while(tdec != 0){
        rem = tdec % 2;
        bin += n * rem;
        tdec /= 2;
        n *= 10;
    }

    cout << "Binary Number >>> " << bin << endl;

    return 0;
}
