#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    int maX;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    cout << "Enter third number >>> ";
    cin >> num3;

    maX = (num1 > num2)? ((num1 > num3)? num1: num3): ((num2 > num3)? num2: num3);

    cout << endl;

    cout << "Maximum number is " << maX << endl;

    return 0;
}

