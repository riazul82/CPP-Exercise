#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character >>> ";
    cin >> ch;

    cout << endl;

    (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')
        ? cout << "The character is an Alphabet!" << endl
        : cout << "The character is not an Alphabet!" << endl;

    return 0;
}

