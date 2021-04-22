#include <iostream>
#include <cmath>

using namespace std;

int isArm(int n){
    int x, sum;
    int last, digits;

    x = n;
    sum = 0;
    digits = (int)log10(x) + 1;

    while(x != 0){
        last = x % 10;
        sum += (int)round(pow(last, digits));
        x /= 10;
    }

    if(n == sum){
        return 1;
    }else{
        return 0;
    }

}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    if(isArm(num)){
        cout << num << " is Armstrong number!" << endl;
    }else{
        cout << num << " is not Armstrong number!" << endl;
    }

    return 0;

}
