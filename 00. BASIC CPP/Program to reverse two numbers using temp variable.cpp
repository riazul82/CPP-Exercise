#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int temp;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << endl;

    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
