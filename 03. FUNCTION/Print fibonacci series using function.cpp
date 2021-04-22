#include <iostream>

using namespace std;

void printFibo(int n){
    int i = 1;
    int a, b, c;

    a = 0;
    b = 1;
    c = 0;

    cout << "Fibonacci numbers: ";
    while(i <= n){
        cout << c << " ";
        c = a + b;
        a = b;
        b = c;
        i ++;
    }
    cout << endl;
}

int main()
{
    int num;

    cout << "Enter number of Fibonacci numbers >>> ";
    cin >> num;

    cout << endl;

    printFibo(num);

    return 0;
}
