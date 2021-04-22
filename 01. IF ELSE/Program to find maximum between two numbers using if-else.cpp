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

    if(num1 > num2){
        cout << "Maximum number is: " << num1 << endl;
    }else{
        cout << "Maximum number is: " << num2 << endl;
    }

    return 0;
}

