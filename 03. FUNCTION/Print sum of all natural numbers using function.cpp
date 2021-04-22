#include <iostream>

using namespace std;

int naturalSum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        sum += i;
    }
    return sum;
}

int main()
{
    int num, sum;

    cout << "Enter number >>> ";
    cin >> num;

    sum = naturalSum(num);

    cout << endl << "Sum is: " << sum << endl;

    return 0;
}


