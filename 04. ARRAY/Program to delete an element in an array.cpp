#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int i, siz, pos;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << "Enter element position to delete >>> ";
    cin >> pos;

    cout << endl;

    if(pos >= siz){
        cout << "No element found in this position to delete!" << endl;
        return 0;
    }

    for(i = pos; i < siz; i ++){
        ara[i] = ara[i + 1];
    }

    siz --;

    cout << "Array after deletion: ";
    for(i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}
