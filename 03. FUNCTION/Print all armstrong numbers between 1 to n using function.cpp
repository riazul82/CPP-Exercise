#include <iostream>
#include <cmath>

using namespace std;

void allArmstrong(int n){
    int x, i;
    int digits;
    int sum, last;
    cout << "All Armstrong numbers between 1 to " << n << " are: ";
    for(i = 1; i <= n; i ++){
        x = i;
        sum = 0;
        digits = (int)log10(x) + 1;
        while(x != 0){
            last = x % 10;
            sum += (int)round(pow(last, digits));
            x /= 10;
        }
        if(sum == i){
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    allArmstrong(num);

    return 0;
}

