#include <iostream>

using namespace std;

void print_ara(int arr[], int i, int siz){

    if(i == siz){
        return;
    }

    cout << arr[i] << " ";

    print_ara(arr, i + 1, siz);
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

    cout << "Array elements: ";

    print_ara(ara, 0, siz);

    cout << endl;

    return 0;
}
