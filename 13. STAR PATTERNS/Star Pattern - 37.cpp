
/*      ***       ***
       *****     *****
      *******   *******
     ********* *********
     *******************
      *****************
       ***************
        *************
         ***********
          *********
           *******
            *****
             ***
              *           */


#include <iostream>

using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter row size >>> ";
    cin >> N;

    cout << endl;

    for(i = 1; i <= N - 1; i ++){
        for(j = 1; j <= (N - i); j ++){
            cout << " ";
        }
        for(j = 1; j <= (2 * i) + 1; j ++){
            cout << "*";
        }
        for(j = 1; j <= 2 * (N - i) - 1; j ++){
            cout << " ";
        }
        for(j = 1; j <= (2 * i) + 1; j ++){
            cout << "*";
        }
        cout << endl;
    }

    for(i = 1; i <= 2 * N; i ++){
        for(j = 1; j <= i; j ++){
            cout << " ";
        }
        for(j = 1; j <= (4 * N) - (2 * i - 1); j ++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
