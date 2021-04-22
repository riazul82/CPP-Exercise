/*  **
    **
    ****
    ****
    ******
    ******  */

#include <iostream>

using namespace std;

int main()
{
    int i, j, N;
    int cnt;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    if(N % 2 == 1){
        N ++;
    }

    for(i = 1; i <= N; i ++){
        if(i % 2 == 1){
            cnt = i + 1;
        }
        for(j = 1; j <= cnt; j ++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
