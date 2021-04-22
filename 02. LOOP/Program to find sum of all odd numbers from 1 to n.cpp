#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int sum;

    cout << "Enter number >>> ";
    cin >> n;

    cout << endl;

    sum = 0;

    cout << "Odd Sum: ";
    for(i = 1; i <= n; i ++){
        if(i % 2 == 1){
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}

