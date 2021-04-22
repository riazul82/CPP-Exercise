#include <iostream>

using namespace std;

int oddSum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        if(i % 2 == 1){
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int num, sum;

    cout << "Enter number >>> ";
    cin >> num;

    sum = oddSum(num);

    cout << endl << "Sum of all odd numbers are: " << sum << endl;

    return 0;
}


