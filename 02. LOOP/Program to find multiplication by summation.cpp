#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    int i, mul;

    cout << "Enter first number >>> ";
    cin >> n1;

    cout << "Enter second number >>> ";
    cin >> n2;

    mul = 0;

    if(n1 < n2){
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }

    if(n2 > 0){
        for(i = 1; i <= n2; i ++){
            mul += n1;
        }
    }

    if(n2 < 0){
        for(i = n2; i < 0; i ++){
            mul -= n1;
        }
    }

    cout << endl << "Multiplication: " << mul << endl;

    return 0;
}
