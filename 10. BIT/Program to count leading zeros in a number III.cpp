#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int num, ctr;

    ctr = 0;

    cout << "Enter any number >>> ";
    cin >> num;

    while(!(num & (~INT_MAX))){
        ctr ++;
        num <<= 1;
    }

    cout << endl;

    cout << "Leading zeros: " << ctr << endl;

    return 0;
}
