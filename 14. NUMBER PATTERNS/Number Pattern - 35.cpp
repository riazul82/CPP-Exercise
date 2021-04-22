/*   1
     01
     010
     1010
     10101    */

#include <iostream>

using namespace std;

int main()
{
    int i, j, k, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    k = 1;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= i; j ++){
            cout << k % 2;
            k ++;
        }
        cout << endl;
    }

    return 0;
}
