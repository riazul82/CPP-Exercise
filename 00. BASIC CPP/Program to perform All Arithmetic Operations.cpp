#include <iostream>

using namespace std;

int main()
{
    float n1, n2;
    float sum, sub, mul, div;
    int mod;

    cout << "Enter first number >>> ";
    cin >> n1;

    cout << "Enter second number >>> ";
    cin >> n2;

    sum = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    div = n1 / n2;
    mod = (int)n1 % (int)n2;

    cout << endl;

    cout << "Summation      : " << sum << endl;
    cout << "Subtraction    : " << sub << endl;
    cout << "Multiplication : " << mul << endl;
    cout << "Quotient       : " << div << endl;
    cout << "Modulus        : " << mod << endl;

    return 0;
}
