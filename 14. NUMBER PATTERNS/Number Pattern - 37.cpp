/*   1
     123
     12345
     1234567
     123456789    */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= 2 * i - 1; j ++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
