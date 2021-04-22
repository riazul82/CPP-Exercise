#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int ara[100];
    int negCnt = 0;
    bool isNeg = false;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
        if(ara[i] < 0){
            negCnt ++;
            isNeg = true;
        }
    }

    cout << endl << "Number of negative elements: ";
    if(isNeg == false){
        cout << "No negative elements found!" << endl;
    }else{
        cout << negCnt << endl;
    }

    return 0;
}
