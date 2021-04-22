#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    int gcd, i;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    if(num1 > num2){
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    for(i = 1; i <= num1; i ++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }

    cout << endl;

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}
