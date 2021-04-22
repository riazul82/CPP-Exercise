#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, n;
    int last;
    int num, sum;
    int isArm, digits;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    cout << "All Armstrong numbers: ";
    for(i = 1; i <= num; i ++){
        n = i;
        sum = 0;
        digits = (int)log10(n) + 1;
        while(n != 0){
            last = n % 10;
            sum += (int)pow(last, digits);
            n /= 10;
        }
        if(i == sum){
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
