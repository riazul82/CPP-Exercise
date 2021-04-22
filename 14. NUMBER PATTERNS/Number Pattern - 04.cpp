/*   11111
     10001
     10001
     10001
     11111   */


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
            if(j == 1 || j == N || i == 1 || i == N){
                cout << "1";
            }else{
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
