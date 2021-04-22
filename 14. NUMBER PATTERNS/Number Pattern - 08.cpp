/*   10001
     01010
     00100
     01010
     10001   */


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
                cout << "1";
            }else{
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
