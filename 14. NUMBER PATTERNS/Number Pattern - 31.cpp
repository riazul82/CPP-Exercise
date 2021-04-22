/*   56789
     4567
     345
     23
     1    */

#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N - i + 1; j ++){
            cout << N - i + j;
        }
        cout << endl;
    }

    return 0;
}
