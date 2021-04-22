/*   1
     12
     123
     1234
     12345   */


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
        cout << endl;
    }

    return 0;
}
