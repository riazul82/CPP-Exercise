#include <iostream>

#define SWAP(X, Y) (X ^= Y ^= X ^= Y)

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    SWAP(num1, num2);

    cout << endl;

    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
