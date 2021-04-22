#include <iostream>

using namespace std;

int main()
{
    int i, num;
    int a, b, c;

    cout << "Enter number >>> ";
    cin >> num;

    a = 0;
    b = 1;
    c = 0;

    i = 0;

    cout << endl << "Fibonacci series: ";
    while(i <= num){
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
        i ++;
    }

    cout << endl;

    return 0;
}
