#include <iostream>

using namespace std;

int main()
{
    int num, n;
    int bit;

    cout << "Enter any number >>> ";
    cin >> num;

    cout << "Enter bit number >>> ";
    cin >> n;

    cout << endl;

    bit = (num >> n) & 1;

    if(bit){
        cout << "The " << n << " bit is a set(1)"<< endl;
    }else{
        cout << "The " << n << " bit is unset(0)"<< endl;
    }

    return  0;
}
