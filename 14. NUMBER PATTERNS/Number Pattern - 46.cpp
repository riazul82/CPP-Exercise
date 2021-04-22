/*    1
      121
      12321
      1234321
      123454321
      1234321
      12321
      121
      1        */

#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= 2 * N; i ++){
        if(i <= N){
            for(j = 1; j <= i; j ++){
                cout << j;
            }
            for(j = 1; j <= i - 1; j ++){
                cout << i - j;
            }
        }else{
            for(j = 1; j <= 2 * N - i; j ++){
                cout << j;
            }
            for(j = 1; j <= 2 * N - i - 1; j ++){
                cout << 2 * N - i - j;
            }
        }
        cout << endl;
    }

    return 0;
}
