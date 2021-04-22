#include <iostream>

using namespace std;

int main()
{
    int ara[100];
    int i, j, siz;
    int counter = 0;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    for(i = 0; i < siz; i ++){
        for(j = i + 1; j < siz; j ++){
            if(ara[i] == ara[j]){
                counter ++;
            }
        }
    }

    cout << endl;

    cout << "Total number of duplicate elements: " << counter << endl;

    return 0;
}

