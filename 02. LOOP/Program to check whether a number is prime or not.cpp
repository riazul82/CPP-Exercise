#include <iostream>

using namespace std;

int main()
{
    int num;
    int i, isPrime;

    cout << "Enter number >>> ";
    cin >> num;

    isPrime = 1;

    for(i = 2; i * i <= num; i ++){
        if(num % i == 0){
            isPrime = 0;
            break;
        }
    }

    cout << endl;

    if(isPrime){
        cout << num << " is a Prime number!" << endl;
    }else{
        cout << num << " is not a Prime number!" << endl;
    }

    return 0;
}
