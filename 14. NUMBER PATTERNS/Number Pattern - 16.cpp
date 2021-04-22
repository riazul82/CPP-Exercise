/*   12345
     23451
     34521
     45321
     54321   */


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
            cout << i + j - 1;
        }
        for(j = 1; j <= i - 1; j ++){
            cout << i - j;
        }
        cout << endl;
    }

    return 0;
}
