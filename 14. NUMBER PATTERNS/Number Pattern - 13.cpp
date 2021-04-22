/*    1  2  3  4  5
      6  7  8  9 10
     11 12 13 14 15
     16 17 18 19 20
     21 22 23 24 25    */


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, k, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    k = 1;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N; j ++){
            cout << setw(3) << k;
            k ++;
        }
        cout << endl;
    }

    return 0;
}
