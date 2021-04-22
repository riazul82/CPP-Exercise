#include <iostream>

using namespace std;

int main()
{
    int x = 15;
    int &y = x;

    cout << "Before changing reference variable: " << endl;
    cout << "x = " << x << " y = " << y << endl;

    y = 30;

    cout << "After changing reference variable: " << endl;
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}
