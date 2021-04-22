/*   5
     44
     333
     2222
     11111    */


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
            cout << N - i + 1;
        }
        cout << endl;
    }

    return 0;
}
