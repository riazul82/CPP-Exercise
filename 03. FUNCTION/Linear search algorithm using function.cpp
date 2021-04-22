#include <iostream>

using namespace std;

int linear_search(int arr[], int siz, int x){
    for(int i = 0; i < siz; i ++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int num;
    int i, siz;
    int isFound;
    int ara[100];

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << "Enter number you searching for in array >>> ";
    cin >> num;

    cout << endl;

    isFound = linear_search(ara, siz, num);

    if(isFound == -1){
        cout << num << " not found in array!" << endl;
    }else{
        cout << num << " is found in array at " << isFound << "th index!" << endl;
    }

    return 0;
}
