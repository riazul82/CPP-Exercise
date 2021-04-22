#include <iostream>
#define BITS sizeof(int) * 8 - 1

using namespace std;

int main()
{
    int num, hOrder = -1;
    int lead_zeros;

    cout << "Enter any number >>> ";
    cin >> num;

    for(int i = 0; i <= BITS; i ++){
        if((num >> i) & 1){
            hOrder = i;
        }
    }

    cout << endl;

    lead_zeros = BITS - hOrder;

    cout << "Number of leading zeros: " << lead_zeros << endl;

    return 0;
}
