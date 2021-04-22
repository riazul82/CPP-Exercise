/*  *****
    *****
    *****
    *****
    *****  */

#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int N;

    cout << "Enter square size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        for(j = 1; j <= N; j ++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
