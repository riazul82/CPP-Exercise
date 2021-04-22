/*   1
     121
     12321
     1234321
     123454321    */


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
            cout << j;
        }
        for(j = 1; j <= i - 1; j ++){
            cout << i - j;
        }
        cout << endl;
    }

    return 0;
}
