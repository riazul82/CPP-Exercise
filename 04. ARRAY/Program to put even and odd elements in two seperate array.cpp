#include <iostream>

using namespace std;

int main()
{
    int i, siz;
    int ara[100];
    int odd[100];
    int even[100];
    int eIndex = 0;
    int oIndex = 0;
    bool isEven = false;
    bool isOdd = false;

    cout << "Enter array size >>> ";
    cin >> siz;

    cout << "Enter array elements >>> ";
    for(i = 0; i < siz; i ++){
        cin >> ara[i];
    }

    cout << endl;

    i = 0;

    while(i < siz){
        if(ara[i] % 2 == 0){
            even[eIndex] = ara[i];
            isEven = true;
            eIndex ++;
        }else{
            odd[oIndex] = ara[i];
            isOdd = true;
            oIndex ++;
        }
        i ++;
    }

    cout << "Even elements: ";

    if(isEven == true){
        for(i = 0; i < eIndex; i ++){
            cout << even[i] << " ";
        }
    }else{
        cout << "No even elements!";
    }


    cout << endl;

    cout << "Odd elements: ";
    if(isOdd == true){
        for(i = 0; i < oIndex; i ++){
            cout << odd[i] << " ";
        }
    }else{
        cout << "No odd elements!";
    }

    cout << endl;

    return 0;
}
