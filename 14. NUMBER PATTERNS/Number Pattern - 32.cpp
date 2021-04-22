/*   13579
     3579
     579
     79
     9     */

#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        static int k = 1;
        int l = k;
        for(j = 1; j <= N - i + 1; j ++){
            cout << l;
            l += 2;
        }
        k += 2;
        cout << endl;
    }

    return 0;
}
