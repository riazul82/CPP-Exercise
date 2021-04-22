#include <iostream>

using namespace std;

int evenSum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        if(i % 2 == 0){
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

    sum = evenSum(num);

    cout << endl << "Sum of all even numbers are: " << sum << endl;

    return 0;
}


