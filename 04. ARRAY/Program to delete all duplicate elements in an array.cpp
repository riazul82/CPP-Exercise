#include <iostream>

using namespace std;

int main()
{
    int siz;
    int i, j, k;
    int ara[100];

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    for(i = 0; i < siz; i ++){
        for(j = i + 1; j < siz; j ++){
            if(ara[i] == ara[j]){
                for(k = j; k < siz; k ++){
                    ara[k] = ara[k + 1];
                }
                siz --;
                j --;
            }
        }
    }

    cout << endl;

    cout << "Array after deletion: ";
    for(i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}
