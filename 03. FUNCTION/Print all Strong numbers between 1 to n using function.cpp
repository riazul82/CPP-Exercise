#include <iostream>

using namespace std;

int fact(int n){
    int factorial = 1;
    while(n != 0){
        factorial *= n;
        n --;
    }
}

void allStrong(int n){
    int x, i;
    int sum, last;
    cout << "All Strong numbers between 1 to " << n << " are: ";
    for(i = 1; i <= n; i ++){
        x = i;
        sum = 0;
        while(x != 0){
            last = x % 10;
            sum += fact(last);
            x /= 10;
        }
        if(sum == i){
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

    allStrong(num);

    return 0;
}
