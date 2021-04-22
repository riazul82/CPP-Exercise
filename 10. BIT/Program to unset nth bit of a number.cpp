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

    newNum = num & (~(1 << n));

    cout << endl;

    cout << "Bit cleared successfully!" << endl;
    cout << "New number is: " << newNum << endl;

    return 0;
}
