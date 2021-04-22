#include <iostream>

using namespace std;

int digit_sum(int n){

    if(n == 0){
        return 0;
    }

    return (n % 10) + digit_sum(n / 10);
}

int main()
{
    int num, sum;

    cout << "Enter a number >>> ";
    cin >> num;

    cout << endl;

    sum = digit_sum(num);

    cout << "Sum is: " << sum << endl;

    return 0;
}
