#include <iostream>
#define BITS sizeof(int) * 8

using namespace std;

int main()
{
    int num, i;

    cout << "Enter any number >>> ";
    cin >> num;

    for(i = 0; i < BITS; i ++){
        if((num >> i) & 1){
            break;
        }
    }

    cout << endl;

    cout << "Number of Trailing zeros: " << i << endl;

    return 0;
}
