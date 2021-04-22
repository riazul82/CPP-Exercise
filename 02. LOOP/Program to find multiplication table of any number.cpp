#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    for(i = 1; i <= 10; i ++){
        cout << setw(3) << num << " X ";
        cout << setw(2) << i << " = ";
        cout << setw(3) << (num * i) << endl;
    }

    return 0;
}
