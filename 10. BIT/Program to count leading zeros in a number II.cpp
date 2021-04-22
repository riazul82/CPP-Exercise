#include <iostream>
#define BITS sizeof(int) * 8 - 1

using namespace std;

int main()
{
    int num, msb;
    int i, cnt;

    cout << "Enter any number >>> ";
    cin >> num;

    cnt = 0;
    msb = 1 << BITS;

    for(i = 0; i < BITS; i ++){
        if((num << i) & msb){
            break;
        }
        cnt ++;
    }

    cout << endl;

    cout << "Number of leading zeros: " << cnt << endl;

    return 0;
}
