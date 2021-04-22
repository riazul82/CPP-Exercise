#include <iostream>

using namespace std;

int fact(int n){
    int factorial = 1;
    while(n != 0){
        factorial *= n;
        n --;
    }
    return factorial;
}

int main()
{
    int i, n;
    int num, sum;
    int last;

    cout << "Enter number >>> ";
    cin >> num;

    cout << endl << "All Strong numbers: ";
    for(i = 1; i <= num; i ++){
        n = i;
        sum = 0;
        while(n != 0){
            last = n % 10;
            sum += fact(last);
            n /= 10;
        }
        if(i == sum){
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
