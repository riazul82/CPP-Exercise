#include <iostream>

using namespace std;

int sumOfElements(int arr[], int i, int siz){

    static int sum = 0;

    if(i == siz){
        return sum;
    }

    sum += arr[i];

    sumOfElements(arr, i + 1, siz);
}

int main()
{
    int ara[100];
    int i, siz;
    int sum;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << endl;

    cout << "Sum of Array elements: ";

    sum = sumOfElements(ara, 0, siz);

    cout << sum << endl;

    return 0;
}

