/*    *
     **
    ***
   ****
  *****
   ****
    ***
     **
      *    */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter a arrow size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= 2 * N; i ++){
        if(i <= N){
            for(j = 1; j <= N - i; j ++){
                cout << " ";
            }
            for(j = 1; j <= i; j ++){
                cout << "*";
            }
        }
        if(i > N){
            for(j = 1; j <= i - N; j ++){
                cout << " ";
            }
            for(j = 1; j <= 2 * N - i; j ++){
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}
