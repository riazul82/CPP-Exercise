#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int maX;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    maX = (num1 > num2)? num1: num2;

    cout << endl;

    cout << "Maximum number is " << maX << endl;

    return 0;
}
