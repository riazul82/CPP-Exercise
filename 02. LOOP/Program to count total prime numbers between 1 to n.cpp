#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int isPrime;
    int num, ctr;

    cout << "Enter number >>> ";
    cin >> num;

    ctr = 0;

    cout << endl;

    cout << "Total Prime Numbers between 1 to ";
    for(i = 2; i <= num; i ++){
        isPrime = 1;
        for(j = 2; j * j <= i; j ++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            ctr ++;
        }
    }

    cout << num << " is: " << ctr << endl;

    return 0;
}

