/*    ABCDE
      ABCDE
      ABCDE
      ABCDE
      ABCDE     */

#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N; j ++){
            cout << (char)(j + 64);
        }
        cout << endl;
    }

    return 0;
}

