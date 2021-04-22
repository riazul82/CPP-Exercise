#include <iostream>

using namespace std;

int binarySearch(int arr[], int siz, int x){

    int mid;
    int left = 0;
    int right = siz - 1;

    while(left <= right){

        mid = left + (right - left) / 2;

        if(arr[mid] == x){
            return mid;
        }

        if(x > arr[mid]){
            left = mid + 1;
        }

        if(x < arr[mid]){
            right = mid - 1;
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

    isFound = binarySearch(ara, siz, num);

    if(isFound == -1){
        cout << num << " not found in array!" << endl;
    }else{
        cout << num << " is found in array at " << isFound << "th index!" << endl;
    }

    return 0;
}

