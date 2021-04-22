/*   12345
     23456
     34567
     45678
     56789    */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N; j ++){
            cout << i + j - 1;
        }
        cout << endl;
    }

    return 0;
}
