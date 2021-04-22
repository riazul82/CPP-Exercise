#include <iostream>

using namespace std;

int find_gcd(int n1, int n2){

    if(n2 == 0){
        return n1;
    }

    return find_gcd(n2, n1 % n2);
}

int main()
{
    int num1, num2;
    int gcd;

    cout << "Enter two numbers >>> ";
    cin >> num1>> num2;

    cout << endl;

    gcd = find_gcd(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}
