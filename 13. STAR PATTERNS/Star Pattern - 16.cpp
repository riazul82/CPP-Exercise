/*   ***** *****
     ****   ****
     ***     ***
     **       **
     *         *   */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter triangle size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N - i + 1; j ++){
            cout << "*";
        }
        for(j = 1; j <= 2 * i - 1; j ++){
            cout << " ";
        }
        for(j = 1; j <= N - i + 1; j ++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
