#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number >>> ";
    cin >> num;

    cout << endl;

    (num % 2 == 0)
        ? cout << "The number is Even!" << endl
        : cout << "The number is Odd!" << endl;

    return 0;
}

