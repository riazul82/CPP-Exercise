#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    cout << endl;

    switch(num1 > num2){
        case 0:
            cout << "Max: " << num2 << endl;
            break;
        case 1:
            cout << "Max: " << num1 << endl;
            break;
    }
    return 0;
}
