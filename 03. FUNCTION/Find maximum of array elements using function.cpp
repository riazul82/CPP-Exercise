#include <iostream>

using namespace std;

int maximum(int arr[], int siz){
    int i, maX;
    maX = arr[0];
    for(i = 0; i < siz; i ++){
        if(maX < arr[i]){
            maX = arr[i];
        }
    }
    return maX;
}

int main()
{
    int ara[100];
    int i, siz;
    int maX;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << endl;

    maX = maximum(ara, siz);

    cout << "Max: " << maX << endl;

    return 0;
}


