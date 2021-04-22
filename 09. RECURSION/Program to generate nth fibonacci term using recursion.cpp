#include <iostream>

using namespace std;

long long fibo(int n){

    if(n <= 0){
        return 0;
    }else if(n == 1){
        return 1;
    }else{
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int i, num;

    cout << "Enter number of terms >>> ";
    cin >> num;

    cout << endl;

    cout << num << "th Fibonacci term is: " << fibo(num) << endl;

    cout << endl;

    return 0;
}
