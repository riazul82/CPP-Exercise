#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    int i, j;

    cout << "Enter number >>> ";
    cin >> num;

    for(i = 1; i <= num; i ++){
        cout << endl;
        cout << setw(3) << i << "x: " << endl;
        for(j = 1; j <= 10; j ++){
            cout << setw(3) << i << " X ";
            cout << setw(2) << j << " = ";
            cout << setw(3) << i * j << endl;
        }
    }

    return 0;

}
