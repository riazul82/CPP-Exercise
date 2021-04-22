#include <iostream>

using namespace std;

int main()
{
    int base, exp;
    int i, pow;

    cout << "Enter base >>> ";
    cin >> base;

    cout << "Enter exponent >>> ";
    cin >> exp;

    cout << endl;

    pow = 1;

    for(i = 1; i <= exp; i ++){
        pow *= base;
    }

    cout << base << " ^ " << exp << " = " << pow << endl;

    return 0;
}
