/*   2
     242
     24642
     2468642
     2468108642    */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        int k = 2;
        for(j = 1; j <= i; j ++){
            cout << k;
            k += 2;
        }
        k -= 2;
        for(j = 1; j <= i - 1; j ++){
            k -= 2;
            cout << k;
        }
        cout << endl;
    }

    return 0;
}

