/*      A
       ABC
      ABCDE
     ABCDEFG
    ABCDEFGHI      */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N - i; j ++){
            cout << " ";
        }
        for(j = 1; j <= 2 * i - 1; j ++){
            cout << (char)(64 + j);
        }
        cout << endl;
    }

    return 0;
}
