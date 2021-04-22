#include <iostream>

using namespace std;

void printAra(int arr[], int siz){
    int i;
    cout << "Array elements: ";
    for(i = 0; i < siz; i ++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int ara[100];
    int i, siz;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << endl;

    printAra(ara, siz);

    return 0;
}
