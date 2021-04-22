#include <iostream>

using namespace std;

int main()
{
    int num, n;
    int digits;

    cout << "Enter number >>> ";
    cin >> num;

    n = num;
    digits = 0;

    while(n != 0){
        n /= 10;
        digits ++;
    }

    cout << endl << "Digits: " << digits << endl;

    return 0;
}

