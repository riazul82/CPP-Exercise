/*   11011
     11011
     00000
     11011
     11011   */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    if(N % 2 == 0){
        N ++;
    }

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N; j ++){
            if(i == N / 2 + 1 || j == N / 2 + 1){
                cout << "0";
            }else{
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}
