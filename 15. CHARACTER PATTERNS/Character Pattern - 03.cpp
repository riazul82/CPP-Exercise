/*    EEEEE
      DDDDD
      CCCCC
      BBBBB
      AAAAA     */

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
            cout << (char)(65 + N - i);
        }
        cout << endl;
    }

    return 0;
}
