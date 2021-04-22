#include <iostream>

using namespace std;

int main()
{
    int num;
    int i, sum;
    int n, last;

    cout << "Enter number >>> ";
    cin >> num;

    sum = 0;
    n = num;

    cout << endl;

    while(n != 0){
        last = n % 10;
        sum += last;
        n /= 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
