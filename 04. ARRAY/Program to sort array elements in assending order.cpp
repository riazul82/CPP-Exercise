#include <iostream>

using namespace std;

int main()
{
    int siz;
    int i, j;
    int ara[100];


    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << endl;

    for(i = 0; i < siz; i ++){
        for(j = i + 1; j < siz; j ++){
            if(ara[i] > ara[j]){
                ara[i] = ara[i] + ara[j];
                ara[j] = ara[i] - ara[j];
                ara[i] = ara[i] - ara[j];
            }
        }
    }

    cout << "Sorted array: ";
    for(i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}
