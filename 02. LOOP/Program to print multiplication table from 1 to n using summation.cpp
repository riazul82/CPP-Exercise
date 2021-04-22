#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j;
    int num, sum;

    cout << "Enter number >>> ";
    cin >> num;

    for(i = 1; i <= num; i ++){
        sum = 0;
        cout << endl;
        cout << setw(3) << i << "x: " << endl;
        for(j = 1; j <= 10; j ++){
            sum += i;
            cout << setw(3) << i << " X ";
            cout << setw(2) << j << " = ";
            cout << setw(3) << sum << endl;
        }
    }

    return 0;

}

