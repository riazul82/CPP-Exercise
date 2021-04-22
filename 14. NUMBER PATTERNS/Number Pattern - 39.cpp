/*   1
     131
     13531
     1357531
     135797531    */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        int k = 1;
        for(j = 1; j <= i; j ++){
            cout << k;
            k += 2;
        }
        k -= 2;
        for(j = 1; j <= i - 1; j ++){
            k -= 2;
            cout << k;
        }
        cout << endl;
    }

    return 0;
}
