#include <iostream>

using namespace std;

int lcm(int n1, int n2){
    int X, maX;
    int LCM;

    maX = n1 > n2? n1: n2;
    X = maX;

    while(1){
        if(X % n1 == 0 && X % n2 == 0){
            LCM = X;
            break;
        }
        X += maX;
    }
    return LCM;
}

int main()
{
    int num1, num2;
    int LCM;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    cout << endl;

    LCM = lcm(num1, num2);

    cout << "LCM of " << num1 << " and " << num2 << " is: " << LCM << endl;

    return 0;
}
