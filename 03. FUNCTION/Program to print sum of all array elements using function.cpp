#include <iostream>

using namespace std;

int sumOfAra(int arr[], int siz){
    int i, sum = 0;
    for(i = 0; i < siz; i ++){
        sum += arr[i];
    }
    return sum;
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

    sum = sumOfAra(ara, siz);

    cout << "Sum of all array elements: " << sum << endl;

    return 0;
}

