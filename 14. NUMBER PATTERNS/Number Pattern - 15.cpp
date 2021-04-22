/*    12345
      23455
      34555
      45555
      55555    */


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
            if(i + j - 1 < N){
                cout << i + j - 1;
            }else{
                cout << N;
            }
        }
        cout << endl;
    }

    return 0;
}
