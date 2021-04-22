/*    55555
      54444
      54333
      54322
      54321    */


#include <iostream>

using namespace std;

int main()
{
    int i, j, k, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        k = N;
        for(j = 1; j <= N; j ++){
            if(k > N - i + 1){
                cout << k;
                k --;
            }else{
                cout << N - i + 1;
            }
        }
        cout << endl;
    }

    return 0;
}
