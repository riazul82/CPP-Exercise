#include <iostream>

using namespace std;

void sort_ara(int arr[], int siz){
    int i, j;
    for(i = 0; i < siz; i ++){
        for(j = i + 1; j < siz; j ++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
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

    sort_ara(ara, siz);

    cout << "Array after sorting: ";
    for(i = 0; i < siz; i ++){
        cout << ara[i] << " ";
    }

    cout << endl;

    return 0;
}
