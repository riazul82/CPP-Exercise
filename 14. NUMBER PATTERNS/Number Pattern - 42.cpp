/*    1
      21
      123
      4321
      12345    */

#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= i; j ++){
            if(i % 2){
                cout << j;
            }else{
                cout << i - j + 1;
            }
        }
        cout << endl;
    }

    return 0;
}
