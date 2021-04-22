/*   1
     10
     101
     1010
     10101    */


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
            if(j % 2){
                cout << 1;
            }else{
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
