/*      A
       ABA
      ABCBA
     ABCDCBA
    ABCDEDCBA     */


#include <iostream>

using namespace std;

int main()
{
    int i, j, k, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        k = 1;
        for(j = 1; j <= N - i; j ++){
            cout << " ";
        }
        for(j = 1; j <= 2 * i - 1; j ++){
            if(j <= i){
                cout << (char)(64 + k);
                k ++;
            }else{
                k --;
                cout << (char)(63 + k);
            }
        }
        cout << endl;
    }

    return 0;
}



