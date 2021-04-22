#include <iostream>

using namespace std;

int gcd(int n1, int n2){
    int i, hcf;
    if(n1 > n2){
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    i = 1;
    while(i < n1){
        if(n1 % i == 0 && n2 % i == 0){
            hcf = i;
        }
        i ++;
    }
    return hcf;
}

int main()
{
    int num1, num2;
    int hcf;

    cout << "Enter first number >>> ";
    cin >> num1;

    cout << "Enter second number >>> ";
    cin >> num2;

    cout << endl;

    hcf = gcd(num1, num2);

    cout << "GCD of " << num1 << " and " <<  num2 << " is: " << hcf << endl;

    return 0;
}
