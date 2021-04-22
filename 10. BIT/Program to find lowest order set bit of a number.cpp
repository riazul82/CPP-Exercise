#include <iostream>
#define BITS sizeof(int) * 8

using namespace std;

int main()
{
    int num, hOrder = -1;

    cout << "Enter any number >>> ";
    cin >> num;

    for(int i = 0; i < BITS; i ++){
        if((num >> i) & 1){
            hOrder = i;
            break;
        }
    }

    cout << endl;

    if(hOrder != -1){
        cout << "Height order set bit of " << num << " is: " << hOrder << endl;
    }else{
        cout << "0 has no set bit!" << endl;
    }

    return 0;
}

