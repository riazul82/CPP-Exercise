#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int ara[100];
    int num, pos;
    bool isFound;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << "Enter number you searching for in array >>> ";
    cin >> num;

    isFound = false;

    for(i = 0; i < siz; i ++){
        if(ara[i] == num){
            isFound = true;
            pos = i;
            break;
        }
    }

    cout << endl;

    if(isFound == true){
        cout << num << " found at position " << pos << endl;
    }else{
        cout << num << " not found in array!" << endl;
    }

    return 0;
}
