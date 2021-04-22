#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, num;
    int sum;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    sum = 0;

    for(i = 1; i <= 10; i ++){
        sum += num;
        cout << setw(3) << num << " X ";
        cout << setw(2) << i << " = ";
        cout << setw(3) << sum << endl;
    }

    return 0;
}
