#include <iostream>

using namespace std;

long long factorial(int n){

    if(n == 0){
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int num;
    long long fact;

    cout << "Enter a number >>> ";
    cin >> num;

    fact = factorial(num);

    cout << endl;

    cout << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}
