#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int ara[100];
    int sum = 0;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
        sum += ara[i];
    }

    cout << endl << "Sum of array elements: " << sum << endl;

    return 0;
}
