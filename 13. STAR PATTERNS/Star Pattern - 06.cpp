/*    *
     ***
    *****
   *******   */


#include <iostream>

using namespace std;

int main()
{
    int N;
    int i, j;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N - i; j ++){
            cout << " ";
        }
        for(j = 1; j <= 2 * i - 1; j ++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}