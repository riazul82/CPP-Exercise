#include <iostream>

using namespace std;

int main()
{
    int num;
    int *ptr;

    ptr = &num;

    cout << "Enter a Number >>> ";
    cin >> num;

    cout << endl;

    cout << "Using num variable: " << endl;
    cout << "Value of num variable: " << num << endl;
    cout << "Address of num variable: " << &num << endl;

    cout << endl;

    cout << "Using pointer: " << endl;
    cout << "Value of num variable: " << *ptr << endl;
    cout << "Address of num variable: " << ptr << endl;

    return 0;
}
