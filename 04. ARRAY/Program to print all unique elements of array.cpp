#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int freq[10];
    int i, j, siz;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
        freq[i] = 0;
    }

    cout << endl << "Unique elements: ";
    for(i = 0; i < siz; i ++){
        for(j = i + 1; j < siz; j ++){
            if(ara[i] == ara[j]){
                freq[i] = -1;
                freq[j] = -1;
            }
        }
        if(freq[i] != -1){
            cout << ara[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
