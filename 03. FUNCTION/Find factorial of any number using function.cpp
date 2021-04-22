#include <iostream>

using namespace std;

long long int factorial(int n){
    long long int fact = 1ll;
    while(n != 0){
        fact *= n;
        n --;
    }
    return fact;
}

int main()
{
    int num;
    long long int fact;

    cout << "Enter number >> ";
    cin >> num;

    fact = factorial(num);

    cout << endl << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}
