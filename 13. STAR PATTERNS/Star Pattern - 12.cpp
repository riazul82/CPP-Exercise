/*    *
     ***
    *****
   *******
  *********
   *******
    *****
     ***
      *     */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= 2 * N; i ++){
        if(i <= N){
            for(j = 1; j <= N - i; j ++){
                cout << " ";
            }
            for(j = 1; j <= 2 * i - 1; j ++){
                cout << "*";
            }
        }
        if(i > N){
            for(j = 1; j <= i - N; j ++){
                cout << " ";
            }
            for(j = 1; j <= 2 * (2 * N - i) - 1; j ++){
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
