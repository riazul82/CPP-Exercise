#include <iostream>

using namespace std;

int minimum(int arr[], int siz){
    int i, miN;
    miN = arr[0];
    for(i = 0; i < siz; i ++){
        if(miN > arr[i]){
            miN = arr[i];
        }
    }
    return miN;
}

int main()
{
    int ara[100];
    int i, siz;
    int miN;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << endl;

    miN = minimum(ara, siz);

    cout << "Min: " << miN << endl;

    return 0;
}



