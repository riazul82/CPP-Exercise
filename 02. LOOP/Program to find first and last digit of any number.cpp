#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    int digits;
    int first, last;

    cout << "Enter number >>> ";
    cin >> num;

    last = num % 10;
    digits = (int)log10(num);

    int n = num;

    while(digits --){
        n = n / 10;
    }

    first = n;

    cout << endl;

    cout << "First: " << first << endl;
    cout << "Last : " << last << endl;

    return 0;
}
