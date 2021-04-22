/*   12345
     21345
     32145
     43215
     54321    */

#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= i; j ++){
            cout << i - j + 1;
        }
        for(j = 1; j <= N - i; j ++){
            cout << i + j;
        }
        cout << endl;
    }

    return 0;
}
