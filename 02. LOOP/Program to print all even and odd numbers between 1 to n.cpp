#include <iostream>

using namespace std;

int main()
{
    int i, n;

    cout << "Enter numbers >>> ";
    cin >> n;

    cout << endl;

    cout << "EVEN: ";
    for(i = 1; i <= n; i ++){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }

    cout << endl << endl;

    cout << "ODD: ";
    for(i = 1; i <= n; i ++){
        if(i % 2){
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
