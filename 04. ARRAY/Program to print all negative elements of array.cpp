#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int ara[100];
    int isNeg = 0;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << endl << "Negative elements: ";
    for(i = 0; i < siz; i ++){
        if(ara[i] < 0){
            isNeg = 1;
            cout << ara[i] << " ";
        }
    }

    if(isNeg != 1){
        cout << "No negative item found!";
    }

    cout << endl;

    return 0;
}
