#include <iostream>

using namespace std;

int isPrime(int n){
    int i;
    for(i = 2; i * i <= n; i ++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl;

    if(isPrime(num)){
        cout << num << " is Prime!" << endl;
    }else{
        cout << num << " is not Prime!" << endl;
    }

    return 0;
}
