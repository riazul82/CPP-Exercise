#include <iostream>

using namespace std;

int power(int b, int e){
    int pow = 1;
    for(int i = 1; i <= e; i ++){
        pow *= b;
    }
    return pow;
}

int main()
{
    int base, exp;
    int pow;

    cout << "Enter base >>> ";
    cin >> base;

    cout << "Enter exponent >>> ";
    cin >> exp;

    pow = power(base, exp);

    cout << endl << base << " ^ " << exp << " = " << pow << endl;

    return 0;
}
