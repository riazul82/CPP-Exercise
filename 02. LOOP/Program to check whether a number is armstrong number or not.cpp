#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, num, sum;
    int last, digits;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    sum = 0;

    n = num;

    digits = (int)log10(num) + 1;

    while(n != 0){
        last = n % 10;
        sum += (int)pow(last, digits);
        n /= 10;
    }

    if(sum == num){
        cout << num << " is Armstrong number!" << endl;
    }else{
        cout << num << " is not Armstrong number!" << endl;
    }

    return 0;
}
