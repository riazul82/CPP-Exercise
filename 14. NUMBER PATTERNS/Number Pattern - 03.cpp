/*   10101
     10101
     10101
     10101
     10101   */


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
            if(j % 2 == 1){
                cout << "1";
            }else{
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
