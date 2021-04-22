#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, n;
    int digits;

    cout << "Enter number >>> ";
    cin >> num;

    digits = (int)log10(num) + 1;

    cout << endl << "Digits: " << digits << endl;

    return 0;
}


