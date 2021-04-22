#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int ara[100];

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    int miN = ara[0];

    for(i = 1; i < siz; i ++){
        if(ara[i] < miN){
            miN = ara[i];
        }
    }

    cout << endl << "Min: " << miN << endl;

    return 0;
}

