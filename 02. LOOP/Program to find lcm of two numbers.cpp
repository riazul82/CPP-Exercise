#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int i, lcm, X;
    int maX;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    maX = (num1 > num2)? num1: num2;

    X = maX;

    while(1){
        if(X % num1 == 0 && X % num2 == 0){
            lcm = X;
            break;
        }
        X += maX;
    }

    cout << endl;

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}
