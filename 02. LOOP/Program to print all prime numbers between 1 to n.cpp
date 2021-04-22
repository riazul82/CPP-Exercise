#include <iostream>

using namespace std;

int main()
{
    int num;
    int i, j;
    int isPrime;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    cout << "All Prime Numbers: ";
    for(i = 2; i <= num; i ++){
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

    return 0;
}
