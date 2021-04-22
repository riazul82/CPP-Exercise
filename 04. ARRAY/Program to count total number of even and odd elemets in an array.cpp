#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int ara[100];
    int oddCnt = 0;
    int evenCnt = 0;

    bool isOdd = false;
    bool isEven = false;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
        if(ara[i] % 2){
            isOdd = true;
            oddCnt ++;
        }else{
            isEven = true;
            evenCnt ++;
        }
    }

    cout << endl;

    cout << "Total odd numbers  : ";
    if(isOdd == false){
        cout << "No odd numbers in array!" << endl;
    }else{
        cout << oddCnt << endl;
    }

    cout << "Total even numbers : ";
    if(isEven == false){
        cout << "No even numbers in array!" << endl;
    }else{
        cout << evenCnt << endl;
    }

    return 0;
}

