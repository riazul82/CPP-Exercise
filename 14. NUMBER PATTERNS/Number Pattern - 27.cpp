/*   54321
     5432
     543
     54
     5    */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N - i + 1; j ++){
            cout << N - j + 1;
        }
        cout << endl;
    }

    return 0;
}
