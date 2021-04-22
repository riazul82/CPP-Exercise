/*    AAAAA
      BBBB
      CCC
      DD
      E     */

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
            cout << (char)(64 + i);
        }
        cout << endl;
    }

    return 0;
}

