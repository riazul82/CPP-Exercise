#include <iostream>
#define BITS sizeof(num) * 8

using namespace std;

int main()
{
    int num, i;
    int ctr_one = 0;
    int ctr_zero = 0;

    cout << "Enter any number >>> ";
    cin >> num;

    for(i = 0; i < BITS; i ++){
        if(num & 1){
            ctr_one ++;
        }else{
            ctr_zero ++;
        }
        num >>= i;
    }

    cout << endl;

    cout << "Total Ones: " << ctr_one << endl;
    cout << "Total zeros: " << ctr_zero << endl;

    return 0;
}
