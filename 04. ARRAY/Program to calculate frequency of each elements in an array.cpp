#include <iostream>

using namespace std;

int main()
{
    int counter;
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

    cout << endl;

    for(i = 0; i < siz; i ++){
        counter = 1;
        for(j = i + 1; j < siz; j ++){
            if(ara[i] == ara[j]){
                freq[j] = -1;
                counter ++;
            }
        }
        if(freq[i] != -1){
            freq[i] = counter;
        }
    }

    cout << "Frequency of each elements in array >>> " << endl << endl;

    for(i = 0; i < siz; i ++){
        if(freq[i] != -1){
            cout << ara[i] << " ----> " << freq[i] << " times" << endl;
        }
    }
    return 0;
}
