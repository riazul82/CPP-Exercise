#include <iostream>

using namespace std;

int main()
{
    int num, n;
    int newNum;

    cout << "Enter any number >>> ";
    cin >> num;

    cout << "Enter bit number >>> ";
    cin >> n;

    cout << endl;

    newNum = (1 << n) | num;

    cout << "Bit set successfully!" << endl;

    cout << "New number is: " << newNum << endl;

    return 0;
}
