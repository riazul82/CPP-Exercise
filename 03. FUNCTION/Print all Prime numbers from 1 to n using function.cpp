#include <iostream>

using namespace std;

void allPrimes(int n){
    int i, j;
    int isPrime;
    cout << "All Prime numbers between 1 to " << n << " are: ";
    for(i = 2; i <= n; i ++){
        isPrime = 1;
        for(j = 2; j * j <= i; j ++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
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

    allPrimes(num);

    return 0;
}
