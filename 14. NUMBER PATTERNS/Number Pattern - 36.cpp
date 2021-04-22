/*   1
     11
     101
     1001
     11111    */


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
            if(i == N || j == 1 || i == j){
                cout << 1;
            }else{
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
