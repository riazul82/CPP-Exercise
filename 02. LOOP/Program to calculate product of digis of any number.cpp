#include <iostream>

using namespace std;

int main()
{
    int num;
    int i, mul;
    int n, last;

    cout << "Enter number >>> ";
    cin >> num;

    mul = 1;
    n = num;

    cout << endl;

    while(n != 0){
        last = n % 10;
        mul *= last;
        n /= 10;
    }

    cout << "Product of digits: " << mul << endl;

    return 0;
}

