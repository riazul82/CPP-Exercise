/*     1
       123
       12345
       1234567
       123456789
       1234567
       12345
       123
       1         */

#include <iostream>

using namespace std;

int main()
{
    int i, j, k, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= 2 * N; i ++){
        if(i <= N){
            for(j = 1; j <= 2 * i - 1; j ++){
                cout << j;
            }
        }else{
            for(j = 1; j <= 2 * (2 * N - i) - 1; j ++){
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}
