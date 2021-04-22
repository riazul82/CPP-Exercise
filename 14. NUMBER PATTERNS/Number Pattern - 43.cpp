/*   1
     2  6
     3  7 10
     4  8 11 13
     5  9 12 14 15    */


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, k, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        int l = i;
        k = N - 1;
        for(j = 1; j <= i; j ++){
            cout << setw(3) << l;
            l += k;
            k --;
        }
        cout << endl;
    }

    return 0;
}
