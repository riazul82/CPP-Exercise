#include <iostream>

using namespace std;

int main()
{
    int i, j, siz;
    int srcAra[100];
    int destAra[100];

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> srcAra[i];
    }

    for(i = 0; i < siz; i ++){
        destAra[i] = srcAra[i];
    }

    cout << endl;

    cout << "Copied array elements: ";
    for(i = 0; i < siz; i ++){
        cout << destAra[i] << " ";
    }

    cout << endl;

    return 0;
}
