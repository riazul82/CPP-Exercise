/*  ***
    ***
    **
    **
    *
    *    */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    if(N % 2 == 1){
        N ++;
    }

    int cnt = N / 2;

    for(i = 1; i <= N; i ++){
        if(i > 1 && i % 2 == 1){
            cnt --;
        }
        for(j = 1; j <= cnt; j ++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
