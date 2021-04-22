/*    1
      3  2
      4  5  6
     10  9  8  7
     11 12 13 14 15    */


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i, j, l, N;
    int counter = 1;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N; i ++){
        if(i % 2 == 0){
            l = counter + i - 1;
        }
        for(j = 1; j <= i; j ++){

            if(i % 2){
                cout << setw(3) << counter;
            }else{
                cout << setw(3) << l;
                l --;
            }
            counter ++;

        }
        cout << endl;
    }

    return 0;
}
