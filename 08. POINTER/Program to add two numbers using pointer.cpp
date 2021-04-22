#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int *ptr1, *ptr2;
    int sum;

    ptr1 = &num1;
    ptr2 = &num2;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    cout << endl;

    sum = *ptr1 + *ptr2;

    cout << "Sum is: " << sum << endl;

    return 0;
}
