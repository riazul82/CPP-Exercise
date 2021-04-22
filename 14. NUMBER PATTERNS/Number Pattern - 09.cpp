/*    01110
      10001
      10001
      10001
      01110    */

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
            if(i == j || j == N - i + 1){
                cout << "0";
            }else if(i == 1 || i == N || j == 1 || j == N){
                cout << "1";
            }else{
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
