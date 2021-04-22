/*  11111
    00000
    11111
    00000
    11111  */


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
            if(i % 2 == 1){
                cout << "1";
            }else{
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
