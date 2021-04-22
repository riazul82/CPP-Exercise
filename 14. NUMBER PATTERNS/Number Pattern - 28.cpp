/*   5
     45
     345
     2345
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
            cout << N - i + j;
        }
        cout << endl;
    }

    return 0;
}
