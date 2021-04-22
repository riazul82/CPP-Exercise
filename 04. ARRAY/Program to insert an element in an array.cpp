#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int num, pos;
    int ara[100];

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << "Enter a number for insertion >>> ";
    cin >> num;

    lebel:
    cout << "Enter insertion position >>> ";
    cin >> pos;

    cout << endl;

    if(pos > siz){
        cout << "Invalid Input! Please type a valid position!";
        cout << endl << endl;
        goto lebel;
    }

    for(i = siz - 1; i >= pos; i --){
        ara[i + 1] = ara[i];
    }

    siz ++;
    ara[pos] = num;

    cout << "Array after insertion >>> ";
    for(i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}
