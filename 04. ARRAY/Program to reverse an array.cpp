#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int ara[100];
    int siz, temp;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    i = 0;
    j = siz - 1;

    while(i < j){
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;

        i ++;
        j --;
    }

    cout << endl << "Reversed array: ";
    for(i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}
