/*    1
      22
      333
      4444
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
        for(j = 1; j <= i; j ++){
            cout << i;
        }
        cout << endl;
    }

    return 0;
}
