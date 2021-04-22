#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int isPrime;
    int num, sum;

    cout << "Enter number >>> ";
    cin >> num;

    sum = 0;

    cout << endl;

    cout << "Sum of all Prime Numbers between 1 to ";
    for(i = 2; i <= num; i ++){
        isPrime = 1;
        for(j = 2; j * j <= i; j ++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            sum += i;
        }
    }

    cout << num << " is: " << sum << endl;

    return 0;
}


