#include <iostream>
#define BITS sizeof(int) * 8

using namespace std;

int main()
{
    int num, msb;

    cout << "Enter any number >>> ";
    cin >> num;

    msb = 1 << (BITS - 1);

    cout << endl;

    if(msb & num){
        cout << "MSB of " << num << " is a set(1)" << endl;
    }else{
        cout << "MSB of " << num << " is not a set(0)" << endl;
    }

    return 0;
}
