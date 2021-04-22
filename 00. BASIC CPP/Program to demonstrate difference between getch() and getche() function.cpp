#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character >>> ";
    ch = getch();

    cout << endl << "getch(): " << ch << endl;

    cout << "Enter a character >>> ";
    ch = getche();
    cout << endl << "getche(): " << ch << endl;

    return 0;
}
