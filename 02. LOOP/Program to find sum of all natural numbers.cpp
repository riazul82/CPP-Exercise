#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int sum;

    cout << "Enter number >>> ";
    cin >> n;

    sum = 0;

    for(i = 1; i <= n; i ++){
        sum += i;
    }

    cout << endl;

    cout << "Sum is: " << sum << endl;

    return 0;
}

